<?php
/* 
 * Copyright (C) 2014 bartgysens
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

?>

<h2><?php print t('Overzicht'); ?></h2>

<div><em>Opmerking: de afkorting van drie letters verwijst naar het <a href="<?php print base_path(); ?>ikz">Intern Kwaliteitszorgsysteem</a></em></div>

<p>Volgende documenten zijn beschikbaar:</p>

<ul>
    <li>
        <h3>Formulieren met betrekking tot de <u>leerling</u>enpopulatie</h3>
        
        <ul>
            <li>
            <h4>Brieven (BRF)</h4>
                <ol>
                    <?php $index = 'LLN-BRF';
                    foreach ($plugins[$index] as $plugin){
                        print '<li><a href="'.base_path().'documenten_generator/'.$plugin['ref'].'">'.$plugin['title'].'</a></li>';
                    } ?>
                </ol>
            </li>
            <li>
            <h4>Contracten / begeleidingsovereenkomsten (CNT)</h4>
                <ol>
                    <?php $index = 'LLN-CNT';
                    foreach ($plugins[$index] as $plugin){
                        print '<li><a href="'.base_path().'documenten_generator/'.$plugin['ref'].'">'.$plugin['title'].'</a></li>';
                    } ?>
                </ol>
            </li>
            <li>
            <h4>Verslagen (VSG)</h4>
                <ol>
                    <?php $index = 'LLN-VSG';
                    foreach ($plugins[$index] as $plugin){
                        print '<li><a href="'.base_path().'documenten_generator/'.$plugin['ref'].'">'.$plugin['title'].'</a></li>';
                    } ?>
                </ol>
            </li>
            <li>
            <h4>Algemene administratie: mappen (MAP), stickers (STK), lijsten (LST)</h4>
                <ol>
                    <?php $index = 'LLN-DIV';
                    foreach ($plugins[$index] as $plugin){
                        print '<li><a href="'.base_path().'documenten_generator/'.$plugin['ref'].'">'.$plugin['title'].'</a></li>';
                    } ?>
                </ol>
            </li>
        </ul>
    </li>
    <li>
        <h3><u>Personeel</u>sadministratie</h3>
        
        <ul>
            <li>
            <h4>Algemene administratie: attesten (ATT)</h4>
                <ol>
                    <?php $index = 'PERS-ATT';
                    foreach ($plugins[$index] as $plugin){
                        print '<li><a href="'.base_path().'documenten_generator/'.$plugin['ref'].'">'.$plugin['title'].'</a></li>';
                    } ?>
                </ol>
            </li>
            <li>
            <h4>Brieven (BRF)</h4>
                <ol>
                    <?php $index = 'PERS-BRF';
                    foreach ($plugins[$index] as $plugin){
                        print '<li><a href="'.base_path().'documenten_generator/'.$plugin['ref'].'">'.$plugin['title'].'</a></li>';
                    } ?>
                </ol>
            </li>
            <li>
            <h4>Verslagen (VSG)</h4>
                <ol>
                    <?php $index = 'PERS-VSG';
                    foreach ($plugins[$index] as $plugin){
                        print '<li><a href="'.base_path().'documenten_generator/'.$plugin['ref'].'">'.$plugin['title'].'</a></li>';
                    } ?>
                </ol>
            </li>
        </ul>
        
    </li>
    <li>
        <h3>Algemene formulieren</h3>
        
    </li>
</ul>
