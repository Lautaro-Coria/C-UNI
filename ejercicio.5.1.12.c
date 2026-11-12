//sistema que calcula EL SUELDO FINAL DE CADA EMPLEADO

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //por cada empleado se ingresa:
    int legajo; //se finaliza con legajo=0
    float sueldobasico;
    int antiguedad;
    char sexo;
    int categoria;

    //mayor sueldo y mayor legajo
    int mayorlegajo;
    float mayorsueldo= 0.0;

    //acumuladores y contadores:
    int cont10anios= 0;
    int total = 0;
    int contM= 0;
    int contF= 0;
    int contX= 0;

    //valores booleanos que nose de que sirven.
    bool ok= true, primero= true;

    do
    {
        if (ok)
        {
            printf("Ingresar el legajo del empleado entre [1000, 5000] (0 PARA FINALIZAR): \t");
            scanf("%d", &legajo);
            while (getchar() != '\n');
            ok= false;
        }
        else
        {
            printf("\nERROR- El legajo debe estar entre 1000 y 5000:\t");
            scanf("%d", &legajo);
            while (getchar() != '\n');
        }
        }while ((legajo < 1000 || legajo > 5000) && legajo != 0);


        while(legajo != 0)
        {
            total ++;
            printf("\nIngresar el sueldo basico del empleado (mayor a cero): \t");
            scanf("%f", &sueldobasico);
            while (getchar() != '\n');

            while (sueldobasico <= 0 )
            {
                printf("\nERROR- El sueldo basico debe ser mayor a cero: \t");
                scanf("%f",&sueldobasico);
                while (getchar() != '\n');
            }

            printf("\nIngrese la Antiguedad del empleado (mayor o igual a cero): \t");
            scanf("%d", &antiguedad);
            while (getchar() != '\n');

            while (antiguedad < 0)
            {
                printf("\nERROR- La antiguedad debe ser mayor o igual a cero: \t");
                scanf("%d", &antiguedad);
                while (getchar() != '\n');
            }
            printf("\nIngrese el sexo del empleado 'M' masculino, 'F' femenino, 'x' No declarado: \t");
            scanf("%c", &sexo);
            sexo= toupper(sexo);

            while (sexo != 'M' && sexo != 'F' && sexo != 'X' )
            {
                while (getchar() != '\n');
                printf("\nERROR- Debe ingresar unos de las opciones declaradas('M' masculino,'F' femenino,'x' No declarado): \t");
                scanf("%c", &sexo);
                sexo= toupper(sexo);
            }
            ok= true;


            do
            {
                if(ok)
                {
                    printf("\nIngrese la Categoria del Empleado (entre [1,5]): \t");
                    while(getchar()!= '\n');
                    scanf("%d", &categoria);
                    ok= false;
                }
                else
                {
                    printf("\nERROR-Debe ingresar una categoria entre [1,5]: \t");
                    scanf("%d", &categoria);
                    while (getchar() != '\n');
                }
            }
            while(categoria < 1 || categoria >5);


            if (categoria == 2 || categoria == 3)
                sueldobasico+= 150000;
            else if (categoria == 4)
                sueldobasico+= (sueldobasico*0.1);

            else if (categoria == 5)
                sueldobasico += (sueldobasico*0.3);

            if (antiguedad > 10)
            {
                sueldobasico+= (sueldobasico*0.1);
                cont10anios++;
            }

            printf("\nEl sueldo  del empleado legajo %d es: %.2f\n\n", legajo, sueldobasico);

            if (primero || sueldobasico > mayorsueldo)
            {
                mayorlegajo= legajo;
                mayorsueldo = sueldobasico;
                primero= false;
            }

            if (sexo == 'F')
                contF++;
            else if (sexo== 'M')
                contM ++;
            else
                contX++;
            ok= true;

            do
            {

                if (ok)
                {
                    printf("\nIngresar el legajo del empleado entre [1000, 5000] (0 PARA FINALIZAR): \t");
                    scanf("%d", &legajo);
                    while (getchar() != '\n');
                    ok= false;
                }
                else
                {
                    printf("\nERROR- El legajo debe estar entre 1000 y 5000:\t");
                    scanf("%d", &legajo);
                    while (getchar() != '\n');
                }
                }while ((legajo < 1000 || legajo > 5000) && legajo != 0);

            }

            if (total > 0)
            {
                printf("\nLa cantidad de empleados con mas de 10 anios de antiguedad es: %d\n", cont10anios);
                printf("\nEl empleado que mas sueldo cobro es el del legajo %d con un importe de $ %.2f\n", mayorlegajo, mayorsueldo);
                printf("\nPorcentaje de empleados Mujeres: %.2f%\n", (float)contF/total*100);
                printf("\nPorcentaje de empleados Hombres: %.2f%\n", (float)contM/total*100);
                printf("\nPorcentaje de empleados Sexo indefinido: %.2f%\n",(float)contX/total*100);
            }

            else
            {
                printf("\nNo se registraron datos de sueldos de empleado.\n");
            }
            printf("\n\n\n");
            system("pause");
            return 0;





    }


