<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>

<div id="janInicio">
	<label>Data de Entrada:</label><br>
		<input type="date" id="dataEntrada" >
		<input type="time" id="horaEntrada" >

<br>

	<label>Data de Saída:</label><br>
		<input type="date" id="dataSaida" >
		<input type="time" id="horaSaida" >

		<button type="button" onclick="calcularDiaria();">Calcular</button>
</div>

<div id="janDiaria" hidden>
	<h1>Diária</h1>
	<hr>
	<span id="valorFinal"></span>


</div>


<script src="ajax.js"></script>
</body>
</html>