// NB! for( ; ; ) - ciklA FOR () iekavas VIENMER ir divi - ;
// darbiba pirms for (...., ....., ... ; ; ) pirmaa;
//                    tiek izpilditas tikai vienu reizi
//                    sis darbibas var but vairakas - nodalitas ar -,

// for (1.;2.5.8.11.;4.7.10.) /darbibu izpildildes seciba
// 3.6.9. //tikmer, kamer izteiksmes dala (starp ;;) nebus false

//ffor( ; izteiksme ; ) viena darbiba;
//for ( ; izteiksme ; )
// viena darbiba;






#include<stdio.h>

int main()
{
unsigned char c;

for (c=10 ; c>=0 ; c--)
{
printf("c=%d\n",c);
//if(c==5)
//break;
}

printf("izdruka ar printf aiz cikla:\n");
printf("c=%d\n",c);

return 0;
}
