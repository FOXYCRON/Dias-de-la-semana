#include<stdio.h>
#include<conio.h>
int num;

main()
	{
   	printf(" Dias De La Semana \n\n");
      printf("\n\n Escoge un numero del 1 al 7: "); scanf("%d", &num);
      switch(num)
       {

       	case 1: printf("\n El dia de la semana es: Lunes"); break;
         case 2: printf("\n El dia de la semana es: Martes"); break;
         case 3: printf("\n El dia de la semana es: Miercoles"); break;
         case 4: printf("\n El dia de la semana es: Jueves"); break;
         case 5: printf("\n El dia de la semana es: Viernes"); break;
         case 6: printf("\n El dia de la semana es: Sabado"); break;
         case 7: printf("\n El dia de la semana es: Domingo"); break;

         default: printf("\n\n El numero elegido no es valido");

        }

        printf("\n\n Autor: Irvin Adrian");

      getch();
     }