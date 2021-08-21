<html>
<head><title>Select 1</title>
<style>

table{
	border:1px solid black;
}
tr,td
{
	border:1px solid black;
}



</style>
<script>
// start
window.onload = function()
{

	document.getElementById("select").selectedIndex=-1;

}


// requisição dos dados...
function showUser(sltValue)
{
	if(sltValue == "")
	{
		document.querySelector("article").innerHTML ="";
	}
	else
	{
		var xmlhttp = new XMLHttpRequest();

		xmlhttp.open("POST","select2.php",true);
		xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");

		xmlhttp.send("q="+sltValue+"&teste1=fe&teste2=resiliencia&teste3=Trabalho Arduo");


		
		xmlhttp.onreadystatechange = function()
		{
			if(this.readyState == 4 && this.status == 200)
			document.querySelector("article").innerHTML = this.responseText;
			
		};
		
	}
}






</script>
</head>

<body>
<select id="select" onchange="showUser(this.value);">

		<?php
		// gerar dinamicamente os usuários:
			include_once "sql.php";

		// gerar options para o HTML com os usuarios: 
			$banco = new crud;
			$resultado = $banco->sqlselecta("USUARIOS");
			$t = count($banco->result);
			

			for($i=0; $i<$t;$i++)
			{
				$nUsu = $banco->result[$i]['NOMEUSUARIO'];
				echo "<option value='".$nUsu ."'>". $nUsu ."</option>";	
			}


		?>

</select>
<article>
	


</article>


</body>
</html>