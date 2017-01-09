<?php if (!$label_hidden) : ?>
<div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
<?php endif; ?>

<?php
// Reduce number of images in teaser view mode to single image
if ($element['#view_mode'] == 'teaser') : ?>
<div class="field-item field-type-image even"<?php print $item_attributes[0]; ?>><?php print render($items[0]); ?></div> 
<?php return; endif; ?>

<?php $node=$element['#object']; $lang="und"; ?>

<?php $numberOfImages=0; foreach ($node->field_image[$lang] as $key=>$file) { $numberOfImages++; } ?>

<div class="images-container clearfix">
<?php if ($numberOfImages>1) { ?>    

    <!-- #service-slider -->
    <div id="service-slider" class="flexslider">
        <ul class="slides">
            <?php $i=0; foreach ($node->field_image[$lang] as $key=>$file) { $i++; ?>
            <li>
                <a class="image-popup overlayed" href="<?php print file_create_url($node->field_image[$lang][$key]['uri']); ?>" title="<?php print $node->field_image[$lang][$key]['title']; ?>">
                <img src="<?php print image_style_url('large', $node->field_image[$lang][$key]['uri']); ?>" alt="<?php print $node->field_image[$lang][$key]['alt']; ?>" title="<?php print $node->field_image[$lang][$key]['title']; ?>"/>
                <span class="overlay large"><i class="fa fa-plus"></i></span>
                </a>
                
                <?php if ($node->field_image[$lang][$key]['title'] || $node->field_image[$lang][$key]['alt']) :?>
                <div class="image-caption hidden-xs">
                    <?php if ($node->field_image[$lang][$key]['title']) :?>
                    <h4><?php print $node->field_image[$lang][$key]['title']; ?></h4>
                    <?php endif; ?>
                    <?php if ($node->field_image[$lang][$key]['alt']) :?>
                    <p><?php print $node->field_image[$lang][$key]['alt']; ?></p>
                    <?php endif; ?>
                </div>
                <?php endif; ?>
            </li>
            <?php } ?> 
        </ul>
    </div> 
    <!-- EOF:#service-slider -->

    <!-- #service-slider-carousel -->
    <div id="service-slider-carousel" class="flexslider">
        <ul class="slides">
            <?php $i=0; foreach ($node->field_image[$lang] as $key=>$file) { $i++; ?>
            <li><img src="<?php print image_style_url('medium', $node->field_image[$lang][$key]['uri']); ?>" alt="<?php print $node->field_image[$lang][$key]['alt']; ?>" title="<?php print $node->field_image[$lang][$key]['title']; ?>"/></li>
            <?php } ?> 
        </ul>
    </div>    
    <!-- EOF:#service-slider-carousel --> 

<?php } else { ?>

    <div class="image-preview">
    
    <a class="image-popup overlayed" href="<?php print file_create_url($node->field_image[$lang][0]['uri']); ?>" title="<?php print $node->field_image[$lang][0]['title']; ?>">
    <img src="<?php print image_style_url('large', $node->field_image[$lang][0]['uri']); ?>" alt="<?php print $node->field_image[$lang][0]['alt']; ?>" title="<?php print $node->field_image[$lang][0]['title']; ?>"/>
    <span class="overlay large"><i class="fa fa-plus"></i></span>
    </a>
    
    <?php if ($node->field_image[$lang][0]['title'] || $node->field_image[$lang][0]['alt']) :?>
    <div class="image-caption hidden-xs">
        <?php if ($node->field_image[$lang][0]['title']) :?>
        <h4><?php print $node->field_image[$lang][0]['title']; ?></h4>
        <?php endif; ?>
        <?php if ($node->field_image[$lang][0]['alt']) :?>
        <p><?php print $node->field_image[$lang][0]['alt']; ?></p>
        <?php endif; ?>
    </div>
    <?php endif; ?>

    </div>

    <?php } ?>
</div>  

<?php
drupal_add_js(drupal_get_path('theme', 'www_kta1_hasselt_be') .'/js/magnific-popup/jquery.magnific-popup.js', array('preprocess' => false));
drupal_add_css(drupal_get_path('theme', 'www_kta1_hasselt_be') . '/js/magnific-popup/magnific-popup.css');

drupal_add_js('
    jQuery(document).ready(function($) {
        $(window).load(function() {

			$(".image-popup").magnificPopup({
			type:"image",
			removalDelay: 300,
			mainClass: "mfp-fade",
			gallery: {
			enabled: true, // set to true to enable gallery
			}
			});

        });
    });',array('type' => 'inline', 'scope' => 'footer', 'weight' => 3)
);
if ($numberOfImages>1) { 
drupal_add_js ('        
    jQuery(document).ready(function($) {
        // store the slider in a local variable
        var $window = $(window),
        flexslider;

        // tiny helper function to add breakpoints
        function getGridSize() {
        return (window.innerWidth < 768) ? 2 : 4;
        }

        $(window).load(function() {
        
        $("#service-slider").fadeIn("slow");
        $("#service-slider-carousel").fadeIn("slow");

        // The slider being synced must be initialized first
        $("#service-slider-carousel").flexslider({
        animation: "slide",
        controlNav: false,
        animationLoop: false,
        slideshow: false,
        itemWidth: 172.5,
        itemMargin: 20,
        prevText: "",           
        nextText: "",
        asNavFor: "#service-slider",
        minItems: getGridSize(), // use function to pull in initial value
        maxItems: getGridSize(), // use function to pull in initial value
        start: function(slider){
        flexslider = slider;
        }        
        });

        $("#service-slider").flexslider({
        useCSS: false,            
        animation: "slide",
        controlNav: false,
        directionNav: false,
        animationLoop: false,
        slideshow: false,
        sync: "#service-slider-carousel"
        });
        
        });

        // check grid size on resize event
        $window.resize(function() {
        var gridSize = getGridSize();
        flexslider.vars.minItems = gridSize;
        flexslider.vars.maxItems = gridSize;
        });

    });',array('type' => 'inline', 'scope' => 'footer', 'weight' => 4)
);
}
?>