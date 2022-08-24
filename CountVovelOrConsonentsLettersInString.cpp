#include<iostream>
#include <cstring>
using namespace std;
class CountVowelORConsonentsOfString
{
    string word={""};
    int vowelCout=0;
    int consonent=0;
    char vol[6]={'a','e','i','o','u'};
    public:
    void CountVorC(string wrd)
    {
        cout<<wrd;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < wrd.size(); j++)
            {
               if (wrd[j]==vol[i])
               {
                   vowelCout++;
               }                    
               
            }
            consonent++;
            
        }
        ShowVowelNADConsonent();
    }
    void ShowVowelNADConsonent()
    {
        cout<<"VOWELS COUNT ARE:-"<<vowelCout<<"\tCONSONENT COUNT ARE:"<<consonent;
    }
};
int main()
{
    CountVowelORConsonentsOfString c1;
    string word={"malik"};
    c1.CountVorC(word);
    return 0;
}
