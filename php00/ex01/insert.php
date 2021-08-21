<html>
<head> </head>
<style>
input,button
{
	width:100%;
	padding:5px;
	margin-bottom:5px;
}

</style>
<body>
<section>
<form name="cadastrousuarios" method="post" action="insert2.php">

<label>Nome:</label>
<input type="text" name="txtnome">

<label>E-mail:</label>
<input type="text" name="txtemail">

<label>Senha:</label>
<input type="text" name="txtsenha">

<label>Data</label>
<input type="date" name="datanasci">

<button type="submit">Cadastrar</button>

</form>
</section>
</body>
</html>