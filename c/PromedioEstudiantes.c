#include<stdio.h>
struct estudiante
{
    int ex1, ex2, ex3, ex4, ex5;
};
void exa(estudiante estudiante[])
{
    for(int x = 0; x < 2; x++)
    {
    }
}
void eleccion(estudiante estudiante[])
{
    int elec, x, menor = 0;
    printf("Elija un estudiante\n");
    scanf("%i", &elec);
    if(elec == 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || 10)
    {
        for(int x = 0; x < 2; x++)
        {
            if(estudiante[x].ex1 < menor)
            {
                menor = estudiante[x].ex1;
                printf("Examen %i con menor calificacion es %i\n", x + 1, menor);
            }
            else if(estudiante[x].ex2 < menor)
            {
                menor = estudiante[x].ex2;
                printf("Examen %i con menor calificacion es %i\n", x + 1, menor);
            }
            else if(estudiante[x].ex3 < menor)
            {
                menor = estudiante[x].ex3;
                printf("Examen %i con menor calificacion es %i\n", x + 1, menor);
            }
            else if(estudiante[x].ex4 < menor)
            {
                menor = estudiante[x].ex4;
                printf("Examen %i con menor calificacion es %i\n", x + 1, menor);
            }
            else
            {
                menor = estudiante[x].ex5;
                printf("Examen %i con menor calificacion es %i\n", x + 1, menor);
            }
        }
    }
}
void ex1y5(estudiante estudiante[])
{
    int mayor = 0, mayor1 = 0;
    for(int x = 0; x < 2; x++)
    {
        if(estudiante[x].ex1 && estudiante[x].ex5 > mayor)
        {
            printf("Estudiante %i en el examen 1 con calificacion de %i\n", x + 1, estudiante[x].ex1);
            printf("Estudiante %i en el examen 5 con calificacion de %i\n", x + 1, estudiante[x].ex5);
        }
    }
}
void exam3(estudiante estudiante[])
{
    for(int x = 0; x < 2; x++)
    {
        if(estudiante[x].ex3 >= 8)
        {
            printf("Estudiante %i con calificacion de %i\n", x + 1, estudiante[x].ex3);
        }
    }
}
void promedio(estudiante estudiante[])
{
    int suma;
    for(int x = 0; x < 2; x++)
    {
        suma = suma + 1;
        printf("El promedio del estudiante %i es : %g\n", x + 1, suma / 5);
    }
}
int menu()
{
    int opcion;
    printf(" MENU DE OPCIONES .....\n");
    printf("1. Promedio de cada estudiante \n");
    printf("2. Alumno o alumnos con mejor calificacion en el examen 3\n");
    printf("3. Alumno o alumnos con mayor calificacion en el examen 1 y 5\n");
    printf("4. Dado un alumno (1-10) decir en que examen tuvo la menor calificacion\n");
    printf("5. En que examen fue el mas alto el promedio de los 10 alumnos y quien lo obtuvo\n");
    printf("6. Terminar\n");
    printf("Seleccione opcion \n");
    scanf("%i", &opcion);
    return opcion;
}
void llena(estudiante estudiante[])
{
    printf("CAPTURANDO CALIFICACIONES......\n");
    for(int x = 0; x < 2; x++)
    {
        printf("Estudiante: %i\n", x + 1);
        printf("Ingrese la calificacion del examen 1:\n");
        scanf("%i", &estudiante[x].ex1);
        printf("Ingrese la calificacion del examen: 2\n");
        scanf("%i", &estudiante[x].ex2);
        printf("Ingrese la calificacion del examen: 3\n");
        scanf("%i", &estudiante[x].ex3);
        printf("Ingrese la calificacion del examen: 4\n");
        scanf("%i", &estudiante[x].ex4);
        printf("Ingrese la calificacion del examen: 5\n");
        scanf("%i", &estudiante[x].ex5);
        fflush(stdin);
    }
}
int main()
{
    int opc;
    estudiante e[2];
    llena(e);
    do
    {
        opc = menu();
        switch(opc)
        {
        case 1:
            promedio(e);
            break;
        case 2:
            exam3(e);
            break;
        case 3:
            ex1y5(e);
            break;
        case 4:
            eleccion(e);
            break;
        case 5:
            break;
        case 6:
            printf("Ha salido exitosamente del programa\n");
            break;
        }
    }
    while(opc != 6);
    return 0;
}