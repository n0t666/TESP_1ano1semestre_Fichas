var cloneCard = $(".card-movie").clone();
const IMDB_link = 'https://www.imdb.com/title/'

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
    $.each(data.Search, function (index,movie) {
      var card = cloneCard.clone();
      console.log(movie);
      $(".title-movie",card).text(movie.Title);
      $(".year-movie",card).text(movie.Year);
      $(".type-movie",card).text(movie.Type);
      $(".img-movie",card).attr('src',movie.Poster);
      $(".imdb-movie",card).attr('href', IMDB_link + movie.imdbID + '/');
      $(".listaFilmes").append(card);



    });
  });
});
