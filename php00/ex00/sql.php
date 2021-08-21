<?php
class banco{
// ONLINE SERVER
/*$user="epiz_27917793";
$pw="AcQVsAkAwNHNNr";
$server="sql203.epizy.com";
$db="epiz_27917793_myportfolio";
*/

// LOCAL SERVER
private $user;
private $pw;
private $server;
private $db;
private $conn;


function __construct()
{
$this->user="root";
$this->pw="";
$this->server="localhost";
$this->db="argelcapela.rf.gd";
$this->conn=null;


}

public function open()
{
$this->conn = new PDO
("mysql:host=".$this->server.";dbname=".$this->db,$this->user,$this->pw);

$this->conn->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);

echo "<script>console.log(Connected successfully!);</script>";
}

public function close(){
$this->conn=null;
}

public function q($query)
{


}
}



?>