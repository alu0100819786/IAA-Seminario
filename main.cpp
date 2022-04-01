#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <string>

/**
 * @brief Menu used to ask the user the states of the robot
 * 
 * @param st current movement
 * @param h hp level
 * @param ne near enemy
 * @param hn hear noises
 * @param ow oponent weapon
 * @param w weapon
 * @param ph pick hp
 * @param pw pick weapon
 */
void menu(int &st, int &h, int &ne, int &hn, int &ow, int &w, int &ph, int &pw);

/**
 * @brief Principal function in the program
 * 
 * @return int 0 if all went ok 
 */
int main(void){
    int st,h,ne,hn,ow,w,ph,pw;
    menu(st,h,ne,hn,ow,w,ph,pw);
}

void menu(int &st, int &h, int &ne, int &hn, int &ow, int &w, int &ph, int &pw) {
    std::string entrada;
    while (true) {
        std::cout << std::endl << "-------------------------" << std::endl;
        std::cout << "Introduzca la acción del bot en tiempo T. Escoge uno de los siguientes valores:" << std::endl;
        std::cout << "1.- Atacar." << std::endl;
        std::cout << "2.- Recoger Arma." << std::endl;
        std::cout << "3.- Recoger Energía." << std::endl;
        std::cout << "4.- Explorar." << std::endl;
        std::cout << "5.- Huir." << std::endl;
        std::cout << "6.- Detectar Peligro." << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cin >> entrada;
        if (entrada == "1" || entrada == "2" || entrada == "3" || entrada == "4" || entrada == "5" || entrada == "6") {
            std::stringstream ss;
            ss << entrada;
            ss >> st;
            break;
        } else {
            std::cout << std::endl << "El valor introducido es erróneo" << std::endl;
        }
    }
    while (true) {
        std::cout << std::endl <<"-------------------------"<< std::endl;
        std::cout <<"Introduzca el nivel de salud de nuestro bot en tiempo T. Escoge uno de los siguientes valores:" << std::endl;
        std::cout <<"1.- Alto." << std::endl;
        std::cout <<"2.- Bajo." << std::endl;
        std::cout <<"-------------------------"<< std::endl;
        std::cin >> entrada;
        if (entrada == "1" || entrada == "2"){
            std::stringstream ss;
            ss << entrada;
            ss >> h;
            break;
        } else {
            std::cout << std::endl << "El valor introducido es erróneo" << std::endl;
        }
    }
    while (true) {
        std::cout << std::endl << "-------------------------" << std::endl;
        std::cout << "Introduzca si el bot tiene arma en tiempo T. Escoge uno de los siguientes valores:" << std::endl;
        std::cout << "1.- Armado." << std::endl;
        std::cout << "2.- Desarmado." << std::endl;
        std::cout << "-------------------------"<< std::endl;
        std::cin >> entrada;
        if (entrada == "1" || entrada == "2"){
            std::stringstream ss;
            ss << entrada;
            ss >> w;
            break;
        } else {
            std::cout << std::endl << "El valor introducido es erróneo" << std::endl;
        }
    }
    while (true) {
        std::cout << std::endl << "-------------------------" << std::endl;
        std::cout << "Introduzca si los oponentes estan armados en tiempo T. Escoge uno de los siguientes valores:" << std::endl;
        std::cout << "1.- Armado." << std::endl;
        std::cout << "2.- Desarmado." << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cin >> entrada;
        if (entrada == "1" || entrada == "2"){
            std::stringstream ss;
            ss << entrada;
            ss >> ow;
            break;
        } else {
            std::cout << std::endl << "El valor introducido es erróneo" << std::endl;
        }
    }
    while (true) {
        std::cout << std::endl << "-------------------------" << std::endl;
        std::cout << "Introduzca si el bot escucha un sonido en tiempo T. Escoge uno de los siguientes valores:" << std::endl;
        std::cout << "1.- Si." << std::endl;
        std::cout << "2.- No." << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cin >> entrada;
        if (entrada == "1" || entrada == "2"){
            std::stringstream ss;
            ss << entrada;
            ss >> hn;
            break;
        } else {
            std::cout << std::endl << "El valor introducido es erróneo" << std::endl;
        }
    }
    while (true) {
        std::cout << std::endl << "-------------------------" << std::endl;
        std::cout << "Introduzca si hay enemigos cerca de nuestro bot en tiempo T. Escoge uno de los siguientes valores:" << std::endl;
        std::cout << "1.- Si." << std::endl;
        std::cout << "2.- No." << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cin >> entrada;
        if (entrada == "1" || entrada == "2") {
            std::stringstream ss;
            ss << entrada;
            ss >> ne;
            break;
        } else {
            std::cout << std::endl << "El valor introducido es erróneo" << std::endl;
        }
    }
    while (true) {
        std::cout << std::endl << "-------------------------" << std::endl;
        std::cout << "Introduzca si nuestro bot recoge un arma en tiempo T. Escoge uno de los siguientes valores:" << std::endl;
        std::cout << "1.- Si." << std::endl;
        std::cout << "2.- No." << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cin >> entrada;
        if (entrada == "1" || entrada == "2") {
            std::stringstream ss;
            ss << entrada;
            ss >> pw;
            break;
        } else {
            std::cout << std::endl << "El valor introducido es erróneo" << std::endl;
        }
    }
    while (true) {
        std::cout << std::endl << "-------------------------" << std::endl;
        std::cout << "Introduzca si nuestro bot recoge un paquete de salud en tiempo T. Escoge uno de los siguientes valores:" << std::endl;
        std::cout << "1.- Si." << std::endl;
        std::cout << "2.- No." << std::endl;
        std::cout <<"-------------------------" << std::endl;
        std::cin >> entrada;
        if (entrada == "1" || entrada == "2"){
            std::stringstream ss;
            ss << entrada;
            ss >> ph;
            break;
        } else {
            std::cout << std::endl << "El valor introducido es erróneo" << std::endl;
        }
    }
}