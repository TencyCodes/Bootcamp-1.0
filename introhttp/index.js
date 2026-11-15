const express = require("express");
const app = express();

app.use(express.static("public"));

app.get("/add", (req, res) => {
  const a = Number(req.query.a);
  const b = Number(req.query.b);

  if (Number.isNaN(a) || Number.isNaN(b)) {
    return res.status(400).send("Please Provide Numbers for a and b.");
  }

  res.json({ result: a + b });
});

app.listen(3000, () => {
  console.log("server running at http://localhost:3000");
});

