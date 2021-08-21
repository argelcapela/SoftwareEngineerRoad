// 


var mtemas = document.myForm.mtemas;

for(var i=0; i < mtemas.length; i++)
{
	mtemas[i].onchange = function()
	{
		document.getElementById("stema").href="style"+this.value+".css";
			

	}

}


















// app vars	
	var btns = document.getElementsByClassName("calcnumber");

	var num1 = null;
	var num2 = null;
	var op = null;
	var resultado = null;



// app funcs

function calcular()
{
document.getElementById("resultado").value="";

var n1 = parseFloat(num1);
var n2 = parseFloat(num2);
var result;
switch(op)
{
	case "+":
		result = n1+n2;
		
	break;

	case "-":
		result = n1-n2;
	
	break;

	case "/":
		result = n1/n2;
		
	break;

	case "*":
		result = n1*n2;
		
	break;

	case "%":
		
		result = num1*num2/100;
		
	break;
	case "=":
		return false;
	break;
}

document.getElementById("resultado").value=result;
num1=result;
op=null;
num2=null;


}

document.getElementById("btnresultado").onclick = function()
{
		var resultado = document.getElementById("resultado").value;
		//var ultimocara = resultado.substr(resultado.length-1,resultado.length);
		if(resultado == "" | num1==null | op==null |num2==null)
		{
			alert("Termine a operação antes de querer o resultado!");
			return false;
		}

		calcular();


}

function veriImpedimentos(x)
{
	// não digita se não tiver números
	if(x == "%" | x == "+" | x == "-" | x == "/" | x == "*")
	{
//alert(x);
		// verificar se ultimo numero é operação e repete // ou se eu tento digitação operação com o campo vázio
		var resultado = document.getElementById("resultado").value;
		var ultimocara = resultado.substr(resultado.length-1,resultado.length);

		if(resultado == "")
		{
			alert("Digite um numero!");
			return false;
		}


		 if(ultimocara==x | ultimocara=="%" | ultimocara=="/" | ultimocara=="*" | ultimocara=="-" | ultimocara=="+"   )
		{
			alert("O que você está fazendo ?");
			return false;
		}

		if(op==null)
		{
			op=x;
			
		}

		// calcula 
		if(num1!=null&&op!=null&&num2!=null)
		{
			calcular();
			op=x;
		}


		return true;
	}else{
		
		
	return true;
	}

}




for(var i=0; i< btns.length; i++)
	{
		btns[i].onclick = function()
		{
			if(veriImpedimentos(this.innerHTML) == true)
			{			
				document.getElementById("resultado").value += this.innerHTML;
			
		
				var resultado = document.getElementById("resultado").value;

				// prepara para a operação
				var num2especial;
				if (resultado.indexOf(op).length == 1) 
				{
					num2especial = resultado.substr(resultado.indexOf(op,0)+1,resultado.length);
				}else{
					num2especial = resultado.substr(resultado.indexOf(op,1)+1,resultado.length);
				}
				

				if (op == null) {
					num1 = resultado;	
					num2=null;
				}else if (op != null & num2especial !="")
				{
					num2 = num2especial;
				}


		// calcula
				


			}

			console.log(num1);
	console.log(num2);
	console.log(op);
		
			
		}
	}

document.getElementById("apagatudo").onclick = function()
{
	document.getElementById("resultado").value="";
	num1=null;
	op=null;
	num2=null;
}

document.getElementById("backspace").onclick = function()
{
	var valor = document.getElementById("resultado").value;


	var tamanho = document.getElementById("resultado").value.length;
	var ultimocara = valor.substr(tamanho-1,tamanho);
	document.getElementById("resultado").value = valor.substr(0,tamanho-1);
		

	if(ultimocara != "/" & ultimocara != "*" & ultimocara != "-" & ultimocara != "+")
	{

		if(num1 != null)
		{
			num2=null;
			num1=document.getElementById("resultado").value;
		}
		
	}
	else
	{
		op=null;
	}

	if(document.getElementById("resultado").value=="")
		num1=null;

	console.log(num1);
	console.log(num2);
	console.log(op);

}



// app development


	




document.onload = function()
{

	document.getElementsByTagName("input")[1].checked=true;


}
