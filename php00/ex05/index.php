<?php

$xmlDoc=new DOMDocument();
$xmlDoc->load("usuarios.xml");

// testes básicos
$x = $xmlDoc->getElementsByTagName('USUARIO');
$xlen = count($x);





	



//}


// visualizando
/*DOMElement 
	Object ( [tagName] => 
		USUARIO [schemaTypeInfo] => 
		[firstElementChild] => 
		(object value omitted)
		 [lastElementChild] => 
		 (object value omitted)
		  [childElementCount] => 3
		   [previousElementSibling] => 
		   [nextElementSibling] =>
		    (object value omitted) 
		    [nodeName] => USUARIO
		     [nodeValue] => ARGEL CAPELA ARGEL@GMAIL.COM 123456 
		     [nodeType] => 1 
		     [parentNode] => 
		     (object value omitted) 
		     [childNodes] => 
		     (object value omitted) 
		     [firstChild] => 
		     (object value omitted) 
		     [lastChild] => 
		     (object value omitted) 
		     [previousSibling] =>
		      (object value omitted) 
		      [nextSibling] => 
		      (object value omitted) 
		      [attributes] => 
		      (object value omitted)
		       [ownerDocument] => 
		       (object value omitted) 
		       [namespaceURI] => 
		       [prefix] => 
		       [localName] => USUARIO
		        [baseURI] => file:/C:/xampp/htdocs/php%208/XML&JSON%205%20-%20introducao/usuarios.xml
		         [textContent] => ARGEL CAPELA ARGEL@GMAIL.COM 123456 )
*/

/*

DOMText Object 
( [wholeText] => 
	[data] => 
	[length] => 3 
	[previousElementSibling] => 
	[nextElementSibling] => 
(object value omitted) [nodeName] => 

#text [nodeValue] => 
[nodeType] => 3 
[parentNode] => 
(object value omitted) 
[childNodes] => 
(object value omitted) 
[firstChild] => 
[lastChild] => 
[previousSibling] => 
[nextSibling] => 
(object value omitted) 
[attributes] => 
[ownerDocument] => 
(object value omitted) 
[namespaceURI] => 
[prefix] => 
[localName] => 
[baseURI] => file:/C:/xampp/htdocs/php%208/XML&JSON%205%20-%20introducao/usuarios.xml 
[textContent] => )
*/

// tudo em tabela bonitinho

?>