#include <iostream>
using namespace std;

char myMatrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char letterx = 'X';
int draw;
void  Pick(){
    system("cls");
    cout << "Tic Tac Toe with a Friend" << endl;
    for(int row  = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << myMatrix[row][col] << " ";      
        }
        cout << endl;
    }
}
void userInput(){
    int location;
    cout << "Numbers represent the location" << endl;
    cout << "Its " << letterx <<" turn. At what position(Number) would you like to place your answer? ";
    cin >> location;

    if(location==1){

        if(myMatrix[0][0] == '1'){
           myMatrix[0][0] = letterx;
        }
        else{
            cout << "This positions has is already being used! please select another that shows a number. ";
            userInput();
        }
    }
    else if(location==2){

        if(myMatrix[0][1] == '2'){
            myMatrix[0][1] = letterx;
        }
        else{
            cout << "This positions has is already being used! please select another that shows a number. ";
            userInput();
        }
    }
    else if(location==3){
        if(myMatrix[0][2] == '3'){
            myMatrix[0][2] = letterx;
        }
        else{
            cout << "This positions has is already being used! please select another that shows a number. ";
            userInput();
        }
    }
    else if(location==4){
        if(myMatrix[1][0] == '4'){
            myMatrix[1][0] = letterx;
        }
        else{
            cout << "This positions has is already being used! please select another that shows a number. ";
            userInput();
        }
    }
    else if(location==5){
        if(myMatrix[1][1] == '5'){
            myMatrix[1][1] = letterx;
        }
        else{
            cout << "This positions has is already being used! please select another that shows a number. ";
            userInput();
        }
    }
    else if(location==6){
        if(myMatrix[1][2] == '6'){
            myMatrix[1][2] = letterx;
        }
        else{
            cout << "This positions has is already being used! please select another that shows a number. ";
            userInput();
        }
    }
    else if(location==7){
        if(myMatrix[2][0] == '7'){
            myMatrix[2][0] = letterx;
        }
        else{
            cout << "This positions has is already being used! please select another that shows a number. ";
            userInput();
        }
    }
    else if(location==8){
        if(myMatrix[2][1] == '8'){
            myMatrix[2][1] = letterx;
        }
        else{
            cout << "This positions has is already being used! please select another that shows a number. ";
            userInput();
        }
    }
    else if(location==9){
        if(myMatrix[2][2] == '9'){
            myMatrix[2][2] = letterx;
        }
        else{
            cout << "This positions has is already being used! please select another that shows a number. ";
            userInput();
        }
    }
}
void switchPlayer(){
    if(letterx == 'X')
        letterx = 'O';
    else
        letterx = 'X';
}
char winner(){
    //PLAYER 1 "X"
    //row win check
    if(myMatrix[0][0] == 'X' and myMatrix[0][1] == 'X' and myMatrix[0][2] == 'X'){
        return 'X';    
    }
    if(myMatrix[1][0] == 'X' and myMatrix[1][1] == 'X' and myMatrix[1][2] == 'X'){
        return 'X';    
    }
    if(myMatrix[2][0] == 'X' and myMatrix[2][1] == 'X' and myMatrix[2][2] == 'X'){
        return 'X';    
    }

    //column win check
    if(myMatrix[0][0] == 'X' and myMatrix[1][0] == 'X' and myMatrix[2][0] == 'X'){
        return 'X';    
    }
    if(myMatrix[0][1] == 'X' and myMatrix[1][1] == 'X' and myMatrix[2][1] == 'X'){
        return 'X';    
    }
    if(myMatrix[0][2] == 'X' and myMatrix[1][2] == 'X' and myMatrix[2][2] == 'X'){
        return 'X';    
    }

    //diagonal check
    if(myMatrix[0][0] == 'X' and myMatrix[1][1] == 'X' and myMatrix[2][2] == 'X'){
        return 'X';    
    }
    if(myMatrix[0][2] == 'X' and myMatrix[1][1] == 'X' and myMatrix[2][0] == 'X'){
        return 'X';    
    }
    //PLAYER 2 "O"
    //row win check
    if(myMatrix[0][0] == 'O' and myMatrix[0][1] == 'O' and myMatrix[0][2] == 'O'){
        return 'O';    
    }
    if(myMatrix[1][0] == 'O' and myMatrix[1][1] == 'O' and myMatrix[1][2] == 'O'){
        return 'O';    
    }
    if(myMatrix[2][0] == 'O' and myMatrix[2][1] == 'O' and myMatrix[2][2] == 'O'){
        return 'O';    
    }

    //column win check
    if(myMatrix[0][0] == 'O' and myMatrix[1][0] == 'O' and myMatrix[2][0] == 'O'){
        return 'O';    
    }
    if(myMatrix[0][1] == 'O' and myMatrix[1][1] == 'O' and myMatrix[2][1] == 'O'){
        return 'O';    
    }
    if(myMatrix[0][2] == 'O' and myMatrix[1][2] == 'O' and myMatrix[2][2] == 'O'){
        return 'O';    
    }

    //diagonal check
    if(myMatrix[0][0] == 'O' and myMatrix[1][1] == 'O' and myMatrix[2][2] == 'O'){
        return 'O';    
    }
    if(myMatrix[0][2] == 'O' and myMatrix[1][1] == 'O' and myMatrix[2][0] == 'O'){
        return 'O';    
    }
    return '/';
}
int main(){
    draw = 0;
    Pick();
    while(1){
        draw++;
        userInput();
        Pick();
        if(winner() == 'X'){
            cout << "Player 1 Using X is the winner!" << endl;
            break;
        }
        else if(winner() == 'O'){
            cout << "Player 2 Using O is the winner!" << endl;
            break;
        }
        else if(winner()=='/' and draw == 9 ){
            cout << "This game is a Tie! " << endl;
            break;
        }
        switchPlayer();
    }
    return 0;
}