const clickEvent = document.getElementsByTagName('button')[0];
const chancesNumber = document.getElementsByTagName('span')[0];
const inputBar = document.getElementsByTagName('input')[0];



c

clickEvent.addEventListener('click',function(){
    inputNumber = inputBar.valueAsNumber;

    if(inputNumber== generatedNum){
        win();
    }
    else{
        lose();
    }
     
});

function win(){
    alert("WIN!");
    inputBar.value="";
}
function lose(){
    alert("LOSE!");
    chances--;
    chancesNumber.textContent = chances;
    inputBar.value="";
}


function restart(){
    var chances = 7;
    var inputNumber;
    const numGenerator = () => Math.floor(Math.random() * 100) + 1;
    var generatedNum = numGenerator();
    console.log(generatedNum);
    chancesNumber.textContent = chances;

}