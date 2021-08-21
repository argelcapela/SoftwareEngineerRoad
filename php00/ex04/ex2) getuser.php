<?php
echo "<table style='border: solid 1px black;' > ";
echo "<tr> 
<th>ID</th> 
<th>IDADE</th>  
<th>NOME</th>
<th>EMAIL</th>
</tr> ";

//
class TableRows extends RecursiveIteratorIterator
{
	function _construct($i)
	{
	parent::_construct($it, self::LEAVES_ONLY);
	}

	function current()
	{
	return "<td style=''  >" . parent::current() . "</td>";
	}

	function beginChildren()
	{
		echo "<tr>";
	}

	function endChildren()
	{
		echo "</tr>" . "\n";
	}
}

$id = $_GET['id'];

// SQL 
try
{
$conn = new PDO("mysqlhost=localhost;dbname=teste","root","");
$conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
$stmt = $conn->prepare("select * from usuarios");
$stmt->execute();

echo "<script>alert(". $e->getMessage() .");</script>";
 


// Exibir
$result = $stmt->setFetchMode(PDO::FETCH_ASSOC);
foreach (new TableRows(new RecursiveArrayIterator($stmt->fetchAll())) as $k=>$v)
{
	echo $v;

}

}
catch(PDOException $e)
{
echo "<script> alert(" . $e->getMessage() . ");</script>";	
}



$conn = null;

echo "</table>";
?>