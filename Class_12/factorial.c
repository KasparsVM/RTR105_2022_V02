// 5!= 5*4*3*2*1=4!*5
//5!/5 = 4!

//0! = 1 //nulle ir tuksa kopa [] -jautajums 0! - cik skaitlu kopas var uztaisit no tuksas skaitlu kopas?
// vienu tuksu kopu

#include<stdio.h>

int main()
{
 int i, n;
printf("cien. lietotaj, ludzu, ievadi vienu veseligu naturalo skaitli: ");
snacf("%d",&n);


for(i = 1, fact = 1; i<=n ; i++)
{
fact = fact * i; //fact *= 1;
printf("%3d! = %12d\b",i,fact);
}

return 0;
}
