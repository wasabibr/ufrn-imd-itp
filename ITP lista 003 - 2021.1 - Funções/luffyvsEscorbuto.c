/*

Luffy e sua tripulação passam boa parte do tempo em lutas infinitas velejando pelos oceanos e vivendo grandes aventuras. Mas os piratas, assim como todos os grandes navegadores, precisam estar sempre cuidando do seu corpo para evitar doenças comuns em longas viagens marítimas, como o escorbuto. Para isso, eles precisam comer alimento ricos em vitaminas C.
Antigamente, Nami provia apenas as laranjas do seu jardim, mas desde que o chef Sanji entrou na tripulação, ele conseguiu variar mais o cardápio do bando do Chapéu de Palha. Para balancear as refeições e manter todos bem nutridos, Sanji conta com a ajuda dos seguintes alimentos:

Nome - Símbolo - Quantidade de vitamina C

Suco de Laranja - S - 120 mg
Morango - O - 60 mg
Mamão - M - 85 mg
Goiaba - G - 74 mg
Manga - N - 56 mg
Laranja - L - 50 mg
Brócolis - B - 34 mg

Como um novo membro da tripulação, o Programador de DenDen Mushis, vocês deve fazer um programa que dado a quantidade de alimentos ingeridos (apenas os da tabela acima), calcule se o consumo de vitamina C está adequado ou não. Uma quantidade adequada varia de um mínimo de 110 mg, até um máximo de 130 mg.
Seu programa receberá um valor inteiro C que indica quantas comidas serão listadas, seguido por C linhas. Cada linha conterá um inteiro Q e uma letra S, indicando quantos itens da comida representada pelo símbolo S (de acordo com a tabela acima) foram consumidos. Por exemplo, a entrada abaixo:

2
2 B
1 L

Indica que foram consumidos 2 tipos de alimentos, sendo 2 brócolis e 1 laranja, o que dá um total de 118 mg, dentro do limite recomendado. Seu programa deve imprimir a saída no seguinte formato:
X mg - Quando a quantidade consumida de vitamina C for dentro do limite desejado (X sendo o valor dessa quantidade);
Mais X mg - Quando a quantidade for inferior ao mínimo necessário;
Menos X mg - Quando a quantidade for superior ao máximo necessário.
Seu programa deve rodar em um laço de repetição até que o número de alimentos consumidos seja igual a zero. Observe os casos de teste para verificar o formato da entrada e saída padrão.

DICA: use uma função para calcular o valor de vitamina C dos alimentos ingeridos.
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
