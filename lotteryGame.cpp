#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

//  Lottery game class
class lotteryGame {
public:
    int askUserNumbers(int UserNumbers[]);
    int getLotteryNumbers(int lotteryNumbers[]);
    void drawLottery(int lotteryNumbers[], int userNumbers[]);
    void lotteryListHeader();
    void lotteryResults(int matched);
    void playGameAgain(char *playAgain);

};

//  get user numbers function. named askUserNumbers that ask the user to enter 6 different numbers between 1-40
//  program used array variable for store user numbers
int lotteryGame::askUserNumbers(int *UserNumbers) {

    cout << "\tPlease enter your first number between 1-40: ";
    cin >> UserNumbers[0];
    if(UserNumbers[0] < 1 || 40 < UserNumbers[0]) {
        cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
        cin >> UserNumbers[0];
        if(UserNumbers[0] < 1 || 40 < UserNumbers[0]) {
            cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
            cin >> UserNumbers[0];
            if(UserNumbers[0] < 1 || 40 < UserNumbers[0]) {
                cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
                cin >> UserNumbers[0];
            }
        }
    }

    cout << "\n\tPlease enter your second number between 1-40: ";
    cin >> UserNumbers[1];
    if(UserNumbers[1] < 1 || 40 < UserNumbers[1]) {
        cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
        cin >> UserNumbers[1];
    }
    if (UserNumbers[1] == UserNumbers[0]) {
        cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
        cin >> UserNumbers[1];
        if(UserNumbers[1] < 1 || 40 < UserNumbers[1]) {
            cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
            cin >> UserNumbers[1];
        }
        if (UserNumbers[1] == UserNumbers[0]) {
            cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
            cin >> UserNumbers[1];
            if(UserNumbers[1] < 1 || 40 < UserNumbers[1]) {
                cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
                cin >> UserNumbers[1];
            }
        }
    }

    cout << "\n\tPlease enter your third number between 1-40: ";
    cin >> UserNumbers[2];
    if(UserNumbers[2] < 1 || 40 < UserNumbers[2]) {
        cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
        cin >> UserNumbers[2];
    }
    if (UserNumbers[2] == UserNumbers[0] || UserNumbers[2] == UserNumbers[1]) {
        cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
        cin >> UserNumbers[2];
        if(UserNumbers[2] < 1 || 40 < UserNumbers[2]) {
            cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
            cin >> UserNumbers[2];
        }
        if (UserNumbers[2] == UserNumbers[0] || UserNumbers[2] == UserNumbers[1]) {
            cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
            cin >> UserNumbers[2];
            if(UserNumbers[2] < 1 || 40 < UserNumbers[2]) {
                cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
                cin >> UserNumbers[2];
            }
        }
    }

    cout << "\n\tPlease enter your fourth number between 1-40: ";
    cin >> UserNumbers[3];
    if(UserNumbers[3] < 1 || 40 < UserNumbers[3]) {
        cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
        cin >> UserNumbers[3];
    }
    if (UserNumbers[3] == UserNumbers[0] || UserNumbers[3] == UserNumbers[1] || UserNumbers[3] == UserNumbers[2]) {
        cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
        cin >> UserNumbers[3];
        if(UserNumbers[3] < 1 || 40 < UserNumbers[3]) {
            cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
            cin >> UserNumbers[3];
        }
        if (UserNumbers[3] == UserNumbers[0] || UserNumbers[3] == UserNumbers[1] || UserNumbers[3] == UserNumbers[2]) {
            cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
            cin >> UserNumbers[3];
            if(UserNumbers[3] < 1 || 40 < UserNumbers[3]) {
                cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
                cin >> UserNumbers[3];
            }
        }
    }

    cout << "\n\tPlease enter your fifth number between 1-40: ";
    cin >> UserNumbers[4];
    if(UserNumbers[4] < 1 || 40 < UserNumbers[4]) {
        cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
        cin >> UserNumbers[4];
    }
    if (UserNumbers[4] == UserNumbers[0] || UserNumbers[4] == UserNumbers[1] || UserNumbers[4] == UserNumbers[2] || UserNumbers[4] == UserNumbers[3]) {
        cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
        cin >> UserNumbers[4];
        if(UserNumbers[4] < 1 || 40 < UserNumbers[4]) {
            cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
            cin >> UserNumbers[4];
        }
        if (UserNumbers[4] == UserNumbers[0] || UserNumbers[4] == UserNumbers[1] || UserNumbers[4] == UserNumbers[2] || UserNumbers[4] == UserNumbers[3]) {
            cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
            cin >> UserNumbers[4];
            if(UserNumbers[4] < 1 || 40 < UserNumbers[4]) {
                cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
                cin >> UserNumbers[4];
            }
        }
    }

    cout << "\n\tPlease enter your sixth number between 1-40: ";
    cin >> UserNumbers[5];
    if(UserNumbers[5] < 1 || 40 < UserNumbers[5]) {
        cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
        cin >> UserNumbers[5];
    }
    if (UserNumbers[5] == UserNumbers[0] || UserNumbers[5] == UserNumbers[1] || UserNumbers[5] == UserNumbers[2] || UserNumbers[5] == UserNumbers[3] || UserNumbers[5] == UserNumbers[4]) {
        cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
        cin >> UserNumbers[5];
        if(UserNumbers[5] < 1 || 40 < UserNumbers[5]) {
            cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
            cin >> UserNumbers[5];
        }
        if (UserNumbers[5] == UserNumbers[0] || UserNumbers[5] == UserNumbers[1] || UserNumbers[5] == UserNumbers[2] || UserNumbers[5] == UserNumbers[3] || UserNumbers[5] == UserNumbers[4]) {
            cout << "\n\tYou've already entered that number. Enter another number between 1-40: ";
            cin >> UserNumbers[5];
            if(UserNumbers[5] < 1 || 40 < UserNumbers[5]) {
                cout << "\n\tYour number was INVALID, Enter another number between 1-40: ";
                cin >> UserNumbers[5];
            }
        }
    }

    cout << endl << endl;
    /*cout << "\tYour numbers were: ";
    for(int i = 0; i < 6; i++) {
        cout << UserNumbers[i] << " ";
    }*/
    return 0;
}

//  Lottery game program randomly print 6 lottery numbers, generated by using cmath library.
int lotteryGame::getLotteryNumbers(int *lotteryNumbers) {
    time_t s;
    time(&s);
    srand(s);
   // srand (time_t(0));

    //cout << endl << endl;
    //cout << "\tThe numbers drawn were: ";

    for(int i = 0; i < 6; i++) {
        lotteryNumbers[i] = 1 + (rand() % 40);

        while(lotteryNumbers[i] == lotteryNumbers[i-1]) {
            lotteryNumbers[i] = 1 + (rand() % 40);
        }
        //cout << lotteryNumbers[i] << " ";
    }
    cout << endl;
    return 0;
}

//  Here is only the lottery game program's result list header section function.
void lotteryGame::lotteryListHeader() {
    cout << "\t*********************************************************************" << endl;
    cout << setw(30) << "The numbers drawn were";
    cout << setw(10)<< "|";
    cout << setw(25) << "Your numbers were";
    cout << endl;
    cout << "\t*********************************************************************" << endl;
}

//  Lottery game program check userNumber and random lotteryNumber.....
//  then print a list of user entered numbers and random drawn numbers
void lotteryGame::drawLottery(int *lotteryNumbers, int *UserNumbers) {
    int matched = 0;

    for(int i = 0; i < 6; i++) {
        cout << setw(20) << lotteryNumbers[i] << setw(20)<< "|" << setw(17) << UserNumbers[i] << endl;
        cout << "\t---------------------------------------------------------------------" << endl;

        if(UserNumbers[0] == lotteryNumbers[i]) {
            matched++;
        }
        if(UserNumbers[1] == lotteryNumbers[i]) {
            matched++;
        }
        if(UserNumbers[2] == lotteryNumbers[i]) {
            matched++;
        }
        if(UserNumbers[3] == lotteryNumbers[i]) {
            matched++;
        }
        if(UserNumbers[4] == lotteryNumbers[i]) {
            matched++;
        }
        if(UserNumbers[5] == lotteryNumbers[i]) {
            matched++;
        }
    }
    lotteryResults(matched); // lottery game result function...
}

//  Lottery Game program's result list here
void lotteryGame::lotteryResults(int matched) {
    cout << endl;
    cout << "\t*********************************************************************" << endl;
    if(matched == 6) {
        cout << "\t'CONGRATULATIONS! You matched all 6 numbers. You've won $100 million.'" << endl;
    }
    else if(matched == 5) {
        cout << "\t'You missed the jackpot by one. You've won $100,000.'" << endl;
    }
    else if(matched == 4) {
        cout << "\t'You matched 4 numbers. You've won $20,000.'" << endl;
    }
    else if(matched == 3) {
        cout << "\t'You matched 3 numbers. You've won $250.'" << endl;
    }
    else if(matched == 2) {
        cout << "\t'You matched 2 numbers. You've won $15.'" << endl;
    }
    else if(matched == 1) {
        cout << "\t'You only matched 1 number. You get your money back.'" << endl;
    }
    else {
        cout << "\t'You matched 0 numbers. ---Better luck next time---'" << endl;
    }
    cout << "\t*********************************************************************" << endl;
}

//  Lottery game main function here....
int main() {
    Node* head;
    Node* tail;
    Node* nod;

    //  A circular doubly linked list Lottery is created with 40 nodes
    //  and a separate value is assigned to each node from 1 to 40
    //  by using for loop
    nod = new Node; nod->data = 1; nod->prev = NULL; head = nod; tail = nod;
    for(int i = 2; i <= 40; i++) {
        nod = new Node; nod->data = i; nod->prev = tail; tail->next = nod; tail = nod;
    }
    tail->next = NULL;

    lotteryGame LG;
    //  Variable here
    int lotteryNumbers[6];
    int UserNumbers[6];
    char playAgain;

    //  Here is lottery game welcome message
    cout << "\n\tHello, and welcome to the L-O-T-T-E-R-Y Game. \n\tYou will be asked to enter 6 different numbers between the range of 1-40. \n\tRemember, each number can only be picked once. GOOD LUCK." << endl << endl;

    //  Main program used do while loop
    do{
        LG.askUserNumbers(UserNumbers);
        LG.getLotteryNumbers(lotteryNumbers);
        LG.lotteryListHeader();
        LG.drawLottery(lotteryNumbers, UserNumbers);
        LG.playGameAgain(&playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << endl << endl;
    return 0;
}

//  Play the lottery game again function..
//  If user wants to play the lottery game again then user should enter 'y' or 'Y'
//  If user enter 'n' or 'N' the program will be closed.....
void lotteryGame::playGameAgain(char *playAgain) {
    cout << "\n\tWould you like to play the game again? (Yes/No): ";

    do{
        cin >> *playAgain ;
    } while (*playAgain !='y' &&
             *playAgain !='Y' &&
             *playAgain !='n' &&
             *playAgain !='N');
}
