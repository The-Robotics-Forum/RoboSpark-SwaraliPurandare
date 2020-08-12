<?php
include('dbcon.php');

if(isset($_POST['btn']))
{
    $studentID = $_POST['inp'];
    //echo $studentID;
    $query = "SELECT * FROM `students` WHERE `stud_id` = '$studentID' ";
    $run = mysqli_query($con, $query);
    if($run)
    {
        echo "Student ".$studentID."'s"."  Info is";
        echo "<br>";
        $userinfo = mysqli_fetch_assoc($run);
        print_r($userinfo);
    }
    else
    {
        echo "Failed";
        echo mysqli_error($con);
    }

}

?>