$(document).ready(function () {
  var cloneCard = $(".card-movie").clone();
  const IMDB_link = "https://www.imdb.com/title/";

  $("#btnSearch").on("click", function () {
    var search = $("#movieName").val();
    $(".searchTitle").text("Lista filmes: " + search);
    $(".listaFilmes").empty();
    $.ajax({
      url:
        "http://www.omdbapi.com/?i=tt3896198&apikey=c1abc9cd&s=" +
        search +
        "&r=json",
      method: "GET",
    }).done(function (data) {
      $.each(data.Search, function (index, movie) {
        var card = cloneCard.clone();
        console.log(movie);
        $(".title-movie", card).text(movie.Title);
        $(".year-movie", card).text(movie.Year);
        $(".type-movie", card).text(movie.Type);
        $(".img-movie", card).attr("src", movie.Poster);
        $(".imdb-movie", card).attr("href", IMDB_link + movie.imdbID + "/");

        var favButton = $(".add-fav", card);
        updateVisual(favButton, movie);
        updateFavorite(favButton, movie);

        $(".listaFilmes").append(card);
      });
    });
  });
});

function updateVisual(btn, movie) {
  if (isFavorite(movie.imdbID)) {
    btn.text("Remover Favoritos");
    btn.removeClass("btn-success");
    btn.addClass("btn-danger");
  }
}

function isFavorite(id) {
  var favorites = JSON.parse(localStorage.getItem("favorites")) || [];
  favorites = favorites.some(function (movie) {
    return movie.imdbID !== id;
  });
}

function updateFavorite(btn, movie) {
  btn.addClass("adicionado");

  btn.on("click", function () {
    var favorites = isFavorite(movie.imdbID);
    if (favorites){

    }else{
      
    }
  });
}
