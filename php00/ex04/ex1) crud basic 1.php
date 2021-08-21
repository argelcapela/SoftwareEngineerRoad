<!DOCTYPE html>
<html lang="pt">

<head>
	<title>Basic CRUD 1</title>
	<meta type="viewport" content="width=device-width, initial-scale=1.0" >
<style>
*
{
	box-sizing:border-box;
	margin:0;
	padding:0;
}

body
{
	font-family:"Verdana";

}

header
{
	background:#ccc;
	padding:15px;
}

/*
header button
{
	border:none;
	padding:5px 10px;
	background:blue;
	color:white;
}*/

/*
header button:enabled:hover
{
	cursor:pointer;
	background:black;
	color:white;
}*/

header input
{
	padding:5px;
	font-size:15px;
}


section
{
	margin-top:10px;
	text-align:center;
}

</style>

<script>

// showUser
function showUser(str)
{
	
	/*if (str == "")
	{
		document.getElementById("gridview").innerHTML="";
		return;
	}
	else
	{*/
	try{
		var xmlhttp = new XMLHttpRequest();
		xmlhttp.onreadystatechange = function()
		{
			if (this.readyState == 4 & this.status == 200)
			{
				document.getElementById("gridview").innerHTML = this.responseText;
			}
		};
		xmlhttp.open("GET","getuser.php?id=1",true);
		xmlhttp.send();
	//}
		document.innerHTML+="Success!";

	} 
	catch ($e)
	{
		document.innerHTML+="Fail " + $e.getMessage();
		
	}

	document.getElementById("btnnovo").disabled=true;
	str.disabled=true;
	
}

// Cadastrar
function cadastrar()
{


		var xmlhttp = new XMLHttpRequest();
		xmlhttp.onreadystatechange= function()
		{
			if(this.readyState == 4 & this.status == 200)
			{
				alert("Enviado com sucesso!");
			}
		};
		xmlhttp.open("POST","insertuser.php",true);
		xmlhttp.send();




}



</script>
</head>

<body>
<header>

<form name="form" method="POST">
<label>Nome: </label><input type="text" required>
<label>Idade: </label><input type="text" required>
<label>Senha: </label><input type="password"  required>
<label>Email: </label><input type="text" required>
</form>

<button type="submit"  id="btncadastrar" onclick="cadastrar();" >Cadastrar</button>
<button type="button" id="btnnovo" onclick="" >Novo</button>
<button type="button" id="btnlistar" onclick="showUser(this); " >Listar Todos</button>

</header>

<section>
	<table id="gridview">
		<p> Press 'Listar Todos' para visualizar todos os usuários cadastrados.</p>
	</table>
</section>


</body>
</html>


<?php




?>