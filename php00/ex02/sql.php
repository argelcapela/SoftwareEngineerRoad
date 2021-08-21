<?php

class crud 
{
	public $servidor=null;
	public $dbname=null;
	public $usuario=null;
	public $senha=null;
	public $conexao=null;
	public $cnx=null;
	public $stmt=null;
	public $result=null;

	public function __construct()
	{
		// PREPARAÇÃO CONSTS!

		$this->servidor="localhost";
		$this->dbname="argelcapela_rf_gd";
		$this->usuario="root";
		$this->conexao = 'mysql:host='. $this->servidor.';dbname='. $this->dbname;
		
	}
	


	public function open()
	{
		$this->cnx = new PDO($this->conexao,$this->usuario,$this->senha);
	}


	public function close()
	{
		$this->cnx = null;
	}


	public function sqlselecta($tabela)
	{
		try
		{

			$this->open();
			$this->stmt = $this->cnx->query("SELECT * FROM ".$tabela);
			$this->result = $this->stmt->fetchAll(PDO::FETCH_ASSOC);

			
			if(count($this->result) == 0)	
			{
				echo "<script>console.log('Erro');</script>";
				return false;
			}
			else
			{
				echo "<script>console.log('Certinho');</script>";
				return true;
			}
			$this->close();

		}
		catch(PDOException $e)
		{
			echo "<script>alert('". $e->getMessage() . "');</script>";
			return false;
		}

	}

	public function sqlselectb($tabela,$condicao)
	{
		try{
		$this->open();
		$this->stmt = $this->cnx->query("SELECT * FROM ".$tabela." WHERE ".$condicao);
		$this->result = $this->stmt->fetchAll(PDO::FETCH_ASSOC);

		
		if(count($this->result) == 0)	
		{
			echo "<script>alert('Erro ... nenhum valor encontrado com esse nome');</script>";
			return false;
		}
		else
		{
			echo "<script>console.log('Certinho');</script>";
			return true;
		}
		$this->close();

		}
		catch(PDOException $e)
		{
			echo "<script>alert('". $e->getMessage() . "');</script>";
			return false;
		}
	}





	public function sqlinsert($tabela, $colunas, $valores)
	{
		try
		{
			$this->open();
			$this->stmt = $this->cnx->query("INSERT INTO ".$tabela." (".$colunas.")  VALUES (".$valores.")");


			echo "<script>console.log('Certinho!');</script>";
			$this->close();
		}
		catch(Exception $e)
		{
			echo "<script>console.log('".$e->getMessage()."');</script>";
		}

	}

	public function sqlupdate($tabela,$condicao,$valores)
	{
		try
		{
			$this->open();
			$this->cnx->query("UPDATE ".$tabela."  SET ". $valores ."  WHERE  ".$condicao);
			echo "<script>alert('Dados Atualizados com sucesso!');</script>";
			return true;
		}
		catch(PDOException $e)
		{
			echo "<script>alert('". $e->getMessage() . "');</script>";
			return false;
		}

		$this->close();

	}


	public function sqldelete($tabela,$condicaodeletar)
	{
		try
		{
			$verificar = $this->sqlselectb("USUARIOS","".$condicaodeletar);

			echo $verificar;
			if($verificar == true)
			{
				$this->cnx->query("DELETE FROM ".$tabela." WHERE ".$condicaodeletar);
				echo "<script>alert('Deletado com sucesso!');</script>";
				return true;
			}
			else
			{
				echo "<script>alert('Item a ser deletado não identificado!')";
				return false;
			}

		}
		catch(PDOException $e)
		{
			echo "<script>alert('Erro:". $e->getMessage() ."');</script>";
		}
	}

}

class rowIterator
{


}

//$teste = new crud();
//$teste->sqlupdate("USUARIOS","NOMEUSUARIO='Alex Master'","NOMEUSUARIO='Alex Capela'");


/* -- CLASSES BASICO!
class Fruit
{
	public $name;
	public $color;

	public function set_name($nome)
	{
		$this->name = $nome; 
	}

}

$banana = new Fruit();
$banana->set_name("banana");
echo $banana->name;
*/

?>

