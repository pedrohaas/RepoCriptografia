#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CifraDeCesar();
void CifraDeVigenere();
void CifraDeSubstituicao();
void CifraYP();

int main(void) {

  char operacao;

  printf("Bem vindo ao decodificador 2000, o maior e melhor programa de criptografias do universo!!!\n\n");
  printf("Selecione uma opcao de criptografia:\n");
  printf("1 - Cifra de Cesar\n");
  printf("2 - Cifra de Vigenere\n");
  printf("3 - Cifra de Substituicao\n");
  printf("4 - Cifra YP\n");
  printf("\n");
  
  scanf("%c", &operacao);

  getchar();

  switch (operacao) {
  case '1':
    CifraDeCesar();
    break;
  case '2':
    CifraDeVigenere();
    break;
  
  case '3':
    CifraDeSubstituicao();
    break;

  case '4':
    CifraYP();
    break;

  default:
    break;
  }
  return 0;
}

void CifraDeCesar() {

  char palavra;
  int desl, cod;

  printf("Digite a quantidade de caracteres a serem deslocados: ");
  scanf("%d", &desl);

  if (desl > 26) { // Ajusta o valor do deslocamento para um numero valido dentro da quantidade de caracteres do Alfabeto
    desl %= 26;
  }

  printf("Digite a mensagem que você deseja criptografar, terminada por enter:\n");
  
  getchar();

  while(1){ // Loop para pegar e printas o codigo

    palavra = getchar();

    if(palavra == 10){
      break;
    }

    // Ajusta o codigo para que continue dentro do intervalo das letras dentro da Tabela ASCII
    cod = palavra + desl;
    
    if(palavra != 10){
      if ((cod > 122 && (palavra > 96 && palavra < 123)) || (cod > 90 && (palavra > 64 && palavra < 91))) {
        cod -= 26;
      } else if ((cod < 97 && (palavra > 96 && palavra < 123)) || (cod < 64 && (palavra > 64 && palavra < 91))) {
        cod = 122 - (96 - cod);
        }
      
    }

    printf("%c", cod);
    }

    printf("\n");
}

void CifraDeVigenere() {

  char palavra[10000], aux[10000], PalavraChave[10000];

  printf("\nOpcao escolhida: Cifra de Vigenere\n\nDigite uma frase sem espacos usando apenas letras, no seguinte formato: 'atacarbasesul' ou 'ATACARBASESUL'\n\n");

  printf("Digite a palavra a ser criptografada: ");
  scanf("%s", palavra);

  printf("\nDigite uma palavra-chave sem espacos usando apenas letras, no seguinte formato: 'limao' ou 'LIMAO'\n\n");

  printf("Digite a palavra-chave: ");
  scanf("%s", aux);
  

  // LOOP FOR PARA FAZER COM QUE A PALAVRA-CHAVE TENHA O MESMO TAMANHO DA PALAVRA A SER CRIPTOGRAFADA
  int i = 0, j = 0;
  
  for (i = 0, j = 0; i < strlen(palavra); i++, j++){

    if ( aux[j] >= 65 && aux[j] <= 90 || aux[j] >= 97 && aux[j] <= 122 ) {
    PalavraChave[i] = aux[j];
      }

    if (aux[j+1] < 65 || aux[j+1] > 90 && aux[j+1] < 97 || aux[j+1] > 122) {
      j = -1;
    }

    
  }
 
  // AQUI TERMINA O LOOP FOR PARA MUDAR O TAMANHO DA PALAVRA-CHAVE


  // CALCULO DA CIFRA DE VIGENERE: (Palavra + Chave) % 26
    for (int i = 0; i < strlen(palavra); i++) {

      char auxiliar = toupper(palavra[i]);
      char auxiliar2 = toupper(PalavraChave[i]);
      
      char x = (auxiliar + auxiliar2) % 26;
        
      x += 'A';

      printf("%c", x);
      
    }
  

  };


void CifraDeSubstituicao(){

  char caractere;
  
  printf("Digite a mensagem que você deseja criptografar, terminada por enter:\n");

  while(1){

    caractere = getchar();

    if(caractere == 10){
      break;
    }

    switch (caractere) {
      case 32:
        caractere = 85;
        break;
      case 33:
        caractere = 50;
        break;
      case 34:
        caractere = 77;
        break;
      case 35:
        caractere = 95;
        break;
      case 36:
        caractere = 43;
        break;
      case 37:
        caractere = 118;
        break;
      case 38:
        caractere = 94;
        break;
      case 39:
        caractere = 87;
        break;
      case 40:
        caractere = 52;
        break;
      case 41:
        caractere = 117;
        break;
      case 42:
        caractere = 106;
        break;
      case 43:
        caractere = 59;
        break;
      case 44:
        caractere = 82;
        break;
      case 45:
        caractere = 111;
        break;
      case 46:
        caractere = 54;
        break;
      case 47:
        caractere = 78;
        break;
      case 48:
        caractere = 74;
        break;
      case 49:
        caractere = 32;
        break;
      case 50:
        caractere = 79;
        break;
      case 51:
        caractere = 102;
        break;
      case 52:
        caractere = 88;
        break;
      case 53:
        caractere = 56;
        break;
      case 54:
        caractere = 89;
        break;
      case 55:
        caractere = 73;
        break;
      case 56:
        caractere = 114;
        break;
      case 57:
        caractere = 71;
        break;
      case 58:
        caractere = 100;
        break;
      case 59:
        caractere = 35;
        break;
      case 60:
        caractere = 41;
        break;
      case 61:
        caractere = 115;
        break;
      case 62:
        caractere = 112;
        break;
      case 63:
        caractere = 93;
        break;
      case 64:
        caractere = 81;
        break;
      case 65:
        caractere = 92;
        break;
      case 66:
        caractere = 91;
        break;
      case 67:
        caractere = 99;
        break;
      case 68:
        caractere = 110;
        break;
      case 69:
        caractere = 45;
        break;
      case 70:
        caractere = 38;
        break;
      case 71:
        caractere = 51;
        break;
      case 72:
        caractere = 103;
        break;
      case 73:
        caractere = 104;
        break;
      case 74:
        caractere = 80;
        break;
      case 75:
        caractere = 61;
        break;
      case 76:
        caractere = 63;
        break;
      case 77:
        caractere = 86;
        break;
      case 78:
        caractere = 83;
        break;
      case 79:
        caractere = 58;
        break;
      case 80:
        caractere = 64;
        break;
      case 81:
        caractere = 98;
        break;
      case 82:
        caractere = 116;
        break;
      case 83:
        caractere = 49;
        break;
      case 84:
        caractere = 66;
        break;
      case 85:
        caractere = 70;
        break;
      case 86:
        caractere = 65;
        break;
      case 87:
        caractere = 60;
        break;
      case 88:
        caractere = 75;
        break;
      case 89:
        caractere = 113;
        break;
      case 90:
        caractere = 40;
        break;
      case 91:
        caractere = 122;
        break;
      case 92:
        caractere = 109;
        break;
      case 93:
        caractere = 53;
        break;
      case 94:
        caractere = 105;
        break;
      case 95:
        caractere = 124;
        break;
      case 96:
        caractere = 120;
        break;
      case 97:
        caractere = 34;
        break;
      case 98:
        caractere = 76;
        break;
      case 99:
        caractere = 68;
        break;
      case 100:
        caractere = 121;
        break;
      case 101:
        caractere = 48;
        break;
      case 102:
        caractere = 44;
        break;
      case 103:
        caractere = 72;
        break;
      case 104:
        caractere = 46;
        break;
      case 105:
        caractere = 39;
        break;
      case 106:
        caractere = 67;
        break;
      case 107:
        caractere = 90;
        break;
      case 108:
        caractere = 33;
        break;
      case 109:
        caractere = 84;
        break;
      case 110:
        caractere = 123;
        break;
      case 111:
        caractere = 108;
        break;
      case 112:
        caractere = 62;
        break;
      case 113:
        caractere = 69;
        break;
      case 114:
        caractere = 57;
        break;
      case 115:
        caractere = 55;
        break;
      case 116:
        caractere = 36;
        break;
      case 117:
        caractere = 119;
        break;
      case 118:
        caractere = 96;
        break;
      case 119:
        caractere = 42;
        break;
      case 120:
        caractere = 37;
        break;
      case 121:
        caractere = 47;
        break;
      case 122:
        caractere = 107;
        break;
      case 123:
        caractere = 97;
        break;
      case 124:
        caractere = 101;
        break;

      default:
        break;
    }

    printf("%c", caractere);
  }

  printf("\n");
}

void CifraYP() {
  
  char vetorYP[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  
  char palavra;
  int desl, cod;

  printf("Digite a quantidade de caracteres a serem deslocados: ");
  scanf("%d", &desl);

  if (desl > 26) {  // Ajusta o valor do deslocamento para um numero valido dentro da quantidade de caracteres do Alfabeto
    desl %= 26;
  }

  printf("Digite a mensagem que você deseja criptografar, terminada por enter:\n");
  
  getchar();

  while(1){

    palavra = getchar();

    if(palavra == 10){
      break;
    }

    cod = palavra + desl;
    
    if(palavra != 10){
      if ((cod > 122 && (palavra > 96 && palavra < 123)) || (cod > 90 && (palavra > 64 && palavra < 91))) {
        cod -= 26;
      } else if ((cod < 97 && (palavra > 96 && palavra < 123)) || (cod < 64 && (palavra > 64 && palavra < 91))) {
        cod = 122 - (96 - cod);
        }}

    cod %= 26;

    printf("%c", vetorYP[cod]);
    }

    printf("\n");

  };

  /*
  Realizado por:
  Daniella Yuka Hirosue e Pedro Henrique Alves de Araujo Silva
  como projeto de extensao para o primeiro semestre do curso de ciencia da computacao da Universidade Federal de Sao Carlos, 
  para a entidade HackoonSpace, campus sorocaba.
  */