<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Perfil</title>
</head>

<body>

    <?php
    if (isset($_GET["cor"]) && isset($_GET["fundo"])) {
        $corTexto =  $_GET["cor"];
        $corFundo =  $_GET["fundo"];
        echo "
         <style>
         body{
            color: corTexto;
            background-color: $corFundo;
         }
         </style>
        ";
    }
    ?>

    <h1>Estou no Perfil - Leandro</h1>

    <?php
    if (isset($_POST["username"]) && isset($_POST["email"])) {
        echo "<p>Email : $_POST[username]</p>";

    }
    ?>
</body>

</html>