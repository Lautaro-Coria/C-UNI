#include <stdio.h>

int main(){
    int i, codigo;
    float horasxsemana, valorhora, sueldosemanal;

    int contmenos20= 0;

    float maxsueldo= 0;
    int codmaxsueldo= 0;

    float totalsueldo= 0;

    do{
        printf("Ingrese el valor por hora: ");
        scanf("%f", &valorhora);
        while(getchar()!='\n');

        if (valorhora <= 0){
            printf("ERROR- El valor de la hora debe ser mayor a cero.\n");
        }
    }while (valorhora <= 0);

    for (i= 1; i<= 10; i++){
        do{
            printf("\nIngrese el codigo del empleado: ");
            scanf("%d", &codigo);
            while(getchar()!='\n');

            if (codigo<=0){
                printf("ERROR.El codigo debe ser un entero mayor a cero.\n");
            }
        }while(codigo<=0);

        do{
            printf("Ingrese las horas trabajada del empleado %d: \n", codigo);
            scanf("%f",&horasxsemana);
            while(getchar()!='\n');

            if (horasxsemana <= 0){
                printf("ERROR-Las horas del empleado deben ser mayor a cero.\n");
            }
        }while(horasxsemana <= 0);


        sueldosemanal= valorhora*horasxsemana;
        printf("El sueldo semanal correspondiente al empleado %d es %.2f.\n", codigo, sueldosemanal);

        if (i== 1 || sueldosemanal > maxsueldo){
            maxsueldo = sueldosemanal;
            codmaxsueldo= codigo;
        }

        if (horasxsemana < 20){
            contmenos20++;
        }
         totalsueldo+= sueldosemanal;

    }

    float porcentajmenos20 = (contmenos20*100.0)/10;
    float promediosueldos= totalsueldo/ 10;

    printf("=========RESULTADOS==============\n");
    printf("El codigo del empleado que mas sueldo cobro en la semana es: %d\n", codmaxsueldo);
    printf("El porcentaje de empleados que trabajaron menos de 20 horas es: %.2f%%\n", porcentajmenos20);
    printf("El promedio de dinero pagado en sueldos a los empleados en la semana es: %.2f\n", promediosueldos);
    printf("==================================\n");

    return 0;


}

