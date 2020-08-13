<?php
session_start();
include('db.php');
if(isset($_POST['submit'])) 
{
    $studid = $_POST['stud_id'];
    
    $query = "SELECT * FROM `info` WHERE `stud_id`='$studid' ";
    $run = mysqli_query($con,$query);
    $row = mysqli_num_rows($run);
    if($row==1)
    {
        $_SESSION['stud_id'] = $studid;
        $user_row = mysqli_fetch_assoc($run);
    ?>
        <html>
          <h3><?php echo "Student Id is ". $user_row['stud_id']. "<br>";
          echo "Student name is ". $user_row['stud_name']. "<br>";
          echo "The branch is ". $user_row['branch']. "<br>";
          echo "The CGPA is ".$user_row['cgpa']. "<br>";
          ?></h3>
        </html>
    <?php
    }
    else
    {
        echo "Login unsuccessful";
        echo mysqli_error($con);
    }
}
?>


