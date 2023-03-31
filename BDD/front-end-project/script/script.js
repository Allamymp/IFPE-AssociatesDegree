function login() {
  var emailInput = document.getElementById('emailForm').value;
  var passwordInput = document.getElementById('passwordForm').value;
  
  for (var i = 0; i < users.length; i++) {
    var user = users[i];
    
    if (user.email === emailInput && user.password === passwordInput) {
      window.location.href = "dashboard.html";
      return;
    }
  }
  
  alert("Incorrect email or password. Try again.");
}