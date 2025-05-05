#include <iostream>
using namespace std;

int main(){
    bool game[4][4]=
    {
        {0,1,1,0,},
        {0,0,1,0,},
        {0,0,0,0,},
        {0,1,0,0,}
    };
    int hit = 0;
    int totalAttempts = 0;
    while (hit < 4)
    {
        int row, column;
        cout<<"Enter your choice: ";
        cin>> row;
        cout<<"Enter your choice: ";
        cin>> column;
        if (game[row][column])
        {
            game[row][column] =0;
            hit++;

            cout<< "hit "<< (4-hit)<<" left.\n";

        }else{
            cout<<"you missed\n";
        }
        
        totalAttempts++;

    }
    


    cout<<"Victory\n";
    cout<<"you win in "<< totalAttempts << "turns.\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          cout << game[i][j] << "\n";
        }
    }
}