
#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

typedef struct {
 char nombreMateria[50];
 char Paralelo[10];
}materiasDictadas;

typedef struct 
{
char nombreMateria[50];
int Credidos;
}materiasTomadas;

typedef struct 
{
   char Nombre[50];
   char Carrera[50];
   int numeroDeMaterias;
  materiasDictadas* md; 
}Profesor;
typedef struct 
{
    char Nombre[50];
    int Nivel;
    char Carrera[50];
    int numeroDeMaterias;
  materiasTomadas* mt;  
} Estudiante;

#endif 