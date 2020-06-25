#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
    cout << "ARE YOU READY? (PRESS THE BUTTON)" << endl;
    if(cin.get() == '\n'){

    }
    cout << "rules" << "(PRESS THE BUTTON)" <<endl;
    if(cin.get() == '\n'){

    }
    cout << "1 == gu " << endl << "2 == tyoki" << endl << "3 == pa" << endl;
    if(cin.get() == '\n'){

    }
    cout << "ENTER A NUMBER FROM 1 TO 3!" << endl;
    int player,enemy,n,p = 0,e = 0; //p = player point || a = ai point
        for(n = 0; n < 3; n++){
            cin >> player;
            srand (time(NULL));
            enemy = (rand() % 3) + 1;       //( 1 > 2)( 2 > 3)( 3 > 1) 
            if(player == 1 && enemy == 2){           
                cout << "YOU GET 1 POINT" << endl;
                p++ ;
            }else if(player == 2 && enemy == 3){
                cout << "YOU GET 1 POINT" << endl;
                p++ ;
            }else if(player == 3 && enemy == 1){
                cout << "YOU GET 1 POINT" << endl;
                p++ ;
            }else if(player ==1 && enemy == 3){
                cout << "ENEMY GET 1 POINT" << endl;
                e++;
            }else if(player == 2 && enemy == 1){
                cout << "ENEMY GET 1 POINT" << endl;
                e++;
            }else if(player == 3 && enemy == 2){
                cout << "ENEMY GET 1 POINT" << endl;
                e++;
            }else if(player == enemy){
                cout << "DRAW!!" << endl;
            }
            cout << p << "," << e << endl << endl;
            
        }
    
    if(p > e){
        cout << "YOOOOOU WIN¡¡¡   ˚ˆ˚9" << endl << endl;
    }else if(p == e){
        cout << "DRAW THE GAME ˚∆˚; LETS TRY AGAIN" << endl << endl;
    }else{
        cout << "SORRY BUT YOU LOSE (π _ π 9 ...." << endl << endl;
    }
    return 0;

} 