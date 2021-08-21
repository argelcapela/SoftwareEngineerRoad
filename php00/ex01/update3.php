<?php



	// pega vars do POST
	$NOMEUSUARIO = $_POST['NOMEUSUARIO'];
	$SENHAUSUARIO = $_POST['SENHAUSUARIO'];
	$EMAILUSUARIO = $_POST['EMAILUSUARIO'];
	SESSION_START();
	$NOMEUSUARIOORIGINAL = $_SESSION['sNOMEUSUARIO'];

	try
	{
	// conecta banco
		$cnx = new PDO("mysql:host=localhost;dbname=argelcapela_rf_gd","root","");

	// query update
		$stmt = $cnx->prepare("UPDATE USUARIOS SET NOMEUSUARIO=:varNOMEUSUARIO,EMAILUSUARIO=:varEMAILUSUARIO,SENHAUSUARIO=:varSENHAUSUARIO WHERE NOMEUSUARIO=:varNOMEUSUARIOORIGINAL");

		$stmt->bindParam(":varNOMEUSUARIO",$NOMEUSUARIO);
		$stmt->bindParam(":varEMAILUSUARIO",$EMAILUSUARIO);
		$stmt->bindParam(":varSENHAUSUARIO",$SENHAUSUARIO);
		$stmt->bindParam(":varNOMEUSUARIOORIGINAL",$NOMEUSUARIOORIGINAL);
		$result = $stmt->execute();

	// verificando resposta
		if($result)
		{
			echo "<script>alert('Dados Atualizados com Sucesso!')</script>";
			echo "<meta http-equiv='refresh' content='0, url=update.php'>";
		}

		$cnx = null;
		session_destroy();


	}
	catch(PDOExceptoin $e)
	{
		echo "<script>alert('". $e->getMessage() ."');</script>";
	}


	
?>