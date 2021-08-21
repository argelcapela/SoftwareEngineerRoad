<?php

class calculaData
{
	private $dataEntrada;
	private $dataSaida;
	private $dateDiff;


	#Prices
	private $yearValue=15000;
	private $monthValue=1800;
	private $dayValue=60;
	private $hourValue=5;


	#Contruct
	public function __construct($entradaFinal,$saidaFinal)
	{
		$this->dataEntrada= new DateTime($entradaFinal, new DateTimeZone(timezone:"America/Sao_Paulo"));
		$this->dataSaida= new DateTime($saidaFinal, new 
			DateTimeZone(timezone:"America/Sao_Paulo"));

		$this->dateDiff= $this->dataEntrada->diff($this->dataSaida);

		//echo $this->dataEntrada->format('Y-m-d H:i:s');
		//echo $this->dataSaida->format('Y-m-d H:i:s') . "<br>";
	}


	public function getLocation()
	{
		$msg="";
		$finalValue=0;

		if ($this->dateDiff->y > 0) {
			$finalValue+=$this->dateDiff->y*$this->yearValue;
			$msg .= " ". $this->dateDiff->y." year(s)";  }

		if ($this->dateDiff->m > 0) {
			$finalValue+=$this->dateDiff->m*$this->monthValue;
			$msg .= " ". $this->dateDiff->m." month(s)";  }

		if ($this->dateDiff->d > 0) {
			$finalValue+=$this->dateDiff->d*$this->dayValue;
			$msg .= " ". $this->dateDiff->d." day(s)";  }	

		if ($this->dateDiff->h > 0) {
			$finalValue+=$this->dateDiff->h*$this->hourValue;
			$msg .= " ". $this->dateDiff->h." hours(s)";  }

		if ($this->dateDiff->i > 30) 
			{
				$finalValue+=$this->hourValue;
				$msg .= " ". $this->dateDiff->i." minutes(s)";  
			}
			else {

				if($this->dateDiff->i > 30 && $this->dateDiff->h <= 0)
				{
					$msg .= " " . $this->dateDiff->i ." minutes(s)"; 					
					$finalValue+=$this->hourValue;

				}
				else if($this->dateDiff->i < 30 && $this->dateDiff->h <= 0)
				{
					$msg .= " " . $this->dateDiff->i ." minutes(s)"; 					
					$finalValue+=$this->hourValue;
				}


				
			}


		return "Você selecionou o periodo de {$msg} <br>
				você devera pagar: <br>
				<strong>R$ {$finalValue},00</strong>";


	}

}


?>