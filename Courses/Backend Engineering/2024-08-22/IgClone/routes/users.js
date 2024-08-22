const mongoose = require("mongoose");
const plm = require("passport-local-mongoose");
// const users = require("../routes/users");x
mongoose
  .connect(
    "mongodb+srv://admin:zUpNdydFASyyBIDE@cluster0.yw08g.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0"
  )
  .then(() => console.log("database connected"));

const userSchema = mongoose.Schema({
  // username: { type: String, required: true, unique: true },
  username: String,
  name: String,
  email: String,
  password: { type: String },
  profileImage: { type: String },
  bio: { type: String },
  posts: [{ type: mongoose.Schema.Types.ObjectId, ref: "post" }],
});

userSchema.plugin(plm);
module.exports = mongoose.model("user", userSchema);
