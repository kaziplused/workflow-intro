<?php
    function sum_even($sentArray){
      //create a temporary array
    $even = array();
    //loop through the submitted array and generate an array of even numbers alone
        for($i=0; $i< count($sentArray); $i++){
            //check for even numbers
            if($sentArray[$i] % 2 == 0 ){
                $even[] = $sentArray[$i];
            }
        } return array_sum($even);//return sum of values
    }
?>
