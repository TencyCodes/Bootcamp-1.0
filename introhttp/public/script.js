const inputA = document.querySelector("#a");
const inputB = document.querySelector("#b");
const output = document.querySelector("#output");
const addButton = document.querySelector("#add-button");

addButton.addEventListener("click", async () => {
  if (inputA.value === "" || inputB.value === "") {
    output.textContent = "Enter both numbers.";
    return;
  }

  const params = new URLSearchParams({
    a: inputA.value,
    b: inputB.value,
  });

  try {
    const response = await fetch(`/add?${params}`);
    const data = await response.json();

    if (!response.ok) {
      output.textContent = "Please enter valid numbers.";
      return;
    }

    output.textContent = `Result: ${data.result}`;
  } catch {
    output.textContent = "Could not connect to the server.";
  }
});