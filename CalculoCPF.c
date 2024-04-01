#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{

    //Declarando Variaveis necessarias
char cpf[9];
int digitos[9];
int vr1;
int vr2;

    //Coletando os primeiros 9 digitos 

printf("Digite os primeiros 9 digitos do cpf: ");
    void coleta()
    {
       for(int i = 0 ; i < 9 ; i++)
       {
            cpf[i] = getch();
            printf("%c", cpf[i]);
            digitos[i] = cpf[i] - '0';
       }
    }

    //Calculando Digito Verificador 1
    void calculovr1()
    {
        float total = 0;
        int contador = 10;
        for(int j=0;j<9;j++)
        {
            total += digitos[j] * contador;
            contador --;
        }
        vr1 = fmod(total,11);
        round(vr1);
        if(vr1<2)
        {
            vr1=0;
        }else
        {
            vr1=11-vr1;
        }
        printf("-%i", vr1);
    }

     // Calculando Digito Verificador 2

    void calculovr2()
    {
        float tt = 0;
        int cc = 11;
        for(int k=0;k<9;k++)
        {
            tt += digitos[k]*cc;
            cc--;
        }
        tt += vr1*2;
        vr2 = fmod(tt,11);
        round(vr2);
        if(vr2<2)
        {
            vr2=0;
        }else
        {
            vr2=11-vr2;
        }
        printf("%i",vr2);

    }

//Chamando Funcoes

coleta();
calculovr1();
calculovr2();


return 0;
}
