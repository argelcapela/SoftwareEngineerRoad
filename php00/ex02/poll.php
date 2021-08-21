<html>
<head>
	<title>AJAX POLL</title>
<script>

function fPoll(nVotos)
{

var xmlhttp = new XMLHttpRequest();
xmlhttp.open("POST","poll2.php");
xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
xmlhttp.send("nVotos=1");
	

xmlhttp.onreadystatechange = function()
{
	if (this.readyState==4&&this.status==200)
	{
		document.querySelector("article").innerHTML = this.responseText;
	}

};
xmlhttp.close();
}




</script>
<style>





</style>
</head>

<body>
<article>

	<form name="myForm">
		<h1> Do you like PHP and AJAX so far?</h1>
		<label>Yes: </label> <input type="radio" value="1" name="myRadios" 
		onclick="fPoll(this.value);" ><br>

		<label>No: </label> <input type="radio" value="0" name="myRadios" 
		onclick="fPoll(this.value);" >
	</form>

</article>

</body>
</html>