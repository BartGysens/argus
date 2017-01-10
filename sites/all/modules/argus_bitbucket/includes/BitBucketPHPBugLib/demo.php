<?php 
include('bitbucket.lib.php');
?>
<!DOCTYPE HTML>
<html>
<head>

<title>BitBucket PHP Bug Lib Demo</title>
<meta name="robots" content="noindex, nofollow, noarchive" />

<style type="text/css">
    body{
        font-family: Arial, Helvetica, sans-serif;
        font-size:13px;
    }
    /* Example styling the bug form and messages. */
    .bugformsuccess{
        color:#00cc00;
    }
    .bugformerror{
        color:#dd0000;
    }
    .bugform input,
    .bugform textarea{
        width:260px;
        border: 1px solid #0000aa;
        background-color:#f6f6f6;
        padding: 5px;
        font-family: Arial, Helvetica, sans-serif;
        font-size:1.1em;
        border-radius: 5px;
    }
    .bugform input:focus,
    .bugform textarea:focus {
        background: #fff;
        border: 1px solid #9999ff;
    }
    .bugformsubmit{
        width:100px !important;
        border-width:2px !important;
    }
    .bugformsubmit:hover{
        cursor:pointer;
        background: #fff;
        border: 1px solid #9999ff;
    }
    .bugform label{
        padding-top:4px;
    }
</style>


</head>


<body>


<h1>BitBucket PHP Bug Lib Demo</h1>

<div  style="max-width:500px;">
    <p>This is a demo of the PHP wrapper library for BitBucket Issue submission. You must edit the source code found in this file to use your authentication and repository values before it will work. It is recommended to use this plugin behind a login as it only uses basic BitBucket API authentication.</p>

    <p><b>Recommendation:</b> Create a Team account in BitBucket, then under that team create a group with only Read permissions (ex: "Exernal API Requests"). Create a user which will be used ONLY by this plugin. The user should be a member of just that read-only group, no other groups. It can still POST new issues, but cannot edit them. <i>Change the password for this user frequently.</i></p>

    <p>If someone wants to submit a modification to this plugin which uses OAuth, it would be appreciated.</p>
</div>


<br />


<h2>Submit A Bug</h2>


<?php

// Config Values:
$basicAuth = 'YXZABCDABCDabcdabcdFoo==';    // Base64 encode of:   username:password   of your Read only user.
$bitBucketAccount = 'acmeinc';              // Team account which contains your repo.
$bitBucketRepo = 'myproject';               // Name of your repo.
$issueComponent = '';                       // Component name for this issue. It is recommended to set up an 'Unsorted' (or similar) component to flag unprocessed bugs.
$companyName = 'ACME Enterprises';          // The name of your company or department (used for the confirmation email).
$fromEmail = 'support@example.com';         // From address of confirmation email sent to user.


// Process any POST.
if( isset($_POST) && !empty($_POST['bugformtitle']) && !empty($_POST['bugformdescription']) ){
    $status = submitBug($_POST['bugformtitle'], $_POST['bugformdescription'], $_POST['bugformuser'], $bitBucketAccount, $bitBucketRepo, $basicAuth, $issueComponent);
    if($status === FALSE){
        echo("<span class='bugformerror'>Sorry, there was an error submitting your bug. Please try again later or contact Support directly.</span>");
    }else{
        echo("<span class='bugformsuccess'>Thank you, your bug <b># ".$status['issueid']."</b> has been submitted.</span>");
        sendBugEmail($_POST['bugformuser'], $status['issueid'], $companyName, $fromEmail, $status['issueurl']);  // Leave URL parameter blank if you don't want it in the email.
    }      
}

// Display bug submission form.
showBugForm();
?>

</body>
</html>