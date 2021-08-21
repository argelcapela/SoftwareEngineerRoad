<?php

$nome = $_POST['nome'];
$email = $_POST['email'];
$msg = $_POST['msg'];
$assunto = $_POST['assunto'];

$msgrecebido = "Nome: " . $nome . " Email:" . $email . " Mensagem:" . $msg . " ";



echo "Sua mensagem é: <br>".$msgrecebido;



// enviando email!
$remetente='argelcapeladossantos@gmail.com';
$assunto='';
$cabecalho='From: ' . $email;

// remetente, assunto, mensagem, cabecalhos
@mail($remetente, $assunto, $msgrecebido, $cabecalho);




// Enviando EMAIL
?>

<meta http-equiv="refresh" content="0; url=index.html" >
<script>alert("Mensagem enviada com sucesso!");</script>