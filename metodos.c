#include <stdio.h>
#include <string.h>
#include "metodos.h"
#include "estructura.h"

      
   void creaRegEstudiante(Estudiante* estudiante){
    int numeroMaterias;
    int nivel;
    printf("ingrese nombre del Estudiante:");
    scanf("%s",estudiante->Nombre);
    printf("Ingresar nivel del estudiante:");
    scanf("%d", &nivel);
    estudiante->Nivel=nivel;

    printf("Ingrese carrera del estudiante>");
    scanf("%s",estudiante->Carrera);
    printf("ingrese el numero de materias tomdas max(7):");
    scanf("%d",&numeroMaterias);
    estudiante->numeroDeMaterias=numeroMaterias;
    for (int i = 0; i <numeroMaterias; i++)
    {
      printf("Materias #%d\n", i+1);
      printf("nombre de la materia:");
      scanf("%s",estudiante->mt[i].nombreMateria);
    }
   }

    void creaRegProfesor(Profesor* profesor){
    int numeroMaterias;
    printf("ingrese nombre del Profesor:");
    scanf("%s", profesor->Nombre);
    printf("Ingrese la carrera del Profesor>");
    scanf("%s",profesor->Carrera);
    printf("ingrese el numero de materias tomdas max(7):");
    scanf("%d",&numeroMaterias);
    profesor->numeroDeMaterias=numeroMaterias;
    for (int i = 0; i < numeroMaterias; i++)
    {
      printf("Materias #%d\n", i+1);
      printf("nombre de la materia:");
      scanf("%s",profesor->md[i].nombreMateria);
    }
   }

   void mostrasDatosProfesor(Profesor* profesor){
    printf("Nombre del profesor: %s\n", profesor->Nombre);
    printf("Carrera del profesor: %s\n", profesor->Carrera);
    printf("Cantidad de materias dictando: %d\n", profesor->numeroDeMaterias);
    for (int i = 0; i < profesor->numeroDeMaterias; i++)
    {
      printf("Materia #%d\n", 1+i);
      printf("Nombre de materia: #%s\n", profesor->md[i].nombreMateria);
      printf("Paralelo #%s\n", profesor->md[i].Paralelo);
    }
   }
   void mostrasDatosEstudiante(Estudiante* estudiante){
    printf("Nombre del estudiante: %s\n", estudiante->Nombre);
    printf("Carrera del estudiante: %s\n", estudiante->Carrera);
    printf("Nivel del estudiante:%d\n",estudiante->Nivel);
    printf("Cantidad de materias dictando: %d\n", estudiante->numeroDeMaterias);
    for (int i = 0; i < estudiante->numeroDeMaterias; i++)
    {
      printf("Materia #%d\n", 1+i);
      printf("Nombre de materia: #%s\n", estudiante->mt[i].nombreMateria);
      printf("Paralelo #%d\n", estudiante->mt[i].Credidos);
    }
   }

 void eliminarDatosEstudiante(Estudiante* estudiante) {
   /*for (int i = 0; i < len(estudiante); i++)
   {
  
   }

   */
    strcpy(estudiante->Nombre, "");
    estudiante->Nivel = 0;
    strcpy(estudiante->Carrera, "");
    estudiante->numeroDeMaterias = 0;

    for (int i = 0; i < 7; i++) {
        strcpy(estudiante->mt[i].nombreMateria, "");
        estudiante->mt[i].Credidos = 0;
    }
}

 void cambiarNivel(Estudiante* estudiante, int nuevo_nivel) {
   
    estudiante->Nivel = nuevo_nivel;
}
