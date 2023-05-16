const clickEvent = document.getElementsByTagName('button')[0];
const chancesNumber = document.getElementsByTagName('span')[0];
const inputBar = document.getElementsByTagName('input')[0];



var chances = 7;
var inputNumber;
const numGenerator = () => Math.floor(Math.random() * 100) + 1;
var generatedNum = numGenerator();
console.log(generatedNum);
chancesNumber.textContent = chances;
inputBar.value = "";
clickEvent.addEventListener('click', function() {
    handleGuess();
  });
  
  inputBar.addEventListener('keydown', function(event) {
    if (event.keyCode === 13) {
      handleGuess();
    }
  });
  
  function handleGuess() {
    inputNumber = inputBar.valueAsNumber;
  
    if (inputNumber == generatedNum) {
      win();
    } else {
      lose();
    }
  }
function win(){
    alert("WIN!");
    setTimeout(function() {
        restart();
     
      }, 5000);
    
}
function lose(){
    alert("LOSE!");
    chances--;
    chancesNumber.textContent = chances;
    inputBar.value="";
}


function restart(){
    chances = 7;
    var inputNumber;
    const numGenerator = () => Math.floor(Math.random() * 100) + 1;
    generatedNum = numGenerator();
    console.log(generatedNum);
    chancesNumber.textContent = chances;
    inputBar.value="";

}