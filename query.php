<?php
if (isset($_GET['param'])){
    $result = str_replace('/query.php?/code', '', $_GET["param"]);

    if (!$result){
            $msg = 'Je hebt het eerste stukje van onze code al gebroken, mooi werk maar...<br/>jammer want je bent er nog niet helemaal :)';
    } elseif (substr($result, 0, 1) == '=') {
        if (strtoupper(substr($result, 1, 6)) == 'STEAMY'){
            $msg = 'Knap, je hebt het helemaal ontcijferd :) :) :)<br /><a href="/query.php?2'.date('dYmddmd').'='.date('ddYdmmmd').'-{01-05-15-12-09-16-09-12-05}">OP NAAR STAP 2!</a>';
        } else {
            $msg = "Hmmm, bijna, maar oh so close!";
        }
    } else {
        $msg = "Sorry, maar een cruciaal element ontbreekt in je code..."; 
    } ?>
    <html>
        <head>
            <title>Kraak de code! - stap 1</title>
        </head>
        <body style="font: 3em sans-serif; background: url('http://argus.kta1-hasselt.be/KTA1logo.jpg') no-repeat center 10px;">
            <div style="display: table; height: 100%; width: 100%; overflow: hidden;">
                <div style="display: table-cell; text-align: center; vertical-align: middle;">
                    <div>
                        <?php print $msg; ?>
                    </div>
                </div>
            </div>
        </body>
    </html>
<?php exit; } ?>
<?php if (isset($_GET['2'.date('dYmddmd')])){ 
    if ($_GET['2'.date('dYmddmd')] == date('ddYdmmmd').'-{01-05-15-12-09-16-09-12-05}') { ?>
    <html>
        <head>
            <title>STEAMY -> Je kraakte de code! - stap 2</title>
        </head>
        <body style="font: 3em sans-serif; background: url('http://argus.kta1-hasselt.be/KTA1logo.jpg') no-repeat center 10px;">
            <div style="display: table; height: 100%; width: 100%; overflow: hidden;">
                <div style="display: table-cell; text-align: center; vertical-align: middle; padding-top: 100px; width: 100%;">
                    <div style='text-align: center;'>
                        Ben jij de eerste moderne 'STEAMY'?<br />Hmm, ik denk het niet...<br />
                        <hr />
                        <table style='font-size: .4em; width: 100%;'>
                            <tr>
                                <td style='width: 50%; padding-left: 100px;'>
                                    <h3>Wie was dat dan wel?</h3>
                                    <ol type='a'>
                                        <li>Dr. Felix Bloch</li>
                                        <li>Denis Papin</li>
                                        <li>Thomas Avery</li>
                                        <li>Na Na Hey Hey Kiss Him Goodbye</li>
                                        <li>Mike Harrington</li>
                                        <li>James Watt</li>
                                        <li>George Stephenson</li>
                                        <li>Thomas Newcomen</li>
                                        <li>Heron van Alexandri&euml;</li>
                                        <li>Gabe Newell</li>
                                        <li>Dr. Edward Mills Purcell</li>
                                        <li>Chris Bachalo</li>
                                        <li>Christiaan Huygens</li>
                                    </ol>
                                </td>
                                <td style='width: 50%'>
                                    <form action="/query.php" method="POST">
                                        <input name="3<?php print date('mmddmmY'); ?>" type="hidden" value="<?php print date('dYymyY'); ?>" />
                                    <input type='text' accept="abcdefghijklmABCDEFGHIJKLM" name="answer" style="font-size: 100px; width: 200px; text-align: center;" maxlength="1" tabindex="1" value="?" /><br />
                                    <input type='submit' id="answerBtn" value='antwoord verzenden' style="height: 50px; width: 200px; text-align: center;" />
                                    </form>
                                </td>
                            </tr>
                        </table>
                    </div>
                </div>
            </div>
        </body>
    </html>
<?php exit; } else { ?>
    <html>
        <head>
            <title>Kraak de code! - stap 2</title>
        </head>
        <body style="font: 3em sans-serif; background: url('http://argus.kta1-hasselt.be/KTA1logo.jpg') no-repeat center 10px;">
            <div style="display: table; height: 100%; width: 100%; overflow: hidden;">
                <div style="display: table-cell; text-align: center; vertical-align: middle;">
                    <div>
                        Neeneen, dit is niet hoe je het moet doen :)
                    </div>
                </div>
            </div>
        </body>
    </html>
<?php exit; } } ?>
<?php if (isset($_POST['3'.date('mmddmmY')])){ 
    if (strtoupper($_POST['answer']) == 'I') { ?>
    <html>
        <head>
            <title>STEAMY&sup2; -> Je wist het juiste antwoord! - stap 3</title>
        </head>
        <body style="font: 3em sans-serif; background: url('http://argus.kta1-hasselt.be/KTA1logo.jpg') no-repeat center 10px;">
            <div style="display: table; height: 100%; width: 100%; overflow: hidden;">
                <div style="display: table-cell; text-align: center; vertical-align: middle; padding-top: 100px; width: 100%;">
                    <div style='text-align: center;'>
                        Weet jij waar "STEAMY" echt voor staat?<br />
                        <hr />
                        <table style='font-size: .4em; width: 100%;'>
                            <tr>
                                <td style='width: 50%; padding-left: 100px;'>
                                    S = Science = wetenschappen<br />
                                    T = Technology = technologie<br />
                                    E = Engineering = ingenieurswerk<br />
                                    A = Arts = kunst & creatief<br />
                                    M = Maths = wiskunde<br />
                                    <br />
                                    enne Y? :)<br />
                                    <small>tip: het goede antwoord daarnet was 'I' = "aai" ;)<br />
                                    <br />
                                    <div style="font-size: 50px; font-weight: bold;">YOU!</div>
                                </td>
                                <td>
                                    En dit is de laatste uitdaging,<br />want we vragen je nog een laatste stapje te doen :-)<br />
                                    <hr />
                                    Maak een videoclip, tekst, tekening, website, ... of wat je maar wil,<br />met als onderwerp '<b>IK STOOM ME KLAAR VOOR...</b>'<br />
                                    <br />
                                    Het resultaat mag je opsturen naar onze school of persoonlijk komen afgeven op volgend adres:<br/>
                                    <br />
                                    <b>KTA 1 Hasselt<br />
                                    tav. STEAMY - directie<br />
                                    Vildersstraat 28 - 3500 Hasselt</b><br />
                                    <br />
                                    Voor meer informatie kan je altijd terecht op onze website:<br /><a href="http://www.kta1-hasselt.be">www.kta1-hasselt.be</a>
                                    
                                </td>
                            </tr>
                        </table>
                    </div>
                </div>
            </div>
        </body>
    </html>
<?php exit; } else { ?>
    <html>
        <head>
            <title>Kraak de code! - stap 3</title>
        </head>
        <body style="font: 3em sans-serif; background: url('http://argus.kta1-hasselt.be/KTA1logo.jpg') no-repeat center 10px;">
            <div style="display: table; height: 100%; width: 100%; overflow: hidden;">
                <div style="display: table-cell; text-align: center; vertical-align: middle;">
                    <div>
                        Hmm, niet zo makkelijk h&eacute;!<br />Kijk nog eens goed op Wikipedia wat daar staat...
                    </div>
                </div>
            </div>
        </body>
    </html>
<?php exit; } } ?>