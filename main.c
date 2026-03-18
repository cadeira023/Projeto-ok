#include <stdio.h>
int main () {
float peso, altura, imc;
char opcao;
printf ("\n******CALCULE SEU IMC E SAIBA SUA CLASSIFICAÇÃO\n");
printf ("Digite seu peso (Kg): ");
scanf ("%f", &peso);
printf ("Digite sua altura (H): ");
scanf ("%f", &altura);
imc = peso / (altura * altura);

printf ("Seu IMC é: %.2f\n", imc);    //não esquece da porra do . na % seu imbecil  

printf ("Deseja saber sua classificação? (S/N): ");
scanf (" %c", &opcao);                //não esquece do espaço no %c

if (opcao = 's' && imc >= 25.0 && imc <= 29.9) {     //&& é igual a AND
    printf ("Sua classificação é sobrepeso");
}












    return 0;
}