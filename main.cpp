
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){

int entrada;
int st,h,ne,hn,ow,w,ph,pw_;

cout <<"-------------------------"<< endl;
cout <<"Introduzca la acción del bot en tiempo T. Escoge uno de los siguientes valores:" << endl;
cout <<"1.- Atacar." << endl;
cout <<"2.- Recoger Arma." << endl;
cout <<"3.- Recoger Energía." << endl;
cout <<"4.- Explorar." << endl;
cout <<"5.- Huir." << endl;
cout <<"6.- Detectar Peligro." << endl;
cout <<"-------------------------"<< endl;
cin >> entrada;
if(entrada == 1 || entrada == 2 || entrada == 3 || entrada == 4 || entrada == 5 || entrada == 6){
    st = entrada;
}
else{
    cout << "El valor introducido es erróneo" << endl;
    exit(0);
}
cout <<"-------------------------"<< endl;
cout <<"Introduzca el nivel de salud de nuestro bot en tiempo T. Escoge uno de los siguientes valores:" << endl;
cout <<"1.- Alto." << endl;
cout <<"2.- Bajo." << endl;
cout <<"-------------------------"<< endl;
cin >> entrada;
if(entrada == 1 || entrada == 2){
    h = entrada;
}
else{
    cout << "El valor introducido es erróneo" << endl;
    exit(0);
}
cout <<"-------------------------"<< endl;
cout <<"Introduzca si el bot tiene arma en tiempo T. Escoge uno de los siguientes valores:" << endl;
cout <<"1.- Armado." << endl;
cout <<"2.- Desarmado." << endl;
cout <<"-------------------------"<< endl;
cin >> entrada;
if(entrada == 1 || entrada == 2){
    w = entrada;
}
else{
    cout << "El valor introducido es erróneo" << endl;
    exit(0);
}
cout <<"-------------------------"<< endl;
cout <<"Introduzca si los oponentes estan armados en tiempo T. Escoge uno de los siguientes valores:" << endl;
cout <<"1.- Armado." << endl;
cout <<"2.- Desarmado." << endl;
cout <<"-------------------------"<< endl;
cin >> entrada;
if(entrada == 1 || entrada == 2){
    ow = entrada;
}
else{
    cout << "El valor introducido es erróneo" << endl;
    exit(0);
}
cout <<"-------------------------"<< endl;
cout <<"Introduzca si el bot escucha un sonido en tiempo T. Escoge uno de los siguientes valores:" << endl;
cout <<"1.- Si." << endl;
cout <<"2.- No." << endl;
cout <<"-------------------------"<< endl;
cin >> entrada;
if(entrada == 1 || entrada == 2){
    hn = entrada;
}
else{
    cout << "El valor introducido es erróneo" << endl;
    exit(0);
}
cout <<"-------------------------"<< endl;
cout <<"Introduzca si hay enemigos cerca de nuestro bot en tiempo T. Escoge uno de los siguientes valores:" << endl;
cout <<"1.- Si." << endl;
cout <<"2.- No." << endl;
cout <<"-------------------------"<< endl;
cin >> entrada;
if(entrada == 1 || entrada == 2){
    ne = entrada;
}
else{
    cout << "El valor introducido es erróneo" << endl;
    exit(0);
}
cout <<"-------------------------"<< endl;
cout <<"Introduzca si nuestro bot recoge un arma en tiempo T. Escoge uno de los siguientes valores:" << endl;
cout <<"1.- Si." << endl;
cout <<"2.- No." << endl;
cout <<"-------------------------"<< endl;
cin >> entrada;
if(entrada == 1 || entrada == 2){
    pw = entrada;
}
else{
    cout << "El valor introducido es erróneo" << endl;
    exit(0);
}
cout <<"-------------------------"<< endl;
cout <<"Introduzca si nuestro bot recoge un paquete de salud en tiempo T. Escoge uno de los siguientes valores:" << endl;
cout <<"1.- Si." << endl;
cout <<"2.- No." << endl;
cout <<"-------------------------"<< endl;
cin >> entrada;
if(entrada == 1 || entrada == 2){
    ph = entrada;
}
else{
    cout << "El valor introducido es erróneo" << endl;
    exit(0);
}


}
