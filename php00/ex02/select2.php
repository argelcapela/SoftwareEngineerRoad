<?php
include_once "sql.php";
$sltnomeusuario = ($_POST['q']); 
$v1 = $_POST['teste1'];
$v2 = $_POST['teste2'];
$v3 = $_POST['teste3'];

$b = new crud();
$b->sqlselectb("USUARIOS","NOMEUSUARIO='".$sltnomeusuario."'");

echo "<table>
	  <tr>
	  	<td>Nome Usuário:</td>
	  	<td>Email:</td>
	  	<td>Tipo Usuário:</td>
	  	<td>Senha:</td>
	  </tr>
";

$r = $b->result;
foreach($r as $row)
{
	echo "<td>".$r[0]['NOMEUSUARIO']."</td>";
	echo "<td>".$r[0]['EMAILUSUARIO']."</td>";
	echo "<td>".$r[0]['TIPOUSUARIO']."</td>";
	echo "<td>".$r[0]['SENHAUSUARIO']."</td>";
}
echo "</table>";


echo $v1;
echo $v2;
echo $v3;

?>