<?php
if($_FILES) {

  if( is_array($_FILES['img']['name']) ) {
    foreach($_FILES['img']['name'] as $key => $value) {
      // upload path is the same directory as this file
      move_uploaded_file($_FILES["img"]["tmp_name"][$key], $_FILES['img']['name'][$key]);
    }
  }

//  test output
  echo "<pre>";
  print_r($_FILES);
  echo "</pre>";

  die();
}
?>


<script>
// on document ready
document.addEventListener("DOMContentLoaded", function(){

  document.getElementById("handleForm").addEventListener("click",function() {
    var formData  = new FormData( document.getElementById("form") );

    for(var i = 0; i < document.getElementById("img").files.length; i++) {
      console.log(i)
      formData.append("img[]",document.getElementById("img").files[i]);
    }

    var xhr = new XMLHttpRequest();
    // here you can change empty URL to your file
    xhr.open("POST", "");
    xhr.send(formData);
  });

});
</script>

<form action="" method="post" enctype="multipart/form-data" id="form">
  <input type="file" name="img" id="img" multiple />
  <div style="padding: 5px 10px; border: 1px solid black; cursor: pointer; display: inline-block" id="handleForm" >Send</div>
</form>