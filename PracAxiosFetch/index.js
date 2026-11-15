// async function main() {
//   const response = await fetch("https://jsonplaceholder.typicode.com/posts/1");
//   const json = await response.json();
//   console.log(json);
// }
// main();

const axios = require("axios");
async function main() {
  const response = await axios.get(
    "https://httpdump.app/dumps/d19037af-5866-4ae5-a812-2dd52c347cab",
    {
      headers: {
        Authorization: "bearer123",
      },
    },
  );
  console.log(response.data);
}
main();

// Axios practice exercises
//
// Use this HTTP Dump endpoint for every exercise:
// https://httpdump.app/dumps/d19037af-5866-4ae5-a812-2dd52c347cab
//
// Exercise 1:
// Write an Axios GET request to the dump endpoint.
// Print the complete response object.
//
// Exercise 2:
// Write an Axios GET request to the dump endpoint.
// Add an Authorization header with the value "bearer123".
// Print only the response data.
//
// Exercise 3:
// Write an Axios POST request to the dump endpoint.
// Send an object containing a name and an email.
// Print the response data.
//
// Exercise 4:
// Write an Axios PUT request to the dump endpoint.
// Send an object containing an id and an updated title.
// Print the response status.
//
// Exercise 5:
// Write an Axios DELETE request to the dump endpoint.
// Add a custom header named "X-Practice" with the value "axios".
// Print the response headers.
//
// Exercise 6:
// Write an Axios request using the general Axios configuration format.
// Set the method to POST, the URL to the dump endpoint, and the request body.
// Print the response data.
//
// Exercise 7:
// Add error handling to one of the exercises.
// Print the error message when the request fails.
//
// Exercise 8:
// Add a timeout of five seconds to one of the requests.
// Print the response data when it succeeds.
