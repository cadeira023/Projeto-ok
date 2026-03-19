#include <stdio.h>
int main() {
    
    float peso, altura, imc;
    char opcao;
    printf ("\n******CALCULE SEU IMC E SAIBA SUA CLASSIFICAÇÃO ABAIXO******\n");
    printf ("Digite seu peso (Kg): ");
    scanf ("%f", &peso);
    printf ("Digite sua altura (H): ");
    scanf ("%f", &altura);
    imc = peso / (altura * altura);
    
    printf ("Seu IMC é: %.2f\n", imc);
    printf ("Deseja saber sua classificação? s/n: ");
    scanf (" %c", &opcao);
    
    if (opcao = 's' && imc >= 18.5 && imc <= 24.9) {
        printf ("Seu peso está normal (IMC: %.2f)", imc);
    }
    else if (opcao = 's' && imc <18.5) {
        printf ("Você está abaixo do peso (IMC: %.2f)");
    }
    if (opcao = 's' && imc >= 25 && imc <= 29.9) {
        printf ("Você está com sobrepeso (IMC: %.2f)");
    }
    else if (opcao = 's' && imc >= 30 && imc <= 34.9) {
        printf ("Você com obesidade grau I (IMC: %.2f)");
    }
    if (opcao = 's' && imc >= 35 && imc <= 39.9) {
        printf ("Você está com obesidade grau II (IMC: %.2f)");
    }
    else if (opcao = 's' && imc >= 40 && imc <= 49.9) {
        printf ("Você está com obesidade grau III (IMC: %.2f)");
    }
    if (opcao = 's' && imc > 50) {
        printf ("Você está com obesidade grau IV (IMC: %.2f)");
    }
    
    
    
    
    
    
    
    
    return 0;
}