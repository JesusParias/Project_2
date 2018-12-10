/* 
 * File:   main.cpp
 * Author: Personal
 *
 * Created on October 24, 2018, 1:43 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string part2suit(int);

int main(int argc, char** argv) {

    srand(time(0));
    
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
    
    string cardsU[108];
    int cardH;

    string deck[108];
    {
    for(int count=1; count<=4;count++){
        deck[count]=wild;
        cout << count<< deck[count]<<endl;
    }
    for(int count=5; count<=8; count++){
        deck[count]=wildX4;
        cout << count << deck[count]<<endl;
    }
    for(int count=9; count<=34; count++){
        p1=blue;
        p2=part2suit(count-8);
        deck[count]=p1+" "+p2;
        cout<<count<<deck[count]<<endl;
        count+8;
    }
    for(int count=35; count<=60; count++){
        p1=green;
        p2=part2suit(count-34);
        deck[count]=p1+" "+p2;
        cout<<count<<deck[count]<<endl;
        count+34;
    }
    for(int count=61; count<=86; count++){
        p1=red;
        p2=part2suit(count-60);
        deck[count]=p1+" "+p2;
        cout<<count<<deck[count]<<endl;
        count+60;
    }
    for(int count=87; count<=108; count++){
        p1=yellow;
        p2=part2suit(count-86);
        deck[count]=p1+" "+p2;
        cout<<count<<deck[count]<<endl;
        count+86;
    }    
    int countH;
    do{
    cout << "which card do you wanna see?";
                cin >> countH;
    cout << deck[countH]<<endl;
    }while(countH > 0);
    }//initializes the cards of the uno deck
    
    cardH=5;
    for(int count=1; count <= cardH; count++){
        cardH=(rand()%108)+1;
        cardsU[count]=deck[cardH];
        cout << count<<cardsU[count]<<endl;
        if(cardH){
            
        }
    }
    
    
    
    return 0;
}

string part2suit(int count){

    string p2;
    
    string skip="Skip";
    string rev="Reverse";
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

    switch(count){
            case 1: p2= zero;break;
            case 2: p2= one;break;
            case 3: p2= one;break;
            case 4: p2= two;break;
            case 5: p2= two;break;
            case 6: p2= three;break;
            case 7: p2= three;break;
            case 8: p2= four;break;
            case 9: p2= four;break;
            case 10: p2= five;break;
            case 11: p2= five;break;
            case 12: p2= six;break;
            case 13: p2= six;break;
            case 14: p2= six;break;
            case 15: p2= seven;break;
            case 16: p2= seven;break;
            case 17: p2= eight;break;
            case 18: p2= eight;break;
            case 19: p2= nine;break;
            case 20: p2= nine;break;
            case 21: p2= skip;break;
            case 22: p2= skip;break;
            case 23: p2= rev;break;
            case 24: p2= rev;break;
            case 25: p2= x2;break;
            case 26: p2= x2;break;
        }
    return p2;
}