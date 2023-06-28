const spanElement = document.querySelector('.word-box span');
const shuffleButton = document.getElementById('shuffle-button');
const timerElement = document.getElementById('timer');
const checkElement = document.getElementById("check-button");

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
function startTimer() {
    clearInterval(timerInterval); // Limpa qualquer intervalo de temporização existente
    timeRemaining = 30; // Reinicia o tempo restante para 30 segundos
    timerInterval = setInterval(updateTimer, 10); // Inicia um novo intervalo de temporização
    checkElement.disabled = false;
    checkElement.style.backgroundColor = "darkcyan";
}
  function updateTimer() {
    timeRemaining -= 0.01;
    timerElement.textContent = timeRemaining.toFixed(2);
  
    if (timeRemaining <= 0) {
      clearInterval(timerInterval);
      checkElement.disabled = true;  
      checkElement.style.backgroundColor = "red";

      console.log("finished time");
      console.log("palavra: "+palavra);
     
      // Aqui você pode adicionar a lógica a ser executada quando o cronômetro chegar a zero
    }
  }

  function embaralharPalavra() {
     palavra = palavras[Math.floor(Math.random() * palavras.length)];
    const letras = palavra.split('');
  
    for (let i = letras.length - 1; i > 0; i--) {
      const j = Math.floor(Math.random() * (i + 1));
      [letras[i], letras[j]] = [letras[j], letras[i]];
    }
  
    return letras.join('');
  }
  
  shuffleButton.addEventListener('click', function() {
    const palavraEmbaralhada = embaralharPalavra();
    spanElement.textContent = palavraEmbaralhada;
    startTimer();
  });

  checkElement.addEventListener('click',function(){
    console.log("checked!");
  });