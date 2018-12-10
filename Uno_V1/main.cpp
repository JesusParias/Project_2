/* 
 * File:   main.cpp
 * Author: Personal
 *
 * Created on October 24, 2018, 7:33 AM
 */

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

string unoCard(int,int);

int main(int argc, char** argv) {
    
    srand(time(0));
    
    int color;
    int func;
    
    string handU[90];
    string handAI[90];
    string deck[108];
    
    short hand;
    cin >> hand;
    int i=1;
    
    for(int count = i;count <= hand; count ++){   
        color=(rand()%4)+1;
        func=(rand()%15)+1;
        handU[i]=unoCard(color,func);
        cout << handU[i] << endl;
        i++;
    }
    int countH;
    do{
    cout << "which card do you wanna see?";
                cin >> countH;
    cout << handU[countH]<<endl;
    }while(countH > 0);
    return 0;
}

string unoCard(int color, int func){
    
    string skip="Skip";
    string rev="Reverse";
    string wild="Wild";
    string wildX4="Wild Draw 4";
    string x2= "Draw 2";
    char zero='0';
    char one='1';
    char two='2';
    char three='3';
    char four='4';
    char five='5';
    char six='6';
    char seven='7';
    char eight='8';
    char nine='9';
    
    string blue="Blue";
    string green ="Green";
    string red= "Red";
    string yellow="Yellow";
    
    string p1;
    string p2;
    
    string card;
    
    switch(color){
        case 1: p1=blue;break;
        case 2: p1=green;break;
        case 3: p1=red;break;
        case 4: p1=yellow;break;
    }
    switch(func){
        case 0: p2=zero;break;
        case 1: p2=one;break;
        case 2: p2=two;break;
        case 3: p2=three;break;
        case 4: p2=four;break;
        case 5: p2=five;break;
        case 6: p2=six;break;
        case 7: p2=seven;break;
        case 8: p2=eight;break;
        case 9: p2=nine;break;
        case 10: p2=skip;break;
        case 11: p2=rev;break;
        case 12: p2=x2;break;
        case 13: p2=wild;break;
        case 14: p2=wildX4;break;
    }
    if(p2 == wild || p2 == wildX4){
        card = p2;
    }else if(!(p2 == wild || p2 == wildX4)){
        card = p1+" "+p2;
        }
    return card;
}