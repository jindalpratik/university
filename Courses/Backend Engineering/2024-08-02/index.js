const express = require("express");
const app = express();
const port = 8080;
app.set("view engine", "ejs");
app.listen(port, () => {
    console.log(`Running on port ${port}`);
});

app.get("/", (res,req)=> {
    res.send("hello");
})

app.get('/user/:name', (res,req) => {
    console.log(req.query);
    res.send(`hello ${req.query.product} and ${req.query.color}`);
});

app.get('/user/:name/:password', (req, res) => {
    const name = req.params.name;
    const password = req.params.password;
    console.log(name, password);
    res.render('home', { name: name, password: password });
});

