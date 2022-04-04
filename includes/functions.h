#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <string>
#include <vector>

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
        if (entrada == "1" || entrada == "2") {
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
        if (entrada == "1" || entrada == "2") {
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
        if (entrada == "1" || entrada == "2") {
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
        if (entrada == "1" || entrada == "2") {
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
        if (entrada == "1" || entrada == "2") {
            std::stringstream ss;
            ss << entrada;
            ss >> ph;
            break;
        } else {
            std::cout << std::endl << "El valor introducido es erróneo" << std::endl;
        }
    }
}

/**
 * @brief Compute the probability of st+1 to be atack
 * 
 * @param st current movement
 * @param h hp level
 * @param ne near enemy
 * @param hn hear noises
 * @param ow oponent weapon
 * @param w weapon
 * @param ph pick hp
 * @param pw pick weapon 
 * @return float The probability
 */
float ST_One_Atacar(int st, int h,int ne, int hn, int ow, int w, int ph, int pw) {
    float valorST, valorSTOne, valorH, valorNE, valorHN, valorOW, valorW, valorPH, valorPW;
    if (st == 1) { 
        valorST = 0.35;
        valorSTOne = 0.6;
    }
    if (st == 2) { 
        valorST = 0.1;
        valorSTOne = 0.15;
    }
    if (st == 3) { 
        valorST = 0.15;
        valorSTOne = 0.15;
    }
    if (st == 4) { 
        valorST = 0.15;
        valorSTOne = 0.35;
    }
    if (st == 5) { 
        valorST = 0.05;
        valorSTOne = 0.2;
    }
    if (st == 6) { 
        valorST = 0.2;
        valorSTOne = 0.7;
    }
    if (h == 1) { valorH = 0.6; }
    if (h == 2) { valorH = 0.4; }
    if (ne == 1) { valorNE = 0.95; }
    if (ne == 2) { valorNE = 0.05; }
    if (hn == 1) { valorHN = 0.99; }
    if (hn == 2) { valorHN = 0.01; }
    if (ow == 1) { valorOW = 0.5; }
    if (ow == 2) { valorOW = 0.5; }
    if (w == 1) { valorW = 0.99; }
    if (w == 2) { valorW = 0.01; }
    if (ph == 1) { valorPH = 0.85; }
    if (ph == 2) { valorPH = 0.15; }
    if (pw == 1) { valorPW = 0.75; }
    if (pw == 2) { valorPW = 0.25; }
    return valorST * valorSTOne * valorH * valorNE * valorHN * valorOW * valorW * valorPH * valorPW;
}

/**
 * @brief Compute the probability of st+1 to be pick weapon
 * 
 * @param st current movement
 * @param h hp level
 * @param ne near enemy
 * @param hn hear noises
 * @param ow oponent weapon
 * @param w weapon
 * @param ph pick hp
 * @param pw pick weapon 
 * @return float The probability
 */
float ST_One_PickW(int st, int h,int ne, int hn, int ow, int w, int ph, int pw) {
    float valorST, valorSTOne, valorH, valorNE, valorHN, valorOW, valorW, valorPH, valorPW;
    if (st == 1) { 
        valorST = 0.35;
        valorSTOne = 0.025;
    }
    if (st == 2) { 
        valorST = 0.1;
        valorSTOne = 0.025;
    }
    if (st == 3) { 
        valorST = 0.15;
        valorSTOne = 0.15;
    }
    if (st == 4) { 
        valorST = 0.15;
        valorSTOne = 0.1;
    }
    if (st == 5) { 
        valorST = 0.05;
        valorSTOne = 0.1;
    }
    if (st == 6) { 
        valorST = 0.2;
        valorSTOne = 0.025;
    }
    if (h == 1) { valorH = 0.85; }
    if (h == 2) { valorH = 0.15; }
    if (ne == 1) { valorNE = 0.25; }
    if (ne == 2) { valorNE = 0.75; }
    if (hn == 1) { valorHN = 0.15; }
    if (hn == 2) { valorHN = 0.85; }
    if (ow == 1) { valorOW = 0.65; }
    if (ow == 2) { valorOW = 0.35; }
    if (w == 1) { valorW = 0.05; }
    if (w == 2) { valorW = 0.95; }
    if (ph == 1) { valorPH = 0.5; }
    if (ph == 2) { valorPH = 0.5; }
    if (pw == 1) { valorPW = 0.01; }
    if (pw == 2) { valorPW = 0.99; }
    return valorST * valorSTOne * valorH * valorNE * valorHN * valorOW * valorW * valorPH * valorPW;
}

/**
 * @brief Compute the probability of st+1 to be pick energy
 * 
 * @param st current movement
 * @param h hp level
 * @param ne near enemy
 * @param hn hear noises
 * @param ow oponent weapon
 * @param w weapon
 * @param ph pick hp
 * @param pw pick weapon 
 * @return float The probability
 */
float ST_One_PickE(int st, int h,int ne, int hn, int ow, int w, int ph, int pw) {
    float valorST, valorSTOne, valorH, valorNE, valorHN, valorOW, valorW, valorPH, valorPW;
    if (st == 1) { 
        valorST = 0.35;
        valorSTOne = 0.1;
    }
    if (st == 2) { 
        valorST = 0.1;
        valorSTOne = 0.15;
    }
    if (st == 3) { 
        valorST = 0.15;
        valorSTOne = 0.025;
    }
    if (st == 4) { 
        valorST = 0.15;
        valorSTOne = 0.1;
    }
    if (st == 5) { 
        valorST = 0.05;
        valorSTOne = 0.25;
    }
    if (st == 6) { 
        valorST = 0.2;
        valorSTOne = 0.1;
    }
    if (h == 1) { valorH = 0.1; }
    if (h == 2) { valorH = 0.9; }
    if (ne == 1) { valorNE = 0.3; }
    if (ne == 2) { valorNE = 0.7; }
    if (hn == 1) { valorHN = 0.25; }
    if (hn == 2) { valorHN = 0.75; }
    if (ow == 1) { valorOW = 0.88; }
    if (ow == 2) { valorOW = 0.12; }
    if (w == 1) { valorW = 0.4; }
    if (w == 2) { valorW = 0.6; }
    if (ph == 1) { valorPH = 0.001; }
    if (ph == 2) { valorPH = 0.999; }
    if (pw == 1) { valorPW = 0.5; }
    if (pw == 2) { valorPW = 0.5; }
    return valorST * valorSTOne * valorH * valorNE * valorHN * valorOW * valorW * valorPH * valorPW;

}

/**
 * @brief Compute the probability of st+1 to be explore
 * 
 * @param st current movement
 * @param h hp level
 * @param ne near enemy
 * @param hn hear noises
 * @param ow oponent weapon
 * @param w weapon
 * @param ph pick hp
 * @param pw pick weapon 
 * @return float The probability
 */
float ST_One_Explore(int st, int h,int ne, int hn, int ow, int w, int ph, int pw) {
    float valorST, valorSTOne, valorH, valorNE, valorHN, valorOW, valorW, valorPH, valorPW;
    if (st == 1) { 
        valorST = 0.35;
        valorSTOne = 0.1;
    }
    if (st == 2) { 
        valorST = 0.1;
        valorSTOne = 0.3;
    }
    if (st == 3) { 
        valorST = 0.15;
        valorSTOne = 0.3;
    }
    if (st == 4) { 
        valorST = 0.15;
        valorSTOne = 0.1495;
    }
    if (st == 5) { 
        valorST = 0.05;
        valorSTOne = 0.1;
    }
    if (st == 6) { 
        valorST = 0.2;
        valorSTOne = 0.025;
    }
    if (h == 1) { valorH = 0.5; }
    if (h == 2) { valorH = 0.5; }
    if (ne == 1) { valorNE = 0.15; }
    if (ne == 2) { valorNE = 0.85; }
    if (hn == 1) { valorHN = 0.35; }
    if (hn == 2) { valorHN = 0.65; }
    if (ow == 1) { valorOW = 0.5; }
    if (ow == 2) { valorOW = 0.5; }
    if (w == 1) { valorW = 0.4; }
    if (w == 2) { valorW = 0.6; }
    if (ph == 1) { valorPH = 0.1; }
    if (ph == 2) { valorPH = 0.9; }
    if (pw == 1) { valorPW = 0.2; }
    if (pw == 2) { valorPW = 0.8; }
    return valorST * valorSTOne * valorH * valorNE * valorHN * valorOW * valorW * valorPH * valorPW;
}

/**
 * @brief Compute the probability of st+1 to be escape
 * 
 * @param st current movement
 * @param h hp level
 * @param ne near enemy
 * @param hn hear noises
 * @param ow oponent weapon
 * @param w weapon
 * @param ph pick hp
 * @param pw pick weapon 
 * @return float The probability
 */
float ST_One_Escape(int st, int h,int ne, int hn, int ow, int w, int ph, int pw){
    float valorST, valorSTOne, valorH, valorNE, valorHN, valorOW, valorW, valorPH, valorPW;
    if (st == 1) { 
        valorST = 0.35;
        valorSTOne = 0.025;
    }
    if (st == 2) { 
        valorST = 0.1;
        valorSTOne = 0.025;
    }
    if (st == 3) { 
        valorST = 0.15;
        valorSTOne = 0.025;
    }
    if (st == 4) { 
        valorST = 0.15;
        valorSTOne = 0.0005;
    }
    if (st == 5) { 
        valorST = 0.05;
        valorSTOne = 0.1;
    }
    if (st == 6) { 
        valorST = 0.2;
        valorSTOne = 0.05;
    }
    if (h == 1) { valorH = 0.05; }
    if (h == 2) { valorH = 0.95; }
    if (ne == 1) { valorNE = 0.99; }
    if (ne == 2) { valorNE = 0.01; }
    if (hn == 1) { valorHN = 0.95; }
    if (hn == 2) { valorHN = 0.05; }
    if (ow == 1) { valorOW = 0.95; }
    if (ow == 2) { valorOW = 0.05; }
    if (w == 1) { valorW = 0.1; }
    if (w == 2) { valorW = 0.9; }
    if (ph == 1) { valorPH = 0.01; }
    if (ph == 2) { valorPH = 0.99; }
    if (pw == 1) { valorPW = 0.3; }
    if (pw == 2) { valorPW = 0.7; }
    return valorST * valorSTOne * valorH * valorNE * valorHN * valorOW * valorW * valorPH * valorPW;
}

/**
 * @brief Compute the probability of st+1 to be escape
 * 
 * @param st current movement
 * @param h hp level
 * @param ne near enemy
 * @param hn hear noises
 * @param ow oponent weapon
 * @param w weapon
 * @param ph pick hp
 * @param pw pick weapon 
 * @return float The probability
 */
float ST_One_Danger(int st, int h,int ne, int hn, int ow, int w, int ph, int pw){
    float valorST, valorSTOne, valorH, valorNE, valorHN, valorOW, valorW, valorPH, valorPW;
    if (st == 1) { 
        valorST = 0.35;
        valorSTOne = 0.15;
    }
    if (st == 2) { 
        valorST = 0.1;
        valorSTOne = 0.35;
    }
    if (st == 3) { 
        valorST = 0.15;
        valorSTOne = 0.35;
    }
    if (st == 4) { 
        valorST = 0.15;
        valorSTOne = 0.3;
    }
    if (st == 5) { 
        valorST = 0.05;
        valorSTOne = 0.25;
    }
    if (st == 6) { 
        valorST = 0.2;
        valorSTOne = 0.1;
    }
    if (h == 1) { valorH = 0.65; }
    if (h == 2) { valorH = 0.35; }
    if (ne == 1) { valorNE = 0.55; }
    if (ne == 2) { valorNE = 0.45; }
    if (hn == 1) { valorHN = 0.7; }
    if (hn == 2) { valorHN = 0.3; }
    if (ow == 1) { valorOW = 0.5; }
    if (ow == 2) { valorOW = 0.5; }
    if (w == 1) { valorW = 0.85; }
    if (w == 2) { valorW = 0.15; }
    if (ph == 1) { valorPH = 0.7; }
    if (ph == 2) { valorPH = 0.3; }
    if (pw == 1) { valorPW = 0.99; }
    if (pw == 2) { valorPW = 0.01; }
    return valorST * valorSTOne * valorH * valorNE * valorHN * valorOW * valorW * valorPH * valorPW;
}

/**
 * @brief 
 * 
 * @param stone_Atacar Probability of attack
 * @param stone_pickW Probability of Pick a weapon
 * @param stone_pickE Probability of Pick energy
 * @param stone_Explore Probability of Explore
 * @param stone_Escape Probability of Escape
 * @param Stone_Danger Probability of Detect Danger
 * @return float 
 */
float normalize(float stone_Atacar, float stone_pickW, float stone_pickE, float stone_Explore, float stone_Escape, float Stone_Danger){
    return stone_Atacar + stone_pickW + stone_pickE + stone_Explore + stone_Escape + Stone_Danger;
}

/**
 * @brief 
 * 
 * @param probAtack Probability of Attack normalized
 * @param probPickW Probability of Pick a weapon Normalized
 * @param probPickE Probability of Pick enery normalized
 * @param probExplore Probability of Explore normalized
 * @param probEscape Probability of Excape normalized
 * @param probDanger Probability of Detech danger normalized
 */
void printResult(float probAtack, float probPickW, float probPickE, float probExplore, float probEscape, float probDanger) {
    std::vector<float> probabilitys;
    probabilitys.push_back(probAtack);
    probabilitys.push_back(probPickW);
    probabilitys.push_back(probPickE);
    probabilitys.push_back(probExplore);
    probabilitys.push_back(probEscape);
    probabilitys.push_back(probDanger);
    int index = -1;
    float aux = -1000000.000;
    for (int i = 0; i < probabilitys.size(); i++) {
        if (aux < probabilitys[i]) {
            aux = probabilitys[i];
            index = i;
        }
    }
    std::cout << std::endl << "La accion con mayor probabilidad es ";
    if (index == 0) {
        std::cout << "atacar con probabilidad de " << probabilitys[index] << std::endl;
    } else if (index == 1) {
        std::cout << "recoger arma con probabilidad de " << probabilitys[index] << std::endl;
    } else if (index == 2) {
        std::cout << "recoger energia con probabilidad de " << probabilitys[index] << std::endl;
    } else if (index == 3) {
        std::cout << "explorar con probabilidad de " << probabilitys[index] << std::endl;
    } else if (index == 4) {
        std::cout << "huir con probabilidad de " << probabilitys[index] << std::endl;
    } else if (index == 5) {
        std::cout << "detectar peligro con probabilidad de " << probabilitys[index] << std::endl;
    }
}
