#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;
    float qntdaulas, faltas, porc;
    char opcao;
    denovo:
        printf ("qual a qntd de faltas?");
        scanf ("%f",&faltas);
        qntdaulas=60;
        porc= faltas/qntdaulas;
    if (porc>=0.25){
        printf("voce foi reprovado por faltas");
    }

    else{
    printf ("Digite sua primeira nota \n");
    scanf ("%f", &n1);
    printf ("Digite sua segunda nota\n");
    scanf ("%f", &n2);
    media = (n1 + n2)/2;
    printf ("A sua Media final foi: %.2f", media);

    if (media>=5){
    printf (" \n Parabens, voce foi aprovado");
    }
    else if (media>=2){
    printf("\n Exame final");
    }
    else{
    printf("\n voce foi reprovado");
    }

    }
    printf ("\ndeseja realizar outro calculo? (S,N)");
    scanf ("%s",&opcao);
    if (opcao=='S'){
        goto denovo;}

    return (0);
}
