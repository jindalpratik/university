var express = require("express");
var router = express.Router();
var userModel = require("./users");

const passport = require("passport");
const localStrategy = require("passport-local");

/* GET home page. */
router.get("/", function (req, res, next) {
  res.render("index");
});

// login page route
router.get("/login", (req, res) => {
  res.render("login");
});

// Profile route
router.get("/profile", (req, res) => {
  res.render("profile");
});

// // register route
// router.get("/register", (req, res) => {
//   res.render("register");
// });

// register route
router.post("/register", function (req, res, next) {
  const userData = new userModel({
    username: req.body.username,
    name: req.body.name,
    email: req.body.email,
  });

  userModel.register(userData, req.body.password).then(function () {
    passport.authenticate("local")(req, res, function () {
      res.redirect("/profile");
    });
  });
});

// login route
router.post(
  "/login",
  passport.authenticate("local", {
    successRedirect: "/profile",
    failureRedirect: "/login",
  }),
  function (req, res) {}
);

// logout
router.get("/logout", function (req, res, next) {
  req.logout(function (err) {
    if (err) {
      return next(err);
    }
    res.redirect("/");
  });
});

// isLoggedIn Middleware
function isLoggedin(req, res, next) {
  if (req.isAuhtenticated()) return next();
  res.redirect("/login");
}

module.exports = router;
