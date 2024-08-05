const express = require("express");
const app = express();
const port = 8080;
app.set("view engine", "ejs");
app.listen(port, () => {
    console.log(`Running on port ${port}`);
});

app.set("view engine", "ejs");
app.use(express.static("/public"));

app.get("/home", (res,req) => {
    res.render('home', { name: "live a life" });
})
