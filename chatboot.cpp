#include<iostream>
#include<string>
using namespace std;
int main()
{


    char  inp, Y,N,y,n;
    string name,getky,ram;
    cout<<"\t \t Welcome to ChatBot \n \n ";
    cout<<"To continue the program type 'Y' and to end type 'N'---- " ;
    cout<<" \n ---------> \n";
    cin>>inp;
    //condition whether its Y or N
    if(inp== 'y'||inp== 'Y')
        {
            cout<<"Welcome Sir......"<<endl;
    }
    else if(inp== 'n' || inp == 'N')
        {
            cout<<"Thanks for coming here.."; cout<<endl;
    }
    else
        {
            cout<<"Please enter Y or N" <<endl;
    }

    system("cls");
    if(getky!="by")
        {
            cout<<"\t Hello sir \n";
            cin>>getky;
            cout<<"\n What is your name...\n";
            cin>>name;
            cout<<name<<"  "<<"what is your age \n";
            cin>>getky;
        }



       // next part
    string sentence;
    string Question[10];
    Question[0]="what is your name";
    Question[1]="how are you";
    Question[2]="what is your age";
    Question[3]="tell me a joke";
    Question[4]="what is your favourite colour";
    Question[5]="who is the chief minister of uttar pradesh";
    Question[6]="tell me about yourself";
    Question[7]="what are you doing";
    Question[8]="which university are you studying in";
    Question[9]="who is the prime minister of india";

    string answer[10]={
    "my name is chatbot",
    "I am fine . thanks for asking",
    "2 week",
    "sorry dear . I am a chatbot not a joker",
    "black and गुलाबी ",
    "Yogi Adityanath ji ",
    "I am a chatboot. I was born just 2 weeks ago. Pandey Shaab made me  14-12-2020 in his to desktop ",
    "I am answering your questions",
    "GNA University",
    "Narendra Modi ji"
    };
    do
    {
        cout<<"Enter the sentence:"<<endl;
        getline(cin,sentence);
        if(sentence.find("how")!= string::npos || sentence.find("what")!=string::npos || sentence.find("do")!= string::npos)
        {
            cout<<"Answer your Qustion is -------> ";
        }
        int len=sentence.size();
        if(len >25)
        {
            cout<<" Your asking lenghthy Qustion"<<endl;
        }
        if(sentence==Question[0])
        {
            cout<<"my name is chatbot"<<endl;
        }
        else if(sentence==Question[1])
        {
            cout<<"I am fine . thanks for asking "<<endl;
        }
        else if(sentence==Question[2])
        {
            cout<<"2 week"<<endl;
        }
        else if(sentence==Question[3])
        {
            cout<<"sorry dear . I am a chatbot not a joker"<<endl;
        }
        else if(sentence==Question[4])
        {
            cout<<"black and गुलाबी "<<endl;
        }
        else if(sentence==Question[5])
        {
          cout<<" Yogi Adityanath ji"<<endl;
        }
        else if(sentence==Question[6])
        {
           cout<<" I am a chatboot. I was born just 2 weeks ago. Pandey Shaab made me  14-12-2020 in his to desktop" <<endl;
        }
        else if(sentence==Question[7])
        {
           cout<<"I am answering your question" <<endl;
        }
        else if(sentence==Question[8])
        {
           cout<<" GNA University" <<endl;
        }
         else if(sentence==Question[9])
         {
             cout<<"Narendra Modi ji"<<endl;
         }
        else
        {
            cout<<"invalid data"<<endl;
        }
        cout<<"***************************************"<<endl;
        cout<<"Enter exit to close your program"<<endl;
        cout<<"*****************************************"<<endl;
    }
    while(sentence!="exit");

}
