#include<stdio.h>

int main()
{
int a,r,h,l,b,sd,square, triangle,rectangle, Rhombus,pg;
float pi=3.14;
float circle,sphere, hsphere,hollosp,tpz;


    printf("\n       ******AREA CALCULATOR******");
    printf("\n----------------------------------------");
    printf("\n\n       Find The  Following Area:-");
    while (1){
   printf("\n----------------------------------------");
    printf("\n            [1] Square");
    printf("\n            [2] Circle");
    printf("\n            [3] Rectangle");
    printf("\n            [4] parallelogram");
    printf("\n            [5] Rhombus");
    printf("\n            [6] Triangle");
    printf("\n            [7] Trapezium");
    printf("\n            [8] Sphare");
    printf("\n            [9] Hemi sphere");
    printf("\n           [10] Hollow Hemi Sphere");
    printf("\n\n      Enter Your Choice Number => ");
    scanf("%d",&a);
    
    switch (a){
   case 1:
   printf ("\n\n        You Choose Area Of Square :-");
   printf("\n       Enter the Side => ");
   scanf("%d",&sd);
   square = 4*sd;
   printf("       Area of Square => %d", square);
    break;
    
    case 2:
   printf ("\n\n        You Choose Area Of Circle :-");
   printf("\n       Enter the Radius => ");
   scanf("%d",&r);
   circle = pi*r*r;
   printf("       Area of Circle => %.2f",circle);
   break ;
   
   case 3:
   printf ("\n\n      You Choose Area Of Rectangle :-");
   printf("\n       1. Enter the length => ");
   scanf("%d",&l);
   printf("       2. Enter the breath => ");
   scanf("%d",&b);
   rectangle = l*b;
   printf("       Area of Rectangle => %d", rectangle);
    break;
    
   case 4: 
    printf ("\n\n   You Choose Area Of Parallelogram :-");
   printf("\n       Enter the base => ");
   scanf("%d",&b);
   printf("       Enter the Hight => ");
   scanf("%d",&h);
   pg = b*h;
   printf("       Area of parallelogram => %d",pg);
   break ;
   
   case 5:
   printf ("\n\n      You Choose Area Of Rhombus :-");
   printf("\n       Enter the base => ");
   scanf("%d",&b);
   printf("       Enter the Hight => ");
   scanf("%d",&h);
   Rhombus = b*h;
   printf("       Area of Rhombus => %d", Rhombus);
   break ;
   
   
    case 6:
   printf ("\n\n      You Choose Area Of Triangle :-");
   printf("\n       1. Enter the breath => ");
   scanf("%d",&b);
   printf("       2. Enter the hight => ");
   scanf("%d",&h);
   triangle = (b*h)/2;
   printf("       Area of triangle => %d", triangle);
   break ;
   
   
   case 7:
   printf ("\n\n     You Choose Area Of Trapezium :-");
   printf("\n       Enter the a => ");
   scanf("%d",&a);
   printf("       Enter the base => ");
   scanf("%d",&b);
   printf("     Enter the hight => ");
   scanf("%d",&h);
   tpz = (a+b)/2*h;
   printf("       Area of Trapezium => %.2f",tpz);
   break ;
   
   
   case 8:
   printf ("\n\n      You Choose area of Sphere :-");
   printf("\n       Enter the Radius => ");
   scanf("%d",&r);
   sphere = 4*pi*r*r;
   printf("       Area of sphere => %.2f",sphere);
   break ;
   
   
   case 9:
   printf ("\n\n    You Choose Area Of Hemi Sphere :-");
   printf("\n       Enter the Radius => ");
   scanf("%d",&r);
   hsphere = 3*pi*r*r;
   printf("       Area of Hemi Sphere => %.2f",hsphere);
   break ;
   
   
   case 10:
   printf ("\n\nYou Choose Area Of Hollow Hemi Sphere :-");
   printf("\n       Enter the Radius => ");
   scanf("%d",&r);
   hollosp = (3*pi*r*r)+pi*r;
   printf("       Area of Hollow Hemi Sphere => %.2f",hollosp);
   break ;
   
   
   default :
   printf("   Invalid Options! Please Try Again");
   break;
    }
  }  
      printf("\n----------------------------------------");
    return 0;
}