<?php

?>

<!DOCTYPE html>
<head>
	<title></title>
</head>

<style>

*
{
	margin:0;
	padding:0;
	box-sizing:border-box;
}	

body
{
	font-family:sans-serif;
}

nav
{
	background:black;
	color:white;
	text-align:center;
	padding:10px;
}
nav h1{
	margin-bottom:10px;
}

nav ul{padding:0;}
nav li{display:block;padding:10px;}

section
{
	width:90%;
	margin:auto;
}

iframe{
	width:100%;
	height:500px;
}





</style>

<body>
<section>

	<nav>
		<h1>AJAX - Asynchronous JavaScript and XML </h1>

		<form name="myForm">
			<ul>
				<li><input type="radio" name="myRadios" value="sugestoes.php" checked="true">1) Sugestões 1</li>
				<li><input type="radio" name="myRadios" value="select1.php">2) Select 1</li>
				<li><input type="radio" name="myRadios" value="ajaxxml.php"> 3) AJAX & XML - Getting Information: </li>
				<li><input type="radio" name="myRadios" value="searchlive.php" > 4) AJAX & XML - LIVE SEARCH</li>
				<li><input type="radio" name="myRadios" value="poll.php" >5) AJAX & XML - POLL</li><li><input type="radio" name="myRadios" value="..\sql 4 - CRUD , AJAX+PDO)\index.php" >6) CRUD com AJAX, Intermediário 1  </li>
			
			</ul>
		</form>
	</nav>

	<article>
		<iframe src="sugestoes.php"></iframe> 
	</article>

</section>


<script>

function mudaPagina(btn)
{
	document.querySelector("iframe").src=btn.value;
}


var x = document.myForm.myRadios;
//console.log(x[4]);

for(var i=0; i< x.length; i++)
{
	x[i].onclick = function()
	{
		mudaPagina(this);
	};
} 







</script>
</body>

</html>

<?php

?>