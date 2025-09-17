document.getElementById("myForm").addEventListener("submit", function(event){
    event.preventDefault();
    let username = document.getElementById("username").value;
    let email = document.getElementById("email").value;
    let nameError = document.getElementById("nameError");
    let mailError = document.getElementById("emailError");
    let mail = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

    if (username==="") {
        nameError.textContent="Enter your name"
    }
    if (email==="") {
        emailError.textContent = "Email cannot be empty";
    }
    if (!mail.test(email)) {
        mailError.textContent = "Email must be valid";
    } else {
        alert("Form submitted successfully!");
    }
})