function validate() {
    var name = document.form1.name.value;
    var email = document.form1.mail.value;
    var con = document.form1.con.value;
    var pass = document.form1.pass.value;
    var conPass = document.form1.conPass.value;
    var gen = document.form1.gen.value;

    if (name == "" || name == null || !name.match("[a-zA-Z]")) {
        alert("Please enter your Name !");
    } else if (pass == "" || pass.length < 6) {
        alert("Password should be of 6 or more characters !");
    } else if (conPass != pass) {
        alert("Passwords do not match");
    } else if (!con.match("[0-9]{10}")) {
        alert("Enter a valid contact number !")
    } else if (!email.includes("@") || !email.includes(".") || email.includes(" ")) {
        alert("Please enter a correct email address !");
    } else if (gen == "") {
        alert("Please select your Gender !");
    }
}
