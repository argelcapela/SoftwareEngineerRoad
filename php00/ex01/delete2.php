<?php
// Pega variáveis:
$txtusuario = $_POST['txtusuario'];


try
{
	// conectar ao BANCO:
	$cnx = new PDO("mysql:host=localhost;dbname=argelcapela_rf_gd","root","");





	// verifica se existe!
	$stmt = $cnx->prepare("SELECT * FROM usuarios WHERE NOMEUSUARIO=:NOMEUSUARIO");
	$stmt->bindParam(":NOMEUSUARIO",$txtusuario);
	$stmt->execute();

	$result = $stmt->fetch();

	


	
	if($result == false)
	{
		echo "<script>alert('Nenhum usuário com esse nome!');</script>";

	}
	else
	{

		// query a deletar
		$stmt = $cnx->query("DELETE FROM usuarios WHERE NOMEUSUARIO='" . $txtusuario."'");
		echo "<script>alert('Deletado com sucesso!');</script>";

	}	
	

$cnx = null;




}
catch(PDOException $e)
{
	echo  $e->getMessage();

}

?>

 <meta http-equiv="refresh" content="0,url=delete.php" >  