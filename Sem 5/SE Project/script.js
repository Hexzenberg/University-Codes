window.onscroll = function() {scrollFunction()};

var leaf;

function scrollFunction(){
  if($("nav").hasClass("py-5")){
    $("nav").removeClass("py-5");
  }
  if (document.body.scrollTop > 50 || document.documentElement.scrollTop > 50) {
    document.getElementById("header").style.padding = "10px 0px";
  } else {
    document.getElementById("header").style.padding = "50px 0px";
  }
} 

window.onload = function() {

  var fileInput = document.getElementById('file');
  var fileDisplayArea = document.getElementById('file-display-area');
  var click=document.getElementById('upload-button');

  fileInput.addEventListener('change', function(e) {
      var file = fileInput.files[0];
      var imageType = /image.*/;

      if (file.type.match(imageType)) {
        
        //If the selected file is an image---
        var reader = new FileReader();

        reader.onload = function(e) {

          //When loading of the image is complete
          fileDisplayArea.innerHTML = "";

          //Loaded image is displayed
          var img = new Image();
          img.src = reader.result;

          //The image is stored in the global variable for further use
          leaf=reader.result; 

          //After uploading the image the upload button is enabled
          fileDisplayArea.appendChild(img);
          click.disabled=false;
          click.style.opacity=1;
        }
        reader.readAsDataURL(file); 
      } else {

        //If the selected file is not in image format
        fileDisplayArea.innerHTML = "File not supported!";
        click.disabled=true;
        click.style.opacity=0.2;
      }
  });

}

$('#upload-button').click(function(){
  
  var fileInput = document.getElementById('file');
  var spin=document.getElementById('spinner');
  var fileDisplayArea=document.getElementById("file-display-area");

  //file input disabled
  fileInput.disabled=true;

  //image display disabled
  fileDisplayArea.style.display='none';

  //loading animation enabled
  spin.style.display='';

});

