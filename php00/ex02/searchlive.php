<html>
<head></head>
<script>

function pLive(str)
{
	if(str=="")
	{
		document.getElementById('sugeslivesearch').innerHTML="";
		return;
	}

	var xmlhttp = new XMLHttpRequest();
	xmlhttp.open("POST","searchlive2.php",true);
	xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
	xmlhttp.send("str="+str);
	xmlhttp.onreadystatechange = function()
	{
		if(this.status==200&&this.readyState==4)
		document.getElementById("sugeslivesearch").innerHTML=this.responseText;
	};
	
}


</script>
<body>

<h1>Digita um produto...</h1>
<form>
	<input id="txtlivesearch" type="text" onkeyup ="pLive(this.value);" >
</form>

	<div id="sugeslivesearch"></div>


</body>
</html>