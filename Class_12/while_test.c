/*ciklu konstrukcija lauj vairakas reizesp ec kartas izpildit
vienas un tas pasas kodu rindas (alternativa-programmetajs manuali atkarto
rindu rakstisanu)*/

// while -kamer
// do .. while - darit kameer
// for - darit lidz

//kodesanai- www.onlinegdb.com
//           taja skaitaa pielieto "Beaatify"

//while(izteiksme)  viena_darbiba;
  // tapat ka bija ar if(izteiksme) viena_darbiba;
//while(izteiksme)
// viena_darbiba;
//while(izteiksme) {pirmaa_darbiba; otraa_darbiiba;}
//while(izteiksme)
// {
// pirma darbiba;
// otra darbiba;
// }

//tapat ka iepriekseja viena_darbiba vai pirmaa_darbiba utt.
//tiks (regulari) izpilditas ja izteiksmes rezultats ir "true"
//"true"-1 kaut viena rezultata bitaa
//"false" - 0 visos rezultata bitos

#include<stdio.h>

int main()
{
char c = 10;

//while(c>=0)
while(c)// c==0
{
if (c=3){
 printf ("aped darzeni\n");
}
printf("c = %d\n", c);
c--;
//c= -7;
//c--; //c=c-1; //c-=1; //c+=-1; // --c;

}
printf("izdrukat ar printf aiz cikla:\n");
printf("c = %d\n", c);


return 0;
}
