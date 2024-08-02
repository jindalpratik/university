const express = require("express");
const app = express();
const port = 300;
app.listen(port, () => {
    console.log(`listening of port ${port}`);
});
app.get("/", (req, res) => {
    res.send("home page");
});
app.get("/hello", (req, res) => {
    res.send("home page hello");
});