<?php
try
{

$nVotos = $_POST["nVotos"];


$filename = "poll_result.txt";
$content = file($filename);

$array = explode("||", $content[0]);
$yes = $array[0];
$no = $array[1];



if ($nVotos == 1) {
	$yes = intval($yes) +1;
}

if ($nVotos == 0) {
	$no = intval($no) +1;
}

$insertvote = $yes. "||". $no;
$fp = fopen($filename, "w");
fputs($fp,$insertvote);
fclose($fp);

$yes = intval($yes);
$no = intval($no);

echo "<script>alert('Sucesso!');</script>";
}
catch(Exception $e)
{
	echo $e->getMessage();
}

?>


<h2>Resultados: </h2>
<table>

<tr>
	<td>Yes: </td>
	<td><?php echo(100*round($yes/($no+$yes),2)); ?>%</td>
</tr>

<tr>
	<td>No: </td>
	<td><?php echo(100*round($no/($no+$yes),2));  ?>%</td>
</tr>

</table>


