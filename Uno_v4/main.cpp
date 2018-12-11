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
int ***fillUHnd(int *,int *,int);
void disUno();
void disUHnd(int ***,int);
int *getCrdC(int *,int);
int *getCrdN(int *,int);
int *iniDCV(int *,int);
int *iniDCC(int *);

int main(int argc, char** argv) {
    
    srand(static_cast<unsigned int>(time(0)));
     
    int dSize = 108; 
    int *deckCV = new int[dSize];
    int *deckCC = new int[dSize];
    
    deckCV=iniDCV(deckCV,dSize);
    deckCC=iniDCC(deckCC);
    int ***array = new int **[5];
    for(int a=0;a<5;a++){
        array[a]=new int *[11];
        for(int b=0;b<11;b++){
            array[a][b]=new int [dSize];
        }
    }
    array=fillUHnd(deckCC,deckCV,7);
    
    disUHnd(array,7);
    
    
    
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
int *iniDCC(int *deck){
    int r=static_cast<unsigned int>('R'), 
            y=static_cast<unsigned int>('Y'),
            g=static_cast<unsigned int>('G'),
            b=static_cast<unsigned int>('B'),
            w=static_cast<unsigned int>('W');
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
int *getCrdC(int *card, int local){
    if(card[local]=='R'){
        string red = "Red";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(red[n]);
        }
    }else if(card[local]=='Y'){
        string yellow = "Yel";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(yellow[n]);
        }
    }else if(card[local]=='G'){
        string green = "Grn";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(green[n]);
        }
    }else if(card[local]=='B'){
        string blue = "Blu";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(blue[n]);
        }
    }else if(card[local]=='W'){
        string wild = "Wld";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(wild[n]);
        }
    }return card;
}
int *getCrdV(int *card, int local){
    if(card[local]==0){
        string zero = "  0";
        int *value = new int[3];
        for(int n=0;n<3;n++){
            value[n]=static_cast<unsigned int>(zero[n]);
        }
        return value;
    }else if(card[local]==1){
        string one= "  1";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(one[n]);
        }
    }else if(card[local]==2){
        string two = "  2";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(two[n]);
        }
    }else if(card[local]==3){
        string three = "  3";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(three[n]);
        }
    }else if(card[local]==4){
        string four = "  4";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(four[n]);
        }
    }else if(card[local]==5){
        string  five= "  5";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(five[n]);
        }
    }else if(card[local]==6){
        string  six= "  6";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(six[n]);
        }
    }else if(card[local]==7){
        string  seven= "  7";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(seven[n]);
        }
    }else if(card[local]==8){
        string  eight= "  8";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(eight[n]);
        }
    }else if(card[local]==9){
        string  nine = "  9";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(nine[n]);
        }
    }else if(card[local]==10){
        string  skip = "Skp";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(skip[n]);
        }
    }else if(card[local]==11){
        string  reverse= "Rev";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(reverse[n]);
        }
    }else if(card[local]==12){
        string  add2= " +2";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(add2[n]);
        }
    }else if(card[local]==20){
        string  wild= "   ";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(wild[n]);
        }
    }else if(card[local]==21){
        string  add4= " +4";
        for(int n=0;n<3;n++){
            card[n]=static_cast<unsigned int>(add4[n]);
        }
    }return card;
}
int ***fillUHnd(int *handC, int *handV,int local){
    int b= 254;    //top,bottem
    int q=124;     //side
    int s=32;
    const int lineSize=11;
    const int row=5;
    int set=local/5;
    
    int ***line = new int **[row];
    for(int a=0;a<row;a++){
        line[a]=new int *[lineSize];
        for(int b=0;b<lineSize;b++){
            line[a][b]=new int [set];
        }
    } 
    for(int k=0;k<set;k++){
            for(int i=0;i<row;i++){
                if(i==0){
                    for(int n=0;n<lineSize;n++){
                        line[i][n][k]=b;
                    }line[i][lineSize-1][k]=s;
                }else if(i==1){
                    line[i][0][k]=q;
                    line[i][lineSize-2][k]=q;
                    line[i][lineSize-1][k]=s;
                    for(int n=1;n<lineSize-2;n++){
                        line[i][n][k]=s;
                    }
                }else if(i==2){
                    line[i][0][k]=q;
                    line[i][1][k]=s;
                    int *tempC = new int[3];
                    tempC =getCrdC(handC,3);
                    for(int p=0; p<3;p++){
                        for(int n=2;n<5;n++){
                            line[i][n][k]=tempC[n-2];
                        }
                    }
                    delete []tempC;
                    int *tempV = new int[3];
                    tempV =getCrdV(handV,3);
                    for(int p=0; p<3;p++){
                        for(int n=5;n<8;n++){
                            line[i][n][k]=tempV[n-5];
                        }
                    }
                    delete []tempV;
                    line[i][lineSize-3][k]=s;
                    line[i][lineSize-2][k]=q;
                    line[i][lineSize-1][k]=s;
                }else if(i==3){
                    line[i][0][k]=q;
                    line[i][lineSize-2][k]=q;
                    line[i][lineSize-1][k]=s;
                    for(int n=1;n<lineSize-2;n++){
                        line[i][n][k]=s;
                    }
                }else if(i==4){
                    for(int n=0;n<lineSize;n++){
                        line[i][n][k]=b;
                    }line[i][lineSize-1][k]=s;
                }
            }
        
    }
    return line;
}
void disUHnd(int ***line,int cards){
    for(int k=0;k<cards/5;k++){
        for(int i=0;i<5;i++){
            for(int c=0; c<cards;c++){
                for(int n=0;n<11;n++){
                    cout<<static_cast<char>(line[i][n][k]);
                }//cout<<endl;
            }cout<<endl;
        }cout<<endl;
    }
}