<style>

table
{
	

}

tr
{
	border:1px solid black;

}

td
{
	/*width:300px;*/
	border:1px solid black;
}

</style>
<?php
	try
	{


		// conecta com o banco
	$conn = new PDO("mysql:host=localhost;dbname=argelcapela_rf_gd","root","");

		// envia uma query
	$smtm = $conn->query("select * from usuarios");

		// transforma em um array os dados recebidos
		// PDO::FETCH_ASSOC -> o indice do array é o nome da coluna da tabela.

	$usuarios = $smtm->fetchAll();

	//PRINT_R ($usuarios);


		// exibe
	// Foreach ele entra e passa por cada row
	/*foreach($usuarios as $linha)
	{

		echo "<table><tr>";

		echo "<td>". $linha['NOMEUSUARIO'] ."</td>". 
		 	 "<td>". $linha['DATAUSUARIO']  ."</td>". 
		 	"<td>".  $linha['EMAILUSUARIO'] ."</td>". 
		 	 "<td>". $linha['SENHAUSUARIO'] ."</td>";



		echo "</tr></table>";
	}
	*/

	//print_r ($usuarios);  // exibe uma serie de dados!
	//var_dump ($usuarios);

	//echo json_encode($usuarios); // -> converte para JSON!


// 
/* ENTÃO... SEM O FETCH_ASSOC VOCÊ PODE BUSCAR A COLUNA DE UM REGISTRO PELO NÚMERO TAMBÉM! 

	Array ( 


		[0] => Array ( 
			[IDUSUARIO] => 1 [0] => 1
			 [NOMEUSUARIO] => Argel Capela [1] => Argel Capela 
			 [DATAUSUARIO] => 0000-00-00 [2] => 0000-00-00 
			 [EMAILUSUARIO] => argelcapeladossantos@gmail.com [3] => argelcapeladossantos@gmail.com 
			 [SENHAUSUARIO] => beatrizbaldino [4] => beatrizbaldino
			  [TIPOUSUARIO] => 3 [5] => 3 ) 

		[1] => Array ( 
			  	[IDUSUARIO] => 3 [0] => 3 
			  	[NOMEUSUARIO] => Beatriz Baldino [1] => Beatriz Baldino 
			  	[DATAUSUARIO] => 2011-11-11 [2] => 2011-11-11 
			  	[EMAILUSUARIO] => b@b.com [3] => b@b.com 
			  	[SENHAUSUARIO] => nutricao [4] => nutricao 
			  	[TIPOUSUARIO] => 2 [5] => 2 )

	     [2] => Array ( 
				[IDUSUARIO] => 5 [0] => 5 
				[NOMEUSUARIO] => gm1 [1] => gm1
				[DATAUSUARIO] => 2011-11-11 [2] => 2011-11-11 
				[EMAILUSUARIO] => [3] => 
				[SENHAUSUARIO] => gm1 [4] => gm1 
				[TIPOUSUARIO] => 2 [5] => 2 ) ) Argel Capela

*/

/*
ANALISANDO O RESULTADO DE UM FetchAll(PDO::ASSOC_FETCH)
	Array 
	( 
	[0] => 
	Array 
	( 
	   [IDUSUARIO] => 1
	   [NOMEUSUARIO] => Argel Capela 
	   [DATAUSUARIO] => 0000-00-
	   [EMAILUSUARIO] => argelcapeladossantos@gmail.com
	   [SENHAUSUARIO] => beatrizbaldino 
	   [TIPOUSUARIO] => 3 
	   ) 

    [1] => 
	Array ( 
	[IDUSUARIO] => 3 
	[NOMEUSUARIO] => Beatriz Baldino 
	[DATAUSUARIO] => 2011-11-11
	 [EMAILUSUARIO] => b@b.com
	  [SENHAUSUARIO] => nutricao 
	  [TIPOUSUARIO] => 2 )

	 [2] => Array ( 
	 [IDUSUARIO] => 5 
	 [NOMEUSUARIO] => gm1
	  [DATAUSUARIO] => 2011-11-11 
	  [EMAILUSUARIO] => 
	  [SENHAUSUARIO] => gm1 
	  [TIPOUSUARIO] => 2 )

 )
	*/




//echo count($usuarios);


echo "<table>"; 
for( $regis=0; $regis < count($usuarios);$regis++)
{
	echo "<tr>";
	for( $row=0; $row<4 ; $row++)
	{
		echo "<td>".$usuarios[$regis][$row]."</td>";
	}
	echo "</tr>";
}
echo "</table>";


echo "<script>function pInsert(){document.location.href='insert.php'};";
echo "function pUpdate(){document.location.href='update.php'}";
echo "</script>";

//echo "<button type='button' onclick='pInsert();'>".
	 "CADASTRAR</button>";

//echo "<button type='button' onclick='pUpdate()'> UPDATE </button>";

		


	$conn = null;

	}
	catch (PDOException $e)
	{


		echo $e->getMessage();



	}
		



?>