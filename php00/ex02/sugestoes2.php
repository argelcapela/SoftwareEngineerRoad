<?php

$a[] = "Ana";
$a[] = "Analita";
$a[] = "Amanda";
$a[] = "Argel";
$a[] = "Bruna";
$a[] = "Charlote";
$a[] = "David";
$a[] = "Esteven";
$a[] = "Felipe";
$a[] = "Gregory";
$a[] = "Hugo";
$a[] = "Ingrid";


// recuperar o valor da requisição
$q=$_POST['q'];


// se é diferente de "" buscar na lista de array
$sugestao = "";

if($q !== "")
{
	// to lowercase letter
	$q = strtolower($q);

	// verificar
	$len = strlen($q);

	foreach($a as $name)
	{
		//
		if(stristr($q, substr($name, 0, $len)))
		{
			// 
			if($sugestao === "")
			{
				$sugestao = $name;
			}
			else
			{
				$sugestao .= ", $name";
			}

		}

	}




}

// retorno para a requisição...

echo $sugestao === "" ? "Sem sugestões!" : $sugestao;


?>