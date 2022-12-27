#include<stdio.h>
void main()
{
int numero [9]= {1, 2, 2, 3, 3, 3, 4, 5, 5},numeros1[9]={8, 8, 8, 7, 7, 6, 5, 4, 3};
int cont =0, cont1 = 0, moda;

    for (int i =0; i<9;i++)
        {printf(" %d ", numero [i]);
            for (int j=0;j<9;j++)
            {
                if(numero[i]==numero[j] && i != j) cont++;
            }

        if (cont>cont1){ // los contadores nos sirve para identificar las veces que el numero se repite, y hacer comparacion con otras repeticiones
            cont1 = cont; // Siempre se va a escoger el numero mayor para asignar la moda
            moda = numero[i];
        }

        cont = 0;

        }
        //printf("\n\nla moda es %d \n", cont1);
        printf("\n\nla moda es %d, y hay %d \n", moda, cont1+1);
        


}