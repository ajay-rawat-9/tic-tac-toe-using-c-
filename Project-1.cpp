#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string.h>
#include<windows.h>
#define timer 3
using namespace std;

class tictactoe
{
public:
    char A[17];
    int Number_of_Players;
    string User1;
    string User2;
    int winner;
    char Position;
    void Welcome();
    void Enter_Choice(string);
    void Change_Theme();
    void Game_Layout();
    int Authenticate_Position(int);
    int Position_Index(char);
    void Asking_number_of_Players();
    void Ask_User_Name();
    void Ask_Users_Name();
    void How_to_play();
    void End();
    int Winner();
    void Result(string);
    void Tie();
};
void tictactoe::End()
{
    system("CLS");
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|        ---------------------------------------          |\n";
    cout<<"\t\t\t|        Goodbye Buddy! Glad you tried my game.;)         |\n";
    cout<<"\t\t\t|        ----------------------------------------         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    system("PAUSE");
    system("CLS");
}
void tictactoe::Welcome()
{
    system("Color 71");
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|           ----------------------------------            |\n";
    cout<<"\t\t\t|           Hey buddy! Glad to see you here.;)            |\n";
    cout<<"\t\t\t|           ----------------------------------            |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
}
void tictactoe::Game_Layout()
{
    cout<<"\n\n\n";
    cout<<"\t\t\t__________________________________________________________\n";
    cout<<"\t\t\t|                                                        |\n";
    cout<<"\t\t\t|            ---------------------------------           |\n";
    cout<<"\t\t\t|                                                        |\n";
    cout<<"\t\t\t|                  |         |        |                  |\n";
    cout<<"\t\t\t|               ";
    cout<<A[0]<<"  |    ";
    cout<<A[1]<<"    |    ";
    cout<<A[2]<<"   |   ";
    cout<<A[3]<<"              |\n";
    cout<<"\t\t\t|            _________________________________           |\n";
    cout<<"\t\t\t|                  |         |        |                  |\n";
    cout<<"\t\t\t|               ";
    cout<<A[4]<<"  |    ";
    cout<<A[5]<<"    |    ";
    cout<<A[6]<<"   |   ";
    cout<<A[7]<<"              |\n";
    cout<<"\t\t\t|            _________________________________           |\n";
    cout<<"\t\t\t|                  |         |        |                  |\n";
    cout<<"\t\t\t|               ";
    cout<<A[8]<<"  |    ";
    cout<<A[9]<<"    |   ";
    cout<<A[10]<<"    |   ";
    cout<<A[11]<<"              |\n";
    cout<<"\t\t\t|            _________________________________           |\n";
    cout<<"\t\t\t|                  |         |        |                  |\n";
    cout<<"\t\t\t|               ";
    cout<<A[12]<<"  |    ";
    cout<<A[13]<<"    |     ";
    cout<<A[14]<<"  |   ";
    cout<<A[15]<<"              |\n";
    cout<<"\t\t\t|                  |         |        |                  |\n";
    cout<<"\t\t\t|                                                        |\n";
    cout<<"\t\t\t|            ---------------------------------           |\n";
    cout<<"\t\t\t|                                                        |\n";
    cout<<"\t\t\t|________________________________________________________|\n";
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
}
void tictactoe::Change_Theme()
{
    int b,t;
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|    Which color you want to be set as your Background?   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|      0 = Black   1 = Blue    2 = Green     3 = Aqua     |\n";
    cout<<"\t\t\t|      4 = Red     5 = Purple  6 = Yellow    7 = White    |\n";
    cout<<"\t\t\t|                  8 = Gray    9 = Light Blue             |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\t\t\t              Enter your choice:";
    cin>>b;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    system("CLS");
    switch(b)
    {
    case 0:
        system("Color 0F");
        break;
    case 1:
        system("Color 1F");
        break;
    case 2:
        system("Color 2F");
        break;
    case 3:
        system("Color 3F");
        break;
    case 4:
        system("Color 4F");
        break;
    case 5:
        system("Color 5F");
        break;
    case 6:
        system("Color 6F");
        break;
    case 7:
        system("Color 7F");
        break;
    case 8:
        system("Color 8F");
        break;
    case 9:
        system("Color 9F");
        break;
    }
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|    Which color you want to be set as your Text Color?   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|      0 = Black   1 = Blue    2 = Green     3 = Aqua     |\n";
    cout<<"\t\t\t|      4 = Red     5 = Purple  6 = Yellow    7 = White    |\n";
    cout<<"\t\t\t|                  8 = Gray    9 = Light Blue             |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\t\t\t              Enter your choice:";
    cin>>t;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    system("CLS");
    if(b==0)
        switch(t)
        {
        case 0:
            system("Color 00");
            break;
        case 1:
            system("Color 01");
            break;
        case 2:
            system("Color 02");
            break;
        case 3:
            system("Color 03");
            break;
        case 4:
            system("Color 04");
            break;
        case 5:
            system("Color 05");
            break;
        case 6:
            system("Color 06");
            break;
        case 7:
            system("Color 07");
            break;
        case 8:
            system("Color 08");
            break;
        case 9:
            system("Color 09");
            break;
        }
    else if(b==1)
        switch(t)
        {
        case 0:
            system("Color 10");
            break;
        case 1:
            system("Color 11");
            break;
        case 2:
            system("Color 12");
            break;
        case 3:
            system("Color 13");
            break;
        case 4:
            system("Color 14");
            break;
        case 5:
            system("Color 15");
            break;
        case 6:
            system("Color 16");
            break;
        case 7:
            system("Color 17");
            break;
        case 8:
            system("Color 18");
            break;
        case 9:
            system("Color 19");
            break;
        }
    else if(b==2)
        switch(t)
        {
        case 0:
            system("Color 20");
            break;
        case 1:
            system("Color 21");
            break;
        case 2:
            system("Color 22");
            break;
        case 3:
            system("Color 23");
            break;
        case 4:
            system("Color 24");
            break;
        case 5:
            system("Color 25");
            break;
        case 6:
            system("Color 26");
            break;
        case 7:
            system("Color 27");
            break;
        case 8:
            system("Color 28");
            break;
        case 9:
            system("Color 29");
            break;
        }
    else if(b==3)
        switch(t)
        {
        case 0:
            system("Color 30");
            break;
        case 1:
            system("Color 31");
            break;
        case 2:
            system("Color 32");
            break;
        case 3:
            system("Color 33");
            break;
        case 4:
            system("Color 34");
            break;
        case 5:
            system("Color 35");
            break;
        case 6:
            system("Color 36");
            break;
        case 7:
            system("Color 37");
            break;
        case 8:
            system("Color 38");
            break;
        case 9:
            system("Color 39");
            break;
        }
    else if(b==4)
        switch(t)
        {
        case 0:
            system("Color 40");
            break;
        case 1:
            system("Color 41");
            break;
        case 2:
            system("Color 42");
            break;
        case 3:
            system("Color 43");
            break;
        case 4:
            system("Color 44");
            break;
        case 5:
            system("Color 45");
            break;
        case 6:
            system("Color 46");
            break;
        case 7:
            system("Color 47");
            break;
        case 8:
            system("Color 48");
            break;
        case 9:
            system("Color 49");
            break;
        }
    else if(b==5)
        switch(t)
        {
        case 0:
            system("Color 50");
            break;
        case 1:
            system("Color 51");
            break;
        case 2:
            system("Color 52");
            break;
        case 3:
            system("Color 53");
            break;
        case 4:
            system("Color 54");
            break;
        case 5:
            system("Color 55");
            break;
        case 6:
            system("Color 56");
            break;
        case 7:
            system("Color 57");
            break;
        case 8:
            system("Color 58");
            break;
        case 9:
            system("Color 59");
            break;
        }
    else if(b==6)
        switch(t)
        {
        case 0:
            system("Color 60");
            break;
        case 1:
            system("Color 61");
            break;
        case 2:
            system("Color 62");
            break;
        case 3:
            system("Color 63");
            break;
        case 4:
            system("Color 64");
            break;
        case 5:
            system("Color 65");
            break;
        case 6:
            system("Color 66");
            break;
        case 7:
            system("Color 67");
            break;
        case 8:
            system("Color 68");
            break;
        case 9:
            system("Color 69");
            break;
        }
    else if(b==7)
        switch(t)
        {
        case 0:
            system("Color 70");
            break;
        case 1:
            system("Color 71");
            break;
        case 2:
            system("Color 72");
            break;
        case 3:
            system("Color 73");
            break;
        case 4:
            system("Color 74");
            break;
        case 5:
            system("Color 75");
            break;
        case 6:
            system("Color 76");
            break;
        case 7:
            system("Color 77");
            break;
        case 8:
            system("Color 78");
            break;
        case 9:
            system("Color 79");
            break;
        }
    else if(b==8)
        switch(t)
        {
        case 0:
            system("Color 80");
            break;
        case 1:
            system("Color 81");
            break;
        case 2:
            system("Color 82");
            break;
        case 3:
            system("Color 83");
            break;
        case 4:
            system("Color 84");
            break;
        case 5:
            system("Color 85");
            break;
        case 6:
            system("Color 86");
            break;
        case 7:
            system("Color 87");
            break;
        case 8:
            system("Color 88");
            break;
        case 9:
            system("Color 89");
            break;
        }
    else if(b==9)
        switch(t)
        {
        case 0:
            system("Color 90");
            break;
        case 1:
            system("Color 91");
            break;
        case 2:
            system("Color 92");
            break;
        case 3:
            system("Color 93");
            break;
        case 4:
            system("Color 94");
            break;
        case 5:
            system("Color 95");
            break;
        case 6:
            system("Color 96");
            break;
        case 7:
            system("Color 97");
            break;
        case 8:
            system("Color 98");
            break;
        case 9:
            system("Color 99");
            break;
        }

}
void tictactoe::Asking_number_of_Players()
{
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|              Choose the number of players               |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|             1 = Single PLayer( vs Computer )            |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                    2 = Two Players                      |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\t\t\t              Enter your choice:";
    cin>>Number_of_Players;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    system("CLS");

}
void tictactoe::Ask_User_Name()
{
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|             Enter the name of the First Player          |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                  Your Symbol will be 'X'                |\n";
    cout<<"\t\t\t|                             &                           |\n";
    cout<<"\t\t\t|                  You'll be playing first                |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\t\t\t              Enter your Name: ";
    cin>>User1;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    system("CLS");
}
void tictactoe::Ask_Users_Name()
{
    Ask_User_Name();
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|            Enter the name of the Second Player          |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                  Your Symbol will be 'O'                |\n";
    cout<<"\t\t\t|                             &                           |\n";
    cout<<"\t\t\t|                  You'll be playing second               |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\t\t\t              Enter your Name: ";
    cin>>User2;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
    system("CLS");
}
void tictactoe::How_to_play()
{
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|              Rules are pretty simple though             |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|            1. Enter the position number to              |\n";
    cout<<"\t\t\t|                  place your Symbol there                |\n";
    cout<<"\t\t\t|           2. You can't enter the position where         |\n";
    cout<<"\t\t\t|            there is already a Symbol present            |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
}
int tictactoe::Position_Index(char P)
{
    for(int i=0; i<16; i++)
        if(A[i]==P)
        {
            return i;
            break;
        }
    return 0;
}
int tictactoe::Authenticate_Position(int P)
{
    int result;
    if(A[P]=='X'||A[P]=='O')
    {
        result=0;
    }
    else
        result=1;
    return result;
}
void tictactoe::Enter_Choice(string Name)
{
    int P;
repeat:
    Game_Layout();
    if(Name=="Computer")
    {
        P=rand()%16;
    }
    else
    {
        cout<<"Enter Your Position, "<<Name<<": ";
        cin>>Position;
        P=Position;
        if(!(P>64&&P<73))
            if(!(P>96&&P<105))
            {
                system("CLS");
                goto repeat;
            }
        P=Position_Index(Position);
    }

    if(!Authenticate_Position(P))
    {
        system("CLS");
        goto repeat;
    }

    if(Name==User1)
        A[P]='X';
    else
        A[P]='O';
    system("CLS");
}
int tictactoe::Winner()
{
    char w='X';
    int r=0;
    if((A[0]==w&&A[1]==w&&A[2]==w&&A[3]==w)||
            (A[4]==w&&A[5]==w&&A[6]==w&&A[7]==w)||
            (A[8]==w&&A[9]==w&&A[10]==w&&A[11]==w)||
            (A[12]==w&&A[13]==w&&A[14]==w&&A[15]==w)||
            (A[0]==w&&A[4]==w&&A[8]==w&&A[12]==w)||
            (A[1]==w&&A[5]==w&&A[9]==w&&A[13]==w)||
            (A[2]==w&&A[6]==w&&A[10]==w&&A[14]==w)||
            (A[3]==w&&A[7]==w&&A[11]==w&&A[15]==w)||
            (A[0]==w&&A[5]==w&&A[10]==w&&A[15]==w)||
            (A[3]==w&&A[6]==w&&A[9]==w&&A[12]==w))
    {
        r=1;
    }
    else
    {
        w='O';
        if((A[0]==w&&A[1]==w&&A[2]==w&&A[3]==w)||
                (A[4]==w&&A[5]==w&&A[6]==w&&A[7]==w)||
                (A[8]==w&&A[9]==w&&A[10]==w&&A[11]==w)||
                (A[12]==w&&A[13]==w&&A[14]==w&&A[15]==w)||
                (A[0]==w&&A[4]==w&&A[8]==w&&A[12]==w)||
                (A[1]==w&&A[5]==w&&A[9]==w&&A[13]==w)||
                (A[2]==w&&A[6]==w&&A[10]==w&&A[14]==w)||
                (A[3]==w&&A[7]==w&&A[11]==w&&A[15]==w)||
                (A[0]==w&&A[5]==w&&A[10]==w&&A[15]==w)||
                (A[3]==w&&A[6]==w&&A[9]==w&&A[12]==w))
        {
            r=2;
        }
    }
    return r;
}
void tictactoe::Result(string winner)
{
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t                         GAME END                         \n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\t\t\t                                  ->"<<winner<<"\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\t\t\t                                  ->WON\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
}
void tictactoe::Tie()
{
    cout<<"\n\n\n";
    cout<<"\t\t\t___________________________________________________________\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t                          GAME END                         \n";
    cout<<"\t\t\t                         NO ONE WON\n";
    cout<<"\t\t\t                         GAME TIED\n";
    cout<<"\t\t\t|    --------------------------------------------------   |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|                                                         |\n";
    cout<<"\t\t\t|_________________________________________________________|\n";
    cout<<"\t\t\t                                                          \n";
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
}
int main()
{
    tictactoe game;
    int counter=1;
    int A=97;
    int facts=0;
    for(int i=0; i<16; i++)
    {
        if(A==105)
            A=65;
        game.A[i]=A;
        A++;
    }
    for(int i=0; i<timer; i++)
    {
        game.Welcome();
        cout<<"The Game will start in "<<timer-i<<" seconds.";
        Sleep(1000);
        system("CLS");
    }
    game.Change_Theme();
    for(int i=0; i<timer; i++)
    {
        game.How_to_play();
        cout<<"The Game will start in "<<timer-i<<" seconds.";
        Sleep(1000);
        system("CLS");
    }
    game.Asking_number_of_Players();
    if(game.Number_of_Players==1)
    {
        game.Ask_User_Name();
        game.User2="Computer";
    }
    else
        game.Ask_Users_Name();

    string Current_Player=game.User1;
    while(counter!=16)
    {
        game.Enter_Choice(Current_Player);
        counter++;
        if(Current_Player==game.User1)
            Current_Player=game.User2;
        else if(Current_Player==game.User2)
            Current_Player=game.User1;
        game.winner=game.Winner();
        if(game.winner==1)
        {
            for(int i=0; i<timer; i++)
            {
                game.Result(game.User1);
                cout<<"The Game will Close in "<<timer-i<<" seconds.";
                Sleep(1000);
                system("CLS");
            }
            break;
        }
        else
        {
            if(game.winner==2)
            {
                for(int i=0; i<timer; i++)
                {
                    game.Result(game.User2);
                    cout<<"The Game will Close in "<<timer-i<<" seconds.";
                    Sleep(1000);
                    system("CLS");
                }
                break;
            }
            else if(counter==16)
            {
                for(int i=0; i<timer; i++)
                {
                    game.Tie();
                    cout<<"The Game will Close in "<<timer-i<<" seconds.";
                    Sleep(1000);
                    system("CLS");
                }
                break;
            }
        }
        if(game.User2=="Computer"&&(counter%2!=0))
        {
            game.Game_Layout();
            switch(facts)
            {
            case 0:
                cout<<"\nThe Ancient Romans played Tic-Tac-Toe, but they called it Terni Lapilli\n";
                break;
            case 1:
                cout<<"\nCombinatorics show that there are 362,800 distinct ways to place Xs and Os on the grid,\n but only 255,168 of them are possible winning combinations\n";
                break;
            case 2:
                cout<<"\nAfter eliminating symmetrical combinations of Tic-Tac-Toe,\n there are merely 138 distinct winning arrangements\n";
                break;
            case 3:
                cout<<"\nRomans played Tic-Tac-Toe with moveable pieces rather than etched markings\n";
                break;
            case 4:
                cout<<"\nThe name tic-tac-toe did not arrive until around the 1800s\n";
                break;
            case 5:
                cout<<"The name came from a popular game\n in which players blindly hurled pencils at a numbered slate\n";
                break;
            }
            facts++;
            if(facts==6)
                facts=0;
            Sleep(2500);
        }

    }//while loop ends here..just for reminder so that you don't delete this one
    game.End();

    return 0;
}
