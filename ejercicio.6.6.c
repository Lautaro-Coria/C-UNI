#include <stdio.h>
//cuantas funciones necesito ?

int cuadrante(int x, int y);

int puntaje(int c1, int c2, int c3, int c4, int centro);


int main(){
    int numParticipante;

    int ganadorNum= 0;
    int ganadorPuntaje= 0;

    int totalDisparosCentroGlobal= 0;


    printf("Ingrese el numero del participante--(entero > 0)--(negativo para finalizar)--: ");
    scanf("%d", &numParticipante);
    while(getchar() != '\n');


    while (numParticipante >= 0){
            int c1= 0, c2= 0, c3= 0, c4= 0, cCentro= 0;

            for (int i=1; i <= 5; i++){
                int x, y, cuad;

                do{
                    printf("Disparo %d- ingrese x e y (ej: 3-2): ", i);
                    scanf("%d %d", &x, &y);
                    while(getchar() != '\n');

                    cuad= cuadrante(x, y);

                    if (cuad== -1){
                        printf("ERROR. Dispraro sobre los ejes no permitidos.Intente de nuevo.\n");

                    }

                }while (cuad == -1);


                switch(cuad){
                    case 0:
                        cCentro++;
                        break;
                    case 1:
                        c1++;
                        break;
                    case 2:
                        c2++;
                        break;
                    case 3:
                        c3++;
                        break;
                    case 4:
                        c4++;
                        break;

                }
        }


        int puntajeTotal = puntaje(c1, c2, c3, c4, cCentro);

        printf("\n------RESULTADOS DEL PARTICIPANTE------\n");
        printf("---Disparos cuadrante 1: %d\n", c1);
        printf("---Disparos cuadrante 2: %d\n", c2);
        printf("---Disparos cuadrante 3: %d\n", c3);
        printf("---Disparos cuadrante 4: %d\n", c4);
        printf("---Disparos al centro: %d\n", cCentro);
        printf("---Puntaje obtenido: %d puntos\n", puntajeTotal);

        if (puntajeTotal > ganadorPuntaje){
            ganadorPuntaje= puntajeTotal;
            ganadorNum= numParticipante;
        }

        totalDisparosCentroGlobal+= cCentro;

        printf("\n--------------------------------------\n");
        printf("Ingrese numero de participante (entero > 0, negativo para salir): ");
        scanf("%d", &numParticipante);
        while(getchar() != '\n');

    }


    printf("\n=====RESULTADOS DEL CONCURSO============\n");
    if (ganadorPuntaje != -1){
        printf("Ganador del concurso: participante N: %d con %d puntos.\n", ganadorNum, ganadorPuntaje);
        printf("Cantidad total de disparos en el centro entre todos: %d\n", totalDisparosCentroGlobal);

    }else{
        printf("No se registraron participantes en el concurso.\n");
    }
    printf("=========================================\n");


    return 0;



}

    int cuadrante(int x, int y){
        if (x== 0 && y == 0){
            return 0;
        }
        if (x == 0 || y == 0){
            return -1;
        }
        if (x>0 && y> 0){
            return 1;
        }
        if (x<0 && y>0){
            return 2;
        }
        if (x< 0 && y<0){
            return 3;
        }
        return 4;
    }

    int puntaje(int c1, int c2, int c3, int c4, int centro){
        int puntosc1c2 = (c1 + c2)* 50;
        int puntosc3c4= (c3 + c4)* 40;
        int puntosCentro= centro* 100;

        return puntosc1c2 + puntosc3c4 + puntosCentro;
    }





















