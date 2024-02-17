#include <bits/stdc++.h>
using namespace std;

bool validText(string t)
{
    return regex_match(t, regex("[a-zA-Z]*(?:!{1}|,{1}|.{1})$")) | regex_match(t, regex("[a-zA-Z]*-[a-zA-Z]*")) | regex_match(t, regex("[a-zA-Z]+"));
}

int main()
{
    string sentence = "pencil-sharpener.";
    
    int count = 0;
    string temp;
    for (auto &a : sentence)
    {
        if (a == ' ')
        {
            if (!temp.empty() && validText(temp))
            {
                count++;
                cout<<temp<<endl;
            }
            temp.clear();
        }
        else
        {
            temp += a;
        }
    }
    if (!temp.empty() && validText(temp))
    {
        count++;
    }

    cout << count << endl;
    return 0;
}
