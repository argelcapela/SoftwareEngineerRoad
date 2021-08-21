<?php
$q = $_POST['q'];

$xmlDoc=new DOMDocument();
$xmlDoc->load("cd_catalog.xml");

$x=$xmlDoc->getElementsByTagName('ARTIST');

$y=null;

for($i=0; $i<$x->length;$i++)
{
	if ($x->item($i)->nodeType==1) 
	{
		if($x->item($i)->childNodes->item(0)->nodeValue==$q)
		{
			$y=($x->item($i)->parentNode);
			//echo "teste";
		}	
		//echo "teste";	
	}

}

$cd=($y->childNodes);

for ($i=0;$i<($cd->length);$i++)
{
	if($cd->item($i)->nodeType==1)
	{
		echo("<b>" . $cd->item($i)->nodeName . ": </b>");
		echo($cd->item($i)->childNodes->item(0)->nodeValue);
		echo("<br>");
	}
}




?>
