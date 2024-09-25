#include<iostream>
#include<chrono>
using namespace std;

void display(string name){
    cout<<"    "<<"***INSTRUCTIONS***\n";
    cout<<"-> There are 5 easy level GK questions in this quiz.\n";
    cout<<"-> To answer a quesion you have 30 seconds.\n";
    cout<<"-> If answer is not in the time limit zero marks will be awarded.\n";
    cout<<"-> For every correct answer 10 marks will be awarded.\n";
    cout<<"-> For incorrect answer zero marks will be awarded.\n";
    cout<<"-> To pass in the test your score should be >=30.\n";
}
bool q1(){
    bool answer = false;
    int ans;
    // start the timer
    auto start_time=
    chrono::high_resolution_clock::now();
    
    cout<<"\nQuestion 1: "<<"Who is the present finance minister?\n";
    cout<<"1. Mr.Rajnath singh\n";
    cout<<"2. Mr.Manmohan singh\n";
    cout<<"3. Mrs.Nirmala sita raman\n";
    cout<<"4. Mr.Rahul gandhi\n\n";
    cout<<"Answer:";
    cin>>ans;
    // end the timer 
    auto end_time=
    chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::seconds>(end_time-start_time).count();

    if(duration>30) cout<<"Time's up";
    else if(ans==3) answer=true;
    return answer; 
}
bool q2(){
    bool answer = false;
    int ans;
     // start the timer
    auto start_time=
    chrono::high_resolution_clock::now();

    cout<<"\nQuestion 2: "<<"What is the Earth's natural satellite?\n";
    cout<<"1. Sputnik1\n";
    cout<<"2. Sun\n";
    cout<<"3. Aryabhata\n";
    cout<<"4. Moon\n\n";
    cout<<"Answer:";
    cin>>ans;
    // end the timer 
    auto end_time=
    chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::seconds>(end_time-start_time).count();

    if(duration>30) cout<<"Time's up";
    else if(ans==4) answer=true;
    return answer; 
}
bool q3(){
    bool answer = false;
    int ans;
     // start the timer
    auto start_time=
    chrono::high_resolution_clock::now();

    cout<<"\nQuestion 3: "<<"What does WWW stands for?\n";
    cout<<"1. World Wide Web\n";
    cout<<"2. World Web Warriors \n";
    cout<<"3. Wide World Web\n";
    cout<<"4. Web Wide World\n\n";
    cout<<"Answer:";
    cin>>ans;
    // end the timer 
    auto end_time=
    chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::seconds>(end_time-start_time).count();

    if(duration>30) cout<<"Time's up";
    else if(ans==1) answer=true;
    return answer; 
}
bool q4(){
    bool answer = false;
    int ans;
     // start the timer
    auto start_time=
    chrono::high_resolution_clock::now();

    cout<<"\nQuestion 4: "<<"In what country are the 2024 Summer Olympics held?\n";
    cout<<"1. Tokyo, Japan\n";
    cout<<"2. Paris, France \n";
    cout<<"3. London, United Kingdom\n";
    cout<<"4. New Delhi,India\n\n";
    cout<<"Answer:";
    cin>>ans;
    // end the timer 
    auto end_time=
    chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::seconds>(end_time-start_time).count();

    if(duration>30) cout<<"Time's up";
    else if(ans==2) answer=true;
    return answer;
}
bool q5(){
    bool answer = false;
    int ans;
     // start the timer
    auto start_time=
    chrono::high_resolution_clock::now();

    cout<<"\nQuestion 5: "<<"Which planet has the most moons?\n";
    cout<<"1. mars\n";
    cout<<"2. jupiter\n";
    cout<<"3. venus\n";
    cout<<"4. saturn\n\n";
    cout<<"Answer:";
    cin>>ans;
    // end the timer 
    auto end_time=
    chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::seconds>(end_time-start_time).count();

    if(duration>30) cout<<"Time's up";
    else if(ans==2) answer=true;
    return answer; 
}
int main(){
    cout<<"      ***WELCOME***\n";
    string  name;
    cout<<"To begin the quiz\nEnter your name:";
    cin>>name;
    cout<<endl;
    display(name);
    string ready;
    cout<<endl;
    cout<<name<<", have you read the instructions and do you want to start the quiz?(yes/no):";
    cin>>ready;
    int score=0;
   if(ready=="yes") {if(q1()==true) score+=10;
    if(q2()==true) score+=10;
    if(q3()==true) score+=10;
    if(q4()==true) score+=10;
    if(q5()==true) score+=10;


    cout<<"\n     ***Scorecard***\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Total score: "<<score<<" out of 50"<<endl;
    if(score>=30) cout<<"Congrats you passed the quiz\n";
    else cout<<"Better luck next time\n";
    }
    else {
        cout<<"Thanks for visit, come again";
    }

}