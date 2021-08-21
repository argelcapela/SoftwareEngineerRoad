function calcularDiaria()
{

// VALIDATION...
var dataEntrada=document.getElementById("dataEntrada").value;
var horaEntrada=document.getElementById("horaEntrada").value;
var dataSaida=document.getElementById("dataSaida").value;
var horaSaida=document.getElementById("horaSaida").value;

if (dataEntrada==""  || horaEntrada=="" || dataSaida==""   || horaSaida==""     ) 
{
	alert("Preencha todos os campos direitinho primeiro!");
	return;
}




// REQUISICION WITH XMLHttpRequest...
			var xmlhttp = new XMLHttpRequest();
			xmlhttp.open("POST","calculaDiaria.php");
			xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
			xmlhttp.send
			(
				"dataEntrada="+dataEntrada+"&"+
				"horaEntrada="+horaEntrada+"&"+
				"dataSaida="+dataSaida+"&"+
				"horaSaida="+horaSaida
			);

			xmlhttp.onreadystatechange= function()
			{if (this.status==200&&this.readyState==4){
				janDiaria.style.display="block";
				document.getElementById("valorFinal").innerHTML=this.responseText;
			}};


// REQUISICION WITH Fetch...





}