/* 
program was made
by khetsuriani otari

code explanation is on english because dev c++ doesnt read georgian. 
(im writing this on onlinegdb but teacher is using dev c++)
also i got github where i published my game and used english for people to understand my code
hope you enjoy :)
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    //for playing limit while somebody wins
    int won=0;
    //searching with strings is more easier so i used it
    string bot_num,player1_num,player2_num;
    int choise;

    while (choise != 99){
    //start choise
    cout<<"Welcome to game Numbers!"<<endl;
    cout<<"Choise 1 option"<<endl;
    cout<<"(1) play with second player"<<endl;
    cout<<"(2) play with bot"<<endl;
    //menu for rules and note
    cout<<"(3) Menu"<<endl;
    //for quiting game
    cout<<"(99) Quit"<<endl; 
    cout<<"Your choise:";
    cin>>choise;
    //program is working while person will not write quit
    //system works only for windows os , so program on linux based IDES will not work properly
    system("CLS");
    if (choise == 3){
        
        cout<<"NOTE : GAME WAS MADE FOR WINDOWS OS ONLY"<<endl;
        cout<<"Rules: Two players, or a player and a computer will think of a four-digit number."<<endl<<" Then they take turns trying to guess the opponent's number,"<< endl<<"  and the opponent will tell you how many digits in this named number"<<endl<<"   matched his digits and how many are sitting in his place.";
    }else if (choise == 1){
        string player1,player2;
        string player1gm,player2gm;
        //we need nicknames for having better perfomance
        cout<<"First Player please eneter your nickname:";
        cin>>player1;
        cout<<"Second Player please enter your nickname:";
        cin>>player2;
        cout<<"Okay "<<player1<<" and "<<player2<<" lets start game!";
        system("CLS");
        //system command will delete text on screen so you need to remember it 
        cout<<"PLEASE REMEMBER YOUR NUMBER"<<endl;
        cout<<player1<<" Whats your number? :";
        cin>>player1_num;
        system("CLS");
        cout<<"PLEASE REMEMBER YOUR NUMBER"<<endl;
        cout<<player2<<" Whats your number? :";
        cin>>player2_num;
        system("CLS");
        while (won == 0){
            cout<<player1<<" enter number:";
            cin>>player1gm;
            if (player1gm == player2_num) {
                cout<<"Wow "<<player1<<" You won!";
                won=1;
                choise = 0;
                system("CLS");
            }else {
                int fst=0,sec=0;
                for (int i = 1; i<=4; i++)
                for (int j = 1; j<=4; j++){
                if (player2_num[i-1]==player1gm[j-1]) fst++;
                    if (player2_num[i-1]==player1gm[j-1] && i==j) sec++;
    }
    cout<<fst<<":"<<sec;
}
            cout<<player2<<" enter number:";
            cin>>player2gm;
            if (player2gm == player1_num) {
                cout<<"Wow "<<player2<<" You won!"<<endl;
                won=1;
                choise = 0;
                system("CLS");
            }else  {  
            int fst=0,sec=0;
                for (int i = 1; i<=4; i++)
                for (int j = 1; j<=4; j++){
                if (player2_num[i-1]==player1gm[j-1]) fst++;
                if (player2_num[i-1]==player1gm[j-1] && i==j) sec++;
    }
    cout<<fst<<":"<<sec;
}
  }
}else if (choise == 2){
        string player,num;
        int won=0;
        cout<<"enter your name please :";
        cin>>player;
        cout<<"Okay "<<player<<" Lets Start the game!"<<endl;
        //bot will generate random number from 1000 to 10000
        int k = rand() % 10000 + 1000;
        string s = to_string(k);
        while (won == 0){
            cin>>num;
                
            int first=0;
            int second=0;
            if (num == s){
                cout<<"Incredible! you won!"<<endl;
                won = 1;
                choise = 0;
                system("cls");
            }
            else {
            for (int i = 1; i<=4; i++)
            for (int j = 1; j<=4; j++){
            if (num[i-1]==s[j-1]) first++;
            if (num[i-1]==s[j-1] && i==j) second++;
            
     }
     cout<<first<<":"<<second<<endl;
    }
   }
  }
 }
}
