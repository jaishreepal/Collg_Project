using namespace std;
#include<iostream>
#include<conio.h>
#include<string.h>

void showhint();
void check(string word,char splayer,string fullword);
void fill(char splayer,string word,string fullword);
//void result();
string fill(char splayer);

char splayer;
string word,fullword;
int main()
{
    showhint();
            getch();
}


void showhint()
{
    cout<<"enter any number of your choice \n";
    int n;
    cin>>n;
    switch(n)
    {
    case 1:cout<<"_ _ _ I 0 ";
     fullword="MARIO";
     word="MAR  ";
     for(int i=0;i<6;i++)
     {
          cout<<"\nenter letter ";
    cin>>splayer;
        check(word,splayer,fullword);
     }
            //return ("mar");
        break;
    /*case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;*/
    }
}


void check(string word,char splayer,string fullword)
{
    int len=word.size();
    for(int i=0;i<len;i++)
    {
       if(splayer==word[i])
            {
                fill(splayer,word,fullword);
                break;
            }
       // else
              //  cout<<splayer<<" is not present "<<endl;
                //continue;
    }

}


void fill(char splayer,string word,string fullword)
{
    int len=word.size();
    for(int i=0;i<len;i++)
    {
        if(splayer==word[i])
            cout<<word[i];

          else  if(word[i]==' ')
                cout<<fullword[i];

                else
            cout<<" _ ";

    }
}

