/****************************
lista.h
Lista enlazada simple de usuarios
 Andrea Balb�s        09-10076
 Gustavo El Khoury    10-10226     
 
 Septiembre - Diciembre 2013
 
 ****************************/
 
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *username;
    struct usuarios *sig;
} usuarios; 

typedef struct{
    int size;
    usuarios *cabeza;
    usuarios *cola;
} listaUsuarios;

void initialize(listaUsuarios lista){
    lista.cabeza = NULL;
    lista.cola = NULL;
    lista.size = 0;
}

void adduser(listaUsuarios lista,char *nombreUsuario){
    // Creamos la nueva caja de la lista
    usuarios *newu;
    newu = (usuarios *) malloc (sizeof(usuarios));
    if (newu==NULL) 
      perror("malloc");

    // Rellenamos la caja
    newu->username = nombreUsuario;
    newu->sig = NULL;

    // Si la lista est� vac�a
    if (lista.size==0){
        lista.cabeza=newu;
        lista.cola=newu;
    }
    else{
        lista.cola->sig = newu;
        lista.cola = newu;
    }

    // Incremento el tama�o de la lista
    ++lista.size;
}

/*
void removeuser(char *username){
    usuarios *act;
    act = cabeza;
    while (*act != NULL){
        if (*act->username==*username) break;
            act = act->sig;
        }

        if (*act!=NULL){

        }
    }

}*/















