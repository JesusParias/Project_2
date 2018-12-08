/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on December 2, 2018, 1:31 AM
 */

#include <iostream>

using namespace std;

void disUno();
void disHnds(int,bool);
void disrow(int, bool);

int main(int argc, char** argv) {

    int count = 9;
    const bool PERM= true;
    bool temp=PERM;
    disHnds(count,temp);
    
    return 0;
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

void disrow(int count, bool t){
    if(t==true){
        for(int n=count;n>0;n--){
                    cout<<"OOOO  ";
        }
        cout<<endl;
    }
    else if(t==false){
        for(int n=count;n>0;n--){
                    cout<<"PPPP  ";
        }cout<<endl;
    }
}
void disHnds(int count,bool t){
    for(int i=2;i>0;i--){
        if(t==true){
            for(int n=4;n>0;n--){
                disrow(count,t);
            }t=false;cout<<endl;
        }else{
            for(int n=4;n>0;n--){
                disrow(count,t);
            }t=true;cout<<endl;
        }
    }
}