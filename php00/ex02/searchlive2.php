<?php
try
{

$str=$_POST['str'];
$xmlDoc=new DOMDocument();
$xmlDoc->load("links.xml");
$x=$xmlDoc->getElementsByTagName('link');

//echo $str;
//print_r($x);

if(strlen($str)>0)
{
	$suges="";
	for($i=0; $i<($x->length); $i++) //6x
	{
		$y=$x->item($i)->getElementsByTagName('title'); // pega a tag title

		$z=$x->item($i)->getElementsByTagName('url');  // pega a tag url


		if($y->item(0)->nodeType==1) // se a tag title...
		{
			if(stristr($y->item(0)->childNodes->item(0)->nodeValue,$str))
			{
				if($suges=="")
				{
					$suges="<a href='".
					$z->item(0)->childNodes->item(0)->nodeValue.
					"' target='_blank'>".
					$y->item(0)->childNodes->item(0)->nodeValue. "</a>";
				}
				else
				{
					$suges .= "<br /> <a href='".$z->item(0)->childNodes->item(0)->nodeValue ."' target='_blank' >" . $y->item(0)->childNodes->item(0)->nodeValue ."</a>";
				}
			}
		}
	}
}

//
if($suges=="")
{
	$response="Sem sugestão!";
}
else
{
	$response=$suges;
}


echo $response;

}
catch(Exception $e)
{
	echo $e->getMessage();
}



?>