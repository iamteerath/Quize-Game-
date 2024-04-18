#include<iostream>
using namespace std;

int main(){
    int FinalResult=0;
    char PlayAgain;
    int PlayQuiz(void);     //Function Prototype, function calling
    play:
    FinalResult = PlayQuiz();
    cout<<"Your Total Score is "<<FinalResult<<endl;

    if(FinalResult>=6){
        cout<<"You are Pass"<<endl;
        cout<<"Do you want to play Quiz game again y or n !?"<<endl;
        cin>>PlayAgain;
        if(PlayAgain=='y'|| PlayAgain=='Y'){
        goto play;      // To Jump 
        }
        else{
            cout<<"Thank you to play Quiz !"<<endl;
        }
    }
    else{
        cout<<"You are Fail"<<endl;
        cout<<"Do you want to play Quiz game again y or n !?"<<endl;
        cin>>PlayAgain;
        if(PlayAgain=='y'|| PlayAgain=='Y'){
            PlayQuiz();
        }       //Nested if else condition
        else{
            cout<<"Thank you to play Quiz !"<<endl;
        }
    }
}

int PlayQuiz(){
    char c;
    char option;
    int score=0;
    PlayInsideFunction:
    cout<<"-----------WELCOME TO QUIZE GAME-----------"<<endl;
    cout<<"----------Please follow the instruction -------"<<endl;
    cout<<"Step 1: Quize contain total 10 Questions"<<endl;
    cout<<"step 2: YOu will be given 1 marks for each right ans"<<endl;
    cout<<"Step 3: There will be no negetive marking upto 5 Qs"<<endl;
    cout<<"Step 3: There will be negetive marking of -1 if asnwer is wrong from Q6 to Q10"<<endl;
    cout<<"Step 4: Please press s to start the quize"<<endl;
    cout<<"Step 5: Please select option a , b , c , d"<<endl;
    cout<<"Step 6: If You score >=6 , You will pass the Quiz "<<endl;

    cin>>c;
    if(c=='s'|| c=='S'){
        cout<<"Q1. What is the capital of India "<<endl;
        cout<<"(a) Delhi (b) Mumbai (c) Kolkata (d) Chennai"<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }

        cout<<"Q2. Who is the current Prime Minister of India "<<endl;
        cout<<"(a) Narendra Modi (b) Lal Bahadur shastri (c) Neta ji (d) Bhagat Singh"<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }

        cout<<"Q3. Which is the national bird of India "<<endl;
        cout<<"(a) sparrow (b) Peacock (c) Parrot (d) Pigeon"<<endl;
        cin>>option;
        if(option=='b'|| option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }

        cout<<"Q4. What is the national animal of India "<<endl;
        cout<<"(a) Tiger (b) Lion (c) Leopard (d) Girraf"<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }

        cout<<"Q5. What is the National Flower of India "<<endl;
        cout<<"(a) Lotus (b) Tulip (c) Rose (d) Lily"<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }

        cout<<"LEVEL UP"<<endl;

        cout<<"Q6. Who won the first noble prize from asia "<<endl;
        cout<<"(a) Bankim Chandra (b) Abanindranath Tagore (c) Rabindranath Tagore  (d) Tulsi das "<<endl;
        cin>>option;
        if(option=='c'|| option=='C'){
            score=score+1;
        }
        else{
            score=score-1;
        }

        cout<<"Q7. Who has written Bhagawad Gita "<<endl;
        cout<<"(a) Munsi Premchand (b) Tulsi das (c) Kabir Das (d) Vedvyas "<<endl;
        cin>>option;
        if(option=='d'|| option=='D'){
            score=score+1;
        }
        else{
            score=score-1;
        }

        cout<<"Q8. Who is the founder of Physicswala "<<endl;
        cout<<"(a) Aman dhattarwal (b) Alakh Pandey (c) Anad Kumar (d) shraddha Khaparia"<<endl;
        cin>>option;
        if(option=='b'|| option=='B'){
            score=score+1;
        }
        else{
            score=score-1;
        }

        cout<<"Q9. Who is the CEO of Google "<<endl;
        cout<<"(a) Sundaram Rajan Pichai (b) Satya Nadela (c) Bill Gates (d) Mark Zukerbug"<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score=score+1;
        }
        else{
            score=score-1;
        }

        cout<<"Q10. How many spokes lines are there in in Indian Flag "<<endl;
        cout<<"(a) 34 (b) 23 (c) 24 (d) 25"<<endl;
        cin>>option;
        if(option=='c'|| option=='C'){
            score=score+1;
        }
        else{
            score=score-1;
        }
    }
    else{
        cout<<"You have entered wrong value, please entered s"<<endl;
        goto PlayInsideFunction;
    }

    return score;
}

/*Personal Note:
1. Here when I repeating the the game it will not showing the Result 
Reason- for that I have used goto statement as "goto play; " and 
then declared the play in main function as "play:" basically I have taken a label 
so goto statement do jump , here if it is yes(y) then it will jump to play.*/