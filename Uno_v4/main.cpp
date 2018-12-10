/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on December 9, 2018, 5:02 AM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

int *drawOne(int *,int &);
int *drawTwo(int *,int &);
int *drawFour(int *,int &);

void disCard(char *,int *,int);
void disHnds(char *,int *,int);
void disUno();
string getCrdC(char *,int);
string getCrdN(int *,int);

int *iniDCV(int *,int);
char *iniDCC(char *);

int main(int argc, char** argv) {
    
    srand(static_cast<unsigned int>(time(0)));
    
    int tempR = 10;
    int tempC = 5;
    
    int dSize = 108; 
    int *deckCV = new int[dSize];
    char *deckCC = new char[dSize];
    
    deckCV=iniDCV(deckCV,dSize);
    deckCC=iniDCC(deckCC);
    
    return 0;
}

int *drawOne(int *hand,int &size){
    int *newHand = new int[size++];
    
    for(int n=0;n<size;n++){
        newHand[n]=hand[n];
    }newHand[size-1]=rand()%89;
    
    
    delete []hand;
    return newHand;
}
int *drawTwo(int *hand,int &size){
    int *newHand = new int[size+=2];
    
    for(int n=0;n<size;n++){
        newHand[n]=hand[n];
    }newHand[size-1]=rand()%89;
    newHand[size-2]=rand()%89;
    
    delete []hand;
    return newHand;
}
int *drawFour(int *hand,int &size){
    int *newHand = new int[size+=4];
    
    for(int n=0;n<size;n++){
        newHand[n]=hand[n];
    }newHand[size-1]=rand()%89;
    newHand[size-2]=rand()%89;
    newHand[size-3]=rand()%89;
    newHand[size-4]=rand()%89;
    
    delete []hand;
    return newHand;
}
void disCards(char *handC, int *handV,int size){
   
    /*for(int n=0;n<size;n++){
     * 
        cout<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<" ";
    }cout<<endl;
    for(int n=0;n<size;n++){
        cout<<q<< "        "<<q<<" ";
    }cout<<endl;
    for(int n=0;n<size;n++){
        cout<<q<<" "<<fixed<<setw(3)<<setfill(' ')<<handC[n]<<fixed<<setw(3)<<setfill(' ')<<handV[n]<<" "<<q<<" ";
    }cout<<endl;
    for(int n=0;n<size;n++){
        cout<<q<< "        "<<q<<" ";
    }cout<<endl;
    for(int n=0;n<size;n++){
        cout<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<" ";
    }cout<<endl;
     */
}
void disHnds(char *handC,int *handV,int size){
    disCards(handC,handV,size);
}
void disUno(){
    cout
            <<"__   __  __   __   _______  !!\n"
            <<"| | | |  | |  | |  | ___ |  !!\n"
            <<"| | | |  |  | | |  | | | |  !!\n"
            <<"| | | |  | | |  |  | |_| |     \n"
            <<"|___ _|  |_|  |_|  |_____|  !!\n"
            
    ;
}
int *iniDCV(int *deck, int dSize){
    //Declare variables
    fstream in;
    //Initialize variables
    in.open("numbers.dat");
    //Look through file to find the random color
    for(int line=0;line<=dSize;line++){
        in>>deck[line];
    }
    //Close the file
    in.close();
    //Return the random color
    return deck;
}
char *iniDCC(char *deck){
    char r='R', 
            y='Y',
            g='G',
            b='B',
            w='W';
    for(int n=0;n<25;n++){
        deck[n]=r;
    }for(int n=25;n<50;n++){
        deck[n]=y;
    }for(int n=50;n<75;n++){
        deck[n]=g;
    }for(int n=75;n<100;n++){
        deck[n]=b;
    }for(int n=100;n<108;n++){
        deck[n]=w;
    }
    return deck;
}
string getCrdC(char *deck, int size){
    if(deck[size]=='r'){
        string red = "Red";
        return red;
    }else if(deck[size]=='y'){
        string yellow = "Yel";
        return yellow;
    }else if(deck[size]=='g'){
        string green = "Grn";
        return green;
    }else if(deck[size]=='b'){
        string blue = "Blu";
        return blue;
    }else if(deck[size]=='w'){
        string wild = "Wld";
        return wild;
    }
}
string getCrdN(int *deck, int size){
    if(deck[size]==0){
        string zero = "  0";
        return zero;
    }else if(deck[size]==1){
        string one= "  1";
        return one;
    }else if(deck[size]==2){
        string two = "  2";
        return two;
    }else if(deck[size]==3){
        string three = "  3";
        return three;
    }else if(deck[size]==4){
        string four = "  4";
        return four;
    }else if(deck[size]==5){
        string  five= "  5";
        return five;
    }else if(deck[size]==6){
        string  six= "  6";
        return six;
    }else if(deck[size]==7){
        string  seven= "  7";
        return seven;
    }else if(deck[size]==8){
        string  eight= "  8";
        return eight;
    }else if(deck[size]==9){
        string  nine = "  9";
        return nine;
    }else if(deck[size]==10){
        string  skip = "Skp";
        return skip;
    }else if(deck[size]==11){
        string  reverse= "Rev";
        return reverse;
    }else if(deck[size]==12){
        string  add2= " +2";
        return add2;
    }else if(deck[size]==20){
        string  wild= "   ";
        return wild;
    }else if(deck[size]==21){
        string  add4= " +4";
        return add4;
    }
}
char ***fillUHnd(int size){
    char b= 254;    //top,bottem
    char q='|';     //side
    char s=' ';
    int lineSize = 11;
    int row = 5;
    int setSize=size/6;
    int *set = new int[setSize]; 
    char line[row][lineSize][set];
    for(int i=0;i<row;i++){
        if(i==0){
            for(int n=0;n<lineSize;n++){
                line[i][n][set]=b;
            }line[i][lineSize-1][set]=s;
        }else if(i==1){
            line[i][0][set]=q;
            line[i][lineSize-2][set]=q;
            line[i][lineSize-1][set]=s;
            for(int n=1;n<lineSize-2;n++){
                line[i][n][set]=s;
            }
        }else if(i==2){
            line[i][0][set]=q;
            line[i][1][set]=s;
            for(int n=2;n<8;n++){
                string *tempC = new int[3];
                string *tempN = new int[3];
                tempC =getCrdC(line,size);
                tempN =getCrdN(line,size);
                line[i][n][set]=tempC[n-2];
                line[i][n][set]=tempN[n-5];
                delete tempC;
                delete tempN;
            }
            line[i][lineSize-3][set]=s;
            line[i][lineSize-2][set]=q;
            line[i][lineSize-1][set]=s;
        }else if(i==3){
            line[i][0][set]=q;
            line[i][lineSize-2][set]=q;
            line[i][lineSize-1][set]=s;
            for(int n=1;n<lineSize-2;n++){
                line[i][n][set]=s;
            }
        }else if(i==4){
            for(int n=0;n<lineSize;n++){
                line[i][n][set]=b;
            }line[i][lineSize-1][set]=' ';
        }
    }
}