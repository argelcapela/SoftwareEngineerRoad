<?php

// recuperar var
$NOMEUSUARIO = $_POST['NOMEUSUARIO'];

	session_start();
	$_SESSION['sNOMEUSUARIO'] = $NOMEUSUARIO;

try
{


// conectar
$cnx = new PDO("mysql:host=localhost;dbname=argelcapela_rf_gd","root","");

// pegar os dados com o nome de usuario
$stmt  = $cnx->query("SELECT * FROM USUARIOS WHERE NOMEUSUARIO='". $NOMEUSUARIO ."'");
$result = $stmt->fetchAll(PDO::FETCH_ASSOC);

//print_r($stmt->rowCount());

// verificar se tem retorno

if($stmt->rowCount()==0)
{
	echo "<script>alert('Não encontrado!')</script>";
	echo "<meta http-equiv='refresh' content='0,url=update.php' >";
}
else
{
	
	echo "<script>alert('Encontrado');</script>";
	//echo "<meta http-equiv='refresh' content='0,url=update3.php'>";

	// Adiciona os elementos para UPDATE
	//print_r($result);
		echo('<div id="updateusuario"><form name="fUPDATEUSUARIO" action="update3.php" method="POST" ><h1>Alterar</h1><label>NOMEUSUARIO: </label><input type="text" id="'.$result[0]["NOMEUSUARIO"] .'" name="NOMEUSUARIO" value="'.$result[0]["NOMEUSUARIO"]  .'" required><BR><LABEL>SENHAUSUARIO: </LABEL><input type="text" name="SENHAUSUARIO" value="'. $result[0]["SENHAUSUARIO"]  .'" required><BR><label>E-MAIL USUÁRIO: </label><input type="text" name="EMAILUSUARIO" value="'. $result[0]["EMAILUSUARIO"]  .'" required><BR><button type="">Alterar</button></form></div>');
		$cnx = null;
}



}
catch(PDOException $e)
{
	echo $e;
}






?>