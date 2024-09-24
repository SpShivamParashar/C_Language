#include<stdio.h>

int main()
{
char str[15];
int cvt;
float c,f,k;
  printf("\n    ***** TEMPERATURE CONVERTER *****");
  printf("\n----------------------------------------");
  printf("\n\n         Convert Temperature In:-");
  printf("\n    ---------------------------------");
  printf("\n        1. Celcius To Fahrenheit");
  printf("\n        2. Celcius To Kelvin");
 
  printf("\n        3. Fahrenheit To Celcius");
  printf("\n        4. Fahrenheit To Kelvin");
  printf("\n        5. Kelvin To Fahrenheit");
  printf("\n        6. Kelvin To Celcius");
  printf("\n\n     Choose Your Convert Option => ");
  scanf("%d",&cvt);
  printf("\n----------------------------------------");
  
  switch (cvt) {
  case 1 :
 printf ("\n   Your Choice Celcius To Fahrenheit :-"); 
 printf("\n  Enter The Temperature In Celcius => "); 
 scanf("%f",&c);
 printf("           Convert Into => ");
 scanf("%s",str);
 f=c*9/5+32;
 printf("     Fahrenheit Temprature => %.2f",f);
 break ;
 
 
 case 2 :
 printf ("\n   Your Choice Celcius To Kelvin :-"); 
 printf("\n  Enter The Temperature In Celcius => "); 
 scanf("%f",&c);
 printf("           Convert Into => ");
 scanf("%s",str);
 k=c+273.15;
 printf("     Kelvin Temprature => %.2f",k);
 break ;
 
 
 case 3 :
 printf ("\n   Your Choice Fahrenheit To Celcius :-"); 
 printf("\nEnter The Temperature In Fahrenheit => "); 
 scanf("%f",&f);
 printf("           Convert Into => ");
 scanf("%s",str);
 c=(f-32)*5/9;
 printf("     Celcius Temprature => %.2f",c);
 break ;
 
 
 case 4 :
 printf ("\n   Your Choice Fahrenheit To Kelvin :-"); 
 printf("\n  Enter The Temperature In Fahrenheit => "); 
 scanf("%f",&f);
 printf("           Convert Into => ");
 scanf("%s",str);
 k=(f-32)*5/9+273.15;
 printf("     Kelvin Temprature => %.2f",k);
 break ;
 
 
 case 5 :
 printf ("\n   Your Choice Kelvin To Fahrenheit :-"); 
 printf("\n  Enter The Temperature In Kelvin => "); 
 scanf("%f",&k);
 printf("           Convert Into => ");
 scanf("%s",str);
 f=(k+32)*(9/5)-273.15;
 printf("     Fahrenheit Temprature => %.2f",f);
 break ;
 
 
 case 6 :
 printf ("\n   Your Choice Kelvin To Celcius :-"); 
 printf("\n  Enter The Temperature In Kelvin => "); 
 scanf("%f",&k);
 printf("           Convert Into => ");
 scanf("%s",str);
 c=k-273.15;
 printf("     celcius Temprature => %.2f",c);
 break ;
 
 
 default : 
 printf("    Invalid Options! Please Try Again");
  }
  printf("\n----------------------------------------");
  
  
    return 0;
}