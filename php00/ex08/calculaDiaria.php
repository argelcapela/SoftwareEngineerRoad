<?php
include_once "calculaData.php";


$dataEntradaFinal = $_POST['dataEntrada'] ." ".$_POST['horaEntrada'];
$dataSaidaFinal   = $_POST['dataSaida'] ." ".$_POST['horaSaida'];


$valorFinal = new calculaData($dataEntradaFinal,$dataSaidaFinal);
echo $valorFinal->getLocation();





?>