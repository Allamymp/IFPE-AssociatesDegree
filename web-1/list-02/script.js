const spanElement = document.querySelector('.word-box span');
const shuffleButton = document.getElementById('shuffle-button');
const timerElement = document.getElementById('timer');
const checkElement = document.getElementById("check-button");
const inputElement = document.querySelector('#word-input');
const alertText = document.querySelector('#alert-text');

const palavras = [
    'carro',
    'casa',
    'amor',
    'gato',
    'livro',
    'sol',
    'praia',
    'árvore',
    'felicidade',
    'amizade',
    'coração',
    'chuva',
    'riso',
    'paz',
    'trabalho',
    'sorriso',
    'floresta',
    'arco-íris',
    'esperança',
    'sonho',
    'viagem',
    'saudade',
    'beijo',
    'família',
    'alegria',
    'mar',
    'estrela',
    'tempo',
    'lua',
    'pássaro',
    'montanha',
    'fantasia',
    'arte',
    'futebol',
    'comida',
    'cidade',
    'música',
    'violinista',
    'cachorro',
    'calor',
    'inverno',
    'primavera',
    'verão',
    'outono',
    'vento',
    'neve',
    'bola',
    'escola',
    'estudo',
    'computador',
    'internet'
  ];
  


  let timeRemaining = 30;
let timerInterval;
let palavra;
let palavraEmbaralhada;
function startTimer() {
    clearInterval(timerInterval);
    timeRemaining = 30; 
    timerInterval = setInterval(updateTimer, 10); 
    checkElement.disabled = false;
    inputElement.disabled = false;
    checkElement.style.backgroundColor = "darkcyan";
    alertText.style.color = "red";
    alertText.textContent = " ";
}
  function updateTimer() {
    timeRemaining -= 0.01;
    timerElement.textContent = timeRemaining.toFixed(0);
  
    if (timeRemaining <= 0) {
      clearInterval(timerInterval);
      checkElement.disabled = true;  
      inputElement.disabled = true;
      checkElement.style.backgroundColor = "#cccccc";
      alertText.textContent = "The time is up. The word was: "+palavra; 
      console.log("finished time");
      console.log("palavra: "+palavra);
      waitSeconds();
      
     
      
    }
  }

  function shuffleWord() {
    palavra = palavras[Math.floor(Math.random() * palavras.length)];
    const letras = palavra.split('');
  
    for (let i = letras.length - 1; i > 0; i--) {
      const j = Math.floor(Math.random() * (i + 1));
      [letras[i], letras[j]] = [letras[j], letras[i]];
    }
  
    const palavraEmbaralhada = letras.join('');
    spanElement.textContent = palavraEmbaralhada;
    inputElement.value = '';
    startTimer();
  }
  
  shuffleButton.addEventListener('click', shuffleWord);
  

  checkElement.addEventListener('click', checkWord);

inputElement.addEventListener("keydown", function(event) {
  if (event.key === "Enter") {
    event.preventDefault();
    checkWord();
  }
});

function checkWord() {
  const inputWord = inputElement.value.trim().toLowerCase(); 
 inputElement.value = '';
  if (inputWord === palavra) {
    console.log("Correct word!");
    alertText.textContent = "Correct word! The word as: "+palavra;
    alertText.style.color = "green";
    checkElement.disabled = true;  
    checkElement.style.backgroundColor = "#cccccc"
    inputElement.disabled = true;
    clearInterval(timerInterval);
    waitSeconds();



  } else {
    console.log("Incorrect word!");
    alertText.textContent = "Incorrect Word!";
    

  }
};
function waitSeconds() {
  setTimeout(function() {
    shuffleWord();
    startTimer();
  }, 5000); 
};