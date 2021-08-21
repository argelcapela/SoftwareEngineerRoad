<?php

// pega os valores dos campos!
$txtusuario = $_POST['txtnome'];
$txtemail = $_POST['txtemail'];
$txtsenha = $_POST['txtsenha'];
$datanasci = $_POST['datanasci'];

try
{
// conectando BD
$cnx = new PDO("mysql:host=localhost;dbname=argelcapela_rf_gd","root",""); 

// prepara a query
$stmt = $cnx->prepare("insert into usuarios(nomeusuario,emailusuario,senhausuario) values(:nomeusuario,:emailusuario,:senhausuario)");

// add os valores das colunas
$stmt->bindParam(':nomeusuario',$txtusuario);
$stmt->bindParam(':emailusuario',$txtemail);
$stmt->bindParam(':senhausuario',$txtsenha);

// enviar
$result = $stmt->execute();


// sucesso!
echo "<script>alert('Sucesso!');</script>";
$cnx = null;

}
catch(PDOException $e)
{
   echo $e->getMessage(); 
}




// redireciona para a página novamente!
//header('location:insert.php');
?>
 <meta http-equiv="refresh"  content="0;url=insert.php">