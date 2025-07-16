document.addEventListener('DOMContentLoaded', function() {
    const contactForm = document.getElementById('contactForm');
    const nameInput = document.getElementById('name');
    const emailInput = document.getElementById('email');
    const subjectInput = document.getElementById('subject');
    const messageInput = document.getElementById('message');

    const nameError = document.getElementById('nameError');
    const emailError = document.getElementById('emailError');
    const subjectError = document.getElementById('subjectError');
    const messageError = document.getElementById('messageError');
    const formSuccess = document.getElementById('formSuccess');


    contactForm.addEventListener('submit', function(event) {
        event.preventDefault();

        let isValid = true;

        nameError.textContent = '';
        emailError.textContent = '';
        subjectError.textContent = '';
        messageError.textContent = '';
        formSuccess.textContent = ''; 
        formSuccess.style.display = 'none'; 


        if (nameInput.value.trim() === '') {
            nameError.textContent = 'Name is required.';
            isValid = false;
        }


        const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/; 
        if (emailInput.value.trim() === '') {
            emailError.textContent = 'Email is required.';
            isValid = false;
        } else if (!emailRegex.test(emailInput.value.trim())) {
            emailError.textContent = 'Please enter a valid email address.';
            isValid = false;
        }


        if (messageInput.value.trim() === '') {
            messageError.textContent = 'Message is required.';
            isValid = false;
        } else if (messageInput.value.trim().length < 10) { 
            messageError.textContent = 'Message must be at least 10 characters long.';
            isValid = false;
        }


        if (isValid) {
            formSuccess.textContent = 'Thank you! Your message has been sent successfully.';
            formSuccess.style.display = 'block'; 
            contactForm.reset(); 
            console.log('Form data:', {
                name: nameInput.value.trim(),
                email: emailInput.value.trim(),
                subject: subjectInput.value.trim(),
                message: messageInput.value.trim()
            });
        }
    });
});
