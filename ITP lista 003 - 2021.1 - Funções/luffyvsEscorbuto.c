/*

Luffy e sua tripula��o passam boa parte do tempo em lutas infinitas velejando pelos oceanos e vivendo grandes aventuras. Mas os piratas, assim como todos os grandes navegadores, precisam estar sempre cuidando do seu corpo para evitar doen�as comuns em longas viagens mar�timas, como o escorbuto. Para isso, eles precisam comer alimento ricos em vitaminas C.
Antigamente, Nami provia apenas as laranjas do seu jardim, mas desde que o chef Sanji entrou na tripula��o, ele conseguiu variar mais o card�pio do bando do Chap�u de Palha. Para balancear as refei��es e manter todos bem nutridos, Sanji conta com a ajuda dos seguintes alimentos:

Nome - S�mbolo - Quantidade de vitamina C

Suco de Laranja - S - 120 mg
Morango - O - 60 mg
Mam�o - M - 85 mg
Goiaba - G - 74 mg
Manga - N - 56 mg
Laranja - L - 50 mg
Br�colis - B - 34 mg

Como um novo membro da tripula��o, o Programador de DenDen Mushis, voc�s deve fazer um programa que dado a quantidade de alimentos ingeridos (apenas os da tabela acima), calcule se o consumo de vitamina C est� adequado ou n�o. Uma quantidade adequada varia de um m�nimo de 110 mg, at� um m�ximo de 130 mg.
Seu programa receber� um valor inteiro C que indica quantas comidas ser�o listadas, seguido por C linhas. Cada linha conter� um inteiro Q e uma letra S, indicando quantos itens da comida representada pelo s�mbolo S (de acordo com a tabela acima) foram consumidos. Por exemplo, a entrada abaixo:

2
2 B
1 L

Indica que foram consumidos 2 tipos de alimentos, sendo 2 br�colis e 1 laranja, o que d� um total de 118 mg, dentro do limite recomendado. Seu programa deve imprimir a sa�da no seguinte formato:
X mg - Quando a quantidade consumida de vitamina C for dentro do limite desejado (X sendo o valor dessa quantidade);
Mais X mg - Quando a quantidade for inferior ao m�nimo necess�rio;
Menos X mg - Quando a quantidade for superior ao m�ximo necess�rio.
Seu programa deve rodar em um la�o de repeti��o at� que o n�mero de alimentos consumidos seja igual a zero. Observe os casos de teste para verificar o formato da entrada e sa�da padr�o.

DICA: use uma fun��o para calcular o valor de vitamina C dos alimentos ingeridos.
OBS: problema adaptado da base de problemas do URI.

*/

#include <stdio.h>

int vitaC(int vC){
    int Q, i = 0, qC = 0, qCpar = 0, res = 0;
    char S;

    if(vC > 0){
        while(i < vC){
            scanf("%d %c", &Q, &S);
            if(S == 83)
                qCpar = Q * 120;
            if(S == 79)
                qCpar = Q * 60;
            if(S == 77)
                qCpar = Q * 85;
            if(S == 71)
                qCpar = Q * 74;
            if(S == 78)
                qCpar = Q * 56;
            if(S == 76)
                qCpar = Q * 50;
            if(S == 66)
                qCpar = Q * 34;
            qC = qC + qCpar;
            i++;
        }
        if(qC >= 110){
            if(qC <= 130){
                printf("%d mg\n", qC);
            } else {
                res = qC - 130;
                printf("Menos %d mg\n", res);
            }
        } else {
            res = 110 - qC;
            printf("Mais %d mg\n", res);
        }
    }
    return 0;
}

int main(void){

    int C;

    scanf("%d", &C);

    while(C > 0){
        vitaC(C);
        scanf("%d", &C);
    }

    return 0;
}
