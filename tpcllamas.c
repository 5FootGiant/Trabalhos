#include <stdio.h> //Bilioteca necessaria para receber input e output
#include <cs50.h> //Bilioteca necessaria para usar o "get_int"

int main(void)
{
    int PopDesired,NLlamas,NLlamasCopy, Anos = 0; //Criei 4 Variaveis aqui a população desejada , o número de lamas , uma cópia do número de llamas que irei usar depois e a quantidade de anos

    do{
        NLlamas = get_int("Quantos llamas temos: "); //get_int usado para pedir o numero de lamas atuais
    }while(NLlamas < 10); //Um loop do...while usado para pedir a quantidade de llamas atuais ao utilizador (recorri a um loop porque como condição não aceito menos de 10 llamas)

    do{
        PopDesired = get_int("Quantos llamas queremos: "); //get_int usado para pedir o número de llamas que desejo
    }while(PopDesired <= NLlamas); //Um loop do...while usado para pedir a quantidade de llamas que o utilizador quer (Condição do loop , rodar enquanto a população desejada for menor ou igual aos Llamas atuais)

    NLlamasCopy = NLlamas; //O Valor do "NLlamas" vai mudar ao decorrer do código então criei o NLlamasCopy extamente para salvar os llamas iniciais

    while (NLlamas < PopDesired) { //Condição do loop , rodar enquanto o NLlamas for menor que a população desejada
        NLlamas+=NLlamas/3-NLlamas/4;
        Anos++;
    } //Um loop while que faz as contas necessárias para descobrir a quantidade de anos se passam

    printf("Serão necessários %i anos , para uma população de %i llamas, chegar a %i llamas!\nQuantidade de llamas finais: %i.\n",Anos,NLlamasCopy,PopDesired,NLlamas); //apenas um printf básico para ter feedback de quantos anos preciso e utilizo %i para referenciar variaveis
}
