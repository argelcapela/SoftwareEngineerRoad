document.getElementById("btnUpload").onclick = function()
{

	var dirArquivo = document.getElementById("upload");
	//alert(tamanhoDoArquivo(dirArquivo.files[0].size));
	uploadFile(dirArquivo);

};


function tamanhoDoArquivo(valor)
{
	if (valor < 1024)
	{
		return valor + " bytes ";
	}	
	else if(valor >= 1024 && valor < (1024*1024))
	{
		return (valor/1024).toFixed() + " KB ";

	}
	else if(valor >= 1048576)
	{
		return (valor/1048576) + " MB ";
	}

}

function uploadFile(dir,tamanho)
{
//
var form = new FormData(document.getElementById("enviaArquivo"));
form.append("img[]",document.getElementById("upload")[0]);


// with http request
var xmlhttp = new XMLHttpRequest();
xmlhttp.open("POST","upload.php");
//xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
xmlhttp.send(form);

xmlhttp.onreadystatechange=function()
{
	if(this.status==200&&this.readyState==4)
	{
		 alert(this.responseText);		
	}
};


}