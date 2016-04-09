# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <math.h>

int main(void)
{
                int a = 1000000;
                int b = 0;
                float x, y;
               
                srand( time( NULL ) );

                for(int i = 0; i < a; i++)
                {
                                x = (double) rand() / RAND_MAX;              
                                y = (double) rand() / RAND_MAX;

                               if(sqrt (pow(x,2)+pow(y,2)) <= 1)
                               {
                                               b++;
                               }
                }
                              
                double resultado = (double)4 * b /a;
                printf("PI é igual a: %lf\n", resultado);

                return 0;
}