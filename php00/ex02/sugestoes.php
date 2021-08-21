<html>
<head>
	<style>





	</style>

	<script>

		function sugestoes(txt)
		{
			// verifica se o campo está vázio...
			if(txt.length==0)
			{
				document.getElementById("sugestoes").innerHTML="";
			}
			else
			{
			
			// caso não esteja vázio...

			// cria o xmlhttprequest
			var xmlhttp = new XMLHttpRequest();
			// dps de preparar, agr enviar a requisição
			xmlhttp.open("POST","sugestoes2.php",true);
			xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
			xmlhttp.send("q="+txt);
			xmlhttp.onreadystatechange = function()
			{
				if(this.readyState == 4 && this.status == 200)
				{
					document.getElementById("sugestoes").innerHTML= this.responseText;
				}

			};
			

			}
		}





	</script>
</head>

<body>
	<label>Digite um nome:</label><br>
	<input type="text" onkeyup="sugestoes(this.value);" ><br><br>
	<span>Sugestões... </span><p id="sugestoes"></p>
</body>
</html>