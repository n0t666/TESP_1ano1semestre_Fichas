
document.addEventListener("DOMContentLoaded", function () {
    fillBirthYearSelect();
});

var form = document.getElementById("contact-form");
document.addEventListener("submit",function(event)
{
    event.preventDefault()
    if(validadeForm())
    {

    }
})

function fillBirthYearSelect() 
{
  var currentYear =  new Date().getFullYear();
  var selectBirth = document.getElementById("birthYear");

  for (var year = 1900; year <= currentYear; year++) {
    var option = document.createElement("option");
    option.value=year;
    option.text= "Ano " + year;

    selectBirth.appendChild(option);


  } 
}

function validadeForm()
{
    var isValid = true;

    var nome = document.getElementById("nameInput");

    if(nome.value.length < 3)
    {
        alert("Erro nome inválido");

    }

}

function validateEmail(email)
{

}