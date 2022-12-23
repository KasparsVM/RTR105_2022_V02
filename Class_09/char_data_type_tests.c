// "Ievads algoritmu valoda C' Juris Ziemelis
#include<stdio.h>

int main()
 {
 //printf("a mainiga vertiba pirms deklaresanas: c%\n");
 //nedrikst izmantot pirms deklaresanas
 char a; //mainiga ar identifikatoru (vai vardu) "a" deklaresana
         //ar identifikatoru a vienozimigi tiek sasaistits kads atminas apgabals
         //atminas apgabals - kur? (vai vieta)? un cik (vai izmers)?
         //uz jautajumu detalizeti kur? (adrese) atbildesim cita nodarbiba
         //cik?- 1byte, jo.... char
         //komentars par vardu (vai identifikatoru - drikst saturet
         //burtus (ir starpiba starp lieliem un maziem burtiem -  NAV a - CASESENSITIVE),
         //CIPARUS, BET NEDRIKST  sakties ar ciparu
         //var but mnemonisks, piemeram -cilindra_tilpums
  printf("a mainiga vertiba (ka simbols) uzreiz pec deklaresanas: %c\n",a);
  printf("a mainiga vertiba (ka dec skaitlis) uzreiz pec deklaresanas: %d%c",a,10);
  printf("a mainiga vertiba (ka hex skaitlis) uzreiz pec deklaresanas: %x\n",a);
  printf("a mainiga vertiba (ka oct skaitlis) uzreiz pec deklaresanas: %o\n",a);
 // ;;;;;;;;;;;;;;// daudzi tuksi operatori

//int a;
//nedrikst sadi pardeklaret mainigo
//NB! mainiga butiba-mainities
a=89; //"="-pieskirsanas operacija
      //pa kreisi ir - 89 - atbilstosi noformejuma (pierakstam) ata ir
      // int tipa(4 bytes) konstante =>89 = 64(2^6)+16(2^4)+8(2^3)+1(2^0)
      //0000 0000 0000 0000 0000 0000 0000 0000
      // a=89 -> mainiga a 1 baita tiek ierakstits 0101 100
  printf("a mainiga vertiba (ka simbols) uzreiz pec deklaresanas: %c\n",a);
  printf("a mainiga vertiba (ka dec skaitlis) uzreiz pec deklaresanas: %d%c",a,10);
  printf("a mainiga vertiba (ka hex skaitlis) uzreiz pec deklaresanas: %#x\n",a);
  printf("a mainiga vertiba (ka oct skaitlis) uzreiz pec deklaresanas: %#o\n",a);
a=160;
// char->signed char ->-128 .... 0 ... 127
//160(dec)-128(2^7....-->0000 0000 0000 0000 0000 1010 0000
///musu (ieks a) riciba ir (1)010 000 -> ir "-" zime -nakamie viti pa tieso uzreiz netiek parveidoti par dec
// + 1 -pieskaita binaro 1
// 110 0000 - un tikai tagad rekina dec skaitli - 1*2^6+1*2^5=96
// tiesi tapec gala rezultat ir -96
  printf("a mainiga vertiba (ka simbols) uzreiz pec deklaresanas: %c\n",a);
  printf("a mainiga vertiba (ka dec skaitlis) uzreiz pec deklaresanas: %d%c",a,10);
  printf("a mainiga vertiba (ka hex skaitlis) uzreiz pec deklaresanas: %#x\n",a);
  printf("a mainiga vertiba (ka oct skaitlis) uzreiz pec deklaresanas: %#o\n",a);


 return 0;
 }
