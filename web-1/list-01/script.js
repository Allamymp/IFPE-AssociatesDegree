const inputGasolina = document.getElementById('gasolina');
const inputEtanol = document.getElementById('etanol');
const resultado = document.getElementById('resultado');

 
    inputGasolina.addEventListener('input', iniciarContagemRegressiva);
    inputEtanol.addEventListener('input', iniciarContagemRegressiva);
 

 

function iniciarContagemRegressiva() {
    setTimeout(() => {
        testValue();
    }, 3000);
}

function testValue() {
    let etanol = parseFloat(inputEtanol.value);
    let gasolina = parseFloat(inputGasolina.value);
    const razao = etanol/gasolina;
    let maxGasolina = etanol / 0.7; // valor max de gasolina
    let maxEtanol = gasolina*0.7 // valor max de etanol

    //gasolina = 0 ou null e etanol com valor
    if ((inputGasolina.value === '0' || inputGasolina.value === '') && (inputEtanol.value !== '0' && inputEtanol.value !== '')) {
        const max_gasolina = etanol/0.7;
        resultado.textContent = 'Maior valor competitivo de Gasolina: R$ ' + maxGasolina.toFixed(2);
        resultado.style.display = 'block';
    } 
    // gasolina com valor  e etanol = 0 ou nulo
    else if ((inputGasolina.value !== '0' && inputGasolina.value !== '') && (inputEtanol.value === '0' || inputEtanol.value === '')) {
        resultado.textContent = ' Maior valor competitivo de Etanol: R$' + maxEtanol.toFixed(2);
        resultado.style.display = 'block';
    }//os dois com valor 
    else if ((inputGasolina.value !== '0' && inputGasolina.value !== '') && (inputEtanol.value !== '0' && inputEtanol.value !== '')) {
        if(razao<=0.7){
            resultado.textContent='Abasteça Etanol!'  
            resultado.style.display = 'block';
        }
        else{
            resultado.textContent='Abasteça Gasolina!'  
            resultado.style.display = 'block';
        }
     
    } else {
        resultado.style.display = 'none';
    }
}
