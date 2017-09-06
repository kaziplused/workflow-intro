<!DOCTYPE html>
<html>
<title>Array Sum</title>
<body>

<?php
$x=array(1,2,3,4,5,6,7,8);
$string=implode(",",$x);


echo sizeof($x). "<br />".$string. "<br />".array_sum($x);

?>

</body>
</html>
