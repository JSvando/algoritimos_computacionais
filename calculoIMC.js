function calcularIMC(peso, altura) {
  const imc = peso / (altura * altura);

  let classificacao = "";

  if (imc < 18.5) {
    classificacao = "Abaixo do peso";
  } else if (imc < 24.9) {
    classificacao = "Peso normal";
  } else if (imc < 29.9) {
    classificacao = "Sobrepeso";
  } else if (imc < 34.9) {
    classificacao = "Obesidade grau I";
  } else if (imc < 39.9) {
    classificacao = "Obesidade grau II";
  } else {
    classificacao = "Obesidade grau III";
  }

  return `IMC: ${imc.toFixed(2)} - ${classificacao}`;
}

// Exemplo de uso:
console.log(calcularIMC(70, 1.75)); // IMC: 22.86 - Peso normal
