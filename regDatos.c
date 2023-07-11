#include <stdio.h>
#include "estructura.h"
#include "metodos.h"

int main() {
    printf("Registrando profesor:\n");
    {
        Profesor profesor;
        
        creaRegProfesor(&profesor);
        printf("\n");
        mostrasDatosProfesor(&profesor);
    
        printf("\n");
    }

    printf("Registrando estudiante:\n");
    {
        Estudiante estudiante;
    creaRegEstudiante(&estudiante);
        printf("\n");
        mostrasDatosEstudiante(&estudiante);
        printf("\n");
    }

    return 0;
}



 

   