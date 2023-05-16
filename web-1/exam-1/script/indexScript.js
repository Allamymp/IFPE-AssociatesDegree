const clickEvent = document.getElementsByTagName('button')[0];
let alertText = document.getElementById('alert');
let chancesNumber = document.getElementById('chances');
const inputBar = document.getElementsByTagName('input')[0];
const initialAlertText = "Your number is too" + choiceTypeControl + "["+smallerNumControl+", "+biggerNumControl+"]";


var chances = 7;
var inputNumber;
var biggerNumControl="";
var smallerNumControl="";
var choiceTypeControl;
const numGenerator = () => Math.floor(Math.random() * 100) + 1;
var generatedNum = numGenerator();
console.log("Generated num: " + generatedNum);
chancesNumber.textContent = chances;

clickEvent.addEventListener('click', function() {
  inputNumber = inputBar.value;
  control();
});

document.addEventListener('keydown', function(event) {
  if (event.key === 'Enter') {
    inputNumber = inputBar.value;
    control();
  }
});

function control() {
  chances--;
  updateLayout(chances, choiceTypeControl, smallerNumControl.toString(), biggerNumControl.toString());
  inputNumber = inputBar.value; 
  if (chances > 0) {
    testValue();
  } else {
    alertText.textContent = "You lose! Correct number: " + generatedNum;
    alertText.style.display = 'block';
    reset();
  }
}

function testValue() {
  if (inputNumber == generatedNum) {
    correct();
  } else {
    wrong();
  }
}

function correct() {
  alertText.style.display = 'block';
  alertText.textContent = "Congratulations!";
  reset();
}

function wrong() {
  alertText.style.display = 'block';
  biggerOrSmaller(inputNumber);
}

function biggerOrSmaller(inputNumber) {
  if (inputNumber > generatedNum) {
    if(inputNumber>100){
      alertText.textContent = "Your number is bigger than limit! [limit = 100]";
    }
    else{
    updateLayout(chances, 'big', 1, inputNumber);
    }
  } else {
    if(inputNumber<=0){
      alertText.textContent = "Your number is smaller than minimum! [minimum = 1]";
    }
    else{
        updateLayout(chances,'small',inputNumber,100);
    }
  }
}

function reset() {
  
  setTimeout(function() {
    chances = 7;
    inputBar.value = "";
    inputNumber = "";
    generatedNum = numGenerator();
    console.log("New generated num: " + generatedNum);
    chancesNumber.textContent = chances;
    alertText.textContent = initialAlertText;
    alertText.style.display = 'none';
  }, 5000);
}

function updateLayout(chances, choiceTypeControl, smallerNumControl, biggerNumControl)
{
alertText.textContent = "Your number is too " + choiceTypeControl + "["+smallerNumControl+", "+biggerNumControl+"]";
chancesNumber.textContent = chances;

  
}
