#include "../includes/functions.h"

/**
 * @brief Principal function in the program
 * 
 * @return int 0 if all went ok 
 */
int main(void){
    int st,h,ne,hn,ow,w,ph,pw;
    menu(st,h,ne,hn,ow,w,ph,pw);

    float probAtack = ST_One_Atacar(st,h,ne,hn,ow,w,ph,pw);
    float probPickW = ST_One_PickW(st,h,ne,hn,ow,w,ph,pw);
    float probPickE = ST_One_PickE(st,h,ne,hn,ow,w,ph,pw);
    float probExplore = ST_One_Explore(st,h,ne,hn,ow,w,ph,pw);
    float probEscape = ST_One_Escape(st,h,ne,hn,ow,w,ph,pw);
    float probDanger = ST_One_Danger(st,h,ne,hn,ow,w,ph,pw);

    float normalized = normalize(probAtack, probPickW, probPickE, probExplore, probEscape, probDanger);
    
    probAtack = probAtack / normalized;
    probPickW = probPickW / normalized;
    probPickE = probPickE / normalized;
    probExplore = probExplore / normalized;
    probEscape = probEscape / normalized;
    probDanger = probDanger / normalized;
    printResult(probAtack, probPickW, probPickE, probExplore, probEscape, probDanger);
}