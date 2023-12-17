<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ficha 8</title>
</head>

<body>
    <?php
    $linguagens = [
        "HTML",
        "CSS",
        "JavaScript",
        "Jquery",
        "PHP"
    ];
    ?>


    <select name="linguagens">
        <?php
        foreach ($linguagens as $linguagem) {
            echo '<option value="' . $linguagem . '">' . $linguagem . '</option>';
        }
        ?>
    </select>




    <?php
    $paises = [
        "PT" => "Portugal",
        "GB" => "Great Britain",
        "ES" => "Spain",
        "FR" => "France"
    ];
    ?>

    <ul>
        <?php
        foreach ($paises as $key => $value) {
            echo "<li>$key($value)</li>";
        }
        ?>
    </ul>

    <div>
        <a href="perfil.php?cor=blue&fundo=green" target="_blank"> Ir para Perfil Azul e Verde</a>
    </div>

    <div>
        <a href="perfil.php?cor=red&fundo=black" target="_blank"> Ir para Perfil Vermelho e Preto</a>
    </div>

    <form action="perfil.php" method="post">
        <input type="text" name="username">
        <input type="email" name="email">
        <button type="submit">Enviar</button>
    </form>


</body>

</html>