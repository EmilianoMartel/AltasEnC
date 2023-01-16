#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char option; //Guardamos la opcion seleccionada

    do{
        system("cls"); //Limpiar pantalla
        printf("Welcome\n");
        printf("1 - New users\n");
        printf("2 - Search user\n");
        printf("3 - Exit\n");
        printf("Select a option (please choise a number): ");
        scanf("%s",&option);

        //Llamamos la funcion
        switch(option){
            case'1':
                New_User();
            break;

            case'2':
                Search();
            break;

            case '3':
                printf("Goodbye! \n"):
            break;

            default:
                printf("Invalid option\n");
            break;
        }

    getchar();
    return 0;

    }while(option!='3');//Mientras no seleccione Exit correctamente vuelve al menu
    
    getchar();
    return 0;
}