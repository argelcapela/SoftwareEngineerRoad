<?php

if (isset($_FILES['arquivo'])) 
{
//	echo $_FILES['arquivo']['size'];
//}



	//if (isset($_POST['arquivo']))
	//{
		


			// Validate file type
			//$arrayFileTypes= array('png','jpg','jpeg','bmp');
			//$fileType=explode(".",$file);
			//if (in_array(strtolower(end($fileType)),$arrayFileTypes))
			//{
				 //Update file
				//$dirFile = $_FILES['arquivo'];
				//$fileName = explode("\\",$dirFile);
				//$newfileName = end($fileName);

		move_uploaded_file($_FILES['arquivo']['tmp_name'],"img/".$_FILES['arquivo']['name']);
				

				//echo "C:\Users\PC\Pictures\gospel\\1.PNG" . " " . $newfileName;

				//move_uploaded_file(,"img/".$newfileName);

				//echo $_FILES['arquivo']['tmp_name'];
				echo "Imagem Carregada com Sucesso!";

			//}else{
			//	echo end($fileType) . "Formato Incorreto!";
			//}




}

	
?>