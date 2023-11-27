$("#btnSearch").on("click", function () {
  var search = $("#movieName").val();
  console.log(search);
  $.ajax({
    url:
      "http://www.omdbapi.com/?i=tt3896198&apikey=c1abc9cd&s=" +
      search +
      "&r=json",
    method: "GET",
  }).done(function (data) {
    console.log(data);
    $.each(data.Search, function (index) {
      console.log(data.Search[index].Title);
    });
  });
});
