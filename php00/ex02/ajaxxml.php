


<html>
<head><title>HELLO WOLRD!</title>
<script>

// MODO 1 E 2
function showCD(str)
{
	if(str=="")
	{
		document.getElementById("viewCD").innerHTML="";
		return;
	}

	var xmlhttp = new XMLHttpRequest();
	
	xmlhttp.open("POST","ajaxxml2.php");

	xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");

	xmlhttp.send("q="+str);

	xmlhttp.onreadystatechange=function()
	{
		if(this.status==200&&this.readyState==4)
		{
			document.getElementById("viewCD").innerHTML=this.responseText;
			//alert();
		}

	};

// MODO 3


}

</script>
</head>

<body>

<!--
<form name="myForm">
	<select name="selectCD" onchange="showCD(this.value);" >
		<option value="" > Select a CD:</option>
		<option value="Bob Dylan" > Bob Dylan</option>
		<option value="Bee Gees" > Bee Gees</option>
		<option value="Cat Stevens" > Cat Stevens</option>
	</select>
</form>
-->

<!-- MODO 2 -->
<form>
<select  onchange="showCD(this.value);">
<option value="">Select A CD</option>
<?php
$xmldoc = new DOMDocument();
$xmldoc->load("cd_catalog.xml");

$x=$xmldoc->getElementsByTagName("ARTIST");
$xlen=$x->length;
//echo "<script>alert('".$xlen."');</script>";
//echo $xlen;

for($i=0; $i<$xlen;$i++)
{
	if($x->item($i)->nodeType==1)
	{
		$cd=$x->item($i)->childNodes->item(0)->nodeValue;;
		echo "<option value='".$cd."' >";
		echo $cd;
		echo "</option>";
	}
}


?>	

</select>
</form>





<div id="viewCD">The info will be listed here...</div>

</body>
</html>

