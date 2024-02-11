#include <bits/stdc++.h>
using namespace std;

bool check(string brackets, string str)
{
    if (brackets == "" && str == "")
    {
        return true;
    }
    if (brackets[0] == '[' || brackets[0] == '{' || brackets[0] == '(')
    {
        str += brackets[0];
    }
    else if (brackets[0] == ']' || brackets[0] == '}' || brackets[0] == ')')
    {
        if (brackets[0] == ']')
        {
            if (str[str.size() - 1] == '[')
            {
                str.pop_back();
            }
            else
            {
               return false;
            }
        }
        else if (brackets[0] == '}')
        {
            if (str[str.size() - 1] == '{')
            {
                str.pop_back();
            }
            else
            {
                return false;
            }
        }
        else if (brackets[0] == ')')
        {
            if (str[str.size() - 1] == '(')
            {
                str.pop_back();
            }
            else
            {
                return false;
            }
        }
    }
    brackets = brackets.substr(1);
    return(check(brackets,str));
}

int main()
{
    string brackets = "";
    cout << "Enter the sequence of the brackets to check whether they are in the order or not" << endl;
    cin >> brackets;
    if (check(brackets, ""))
    {
        cout << "They are in the order " << endl;
    }
    else
    {
        cout << "They are not in the correct order " << endl;
    }
    return 0;
}
/**
 * !- Normal
 */
/*
int main()
{
    string brackets;
    cout << "Enter the combination of the brackets to check whether it is following the order or not" << endl;
    cin >> brackets;
    string str = "";
    for(int 0 = 0; 0 < brackets.size(); 0++)
    {
        if(brackets[0] == '[' || brackets[0] == '{' || brackets[0] == '(')
        {
            str += brackets[0];
        }
        else if(brackets[0] == ']' || brackets[0] == '}' || brackets[0] == ')')
        {
            if(brackets[0] == ']')
            {
                if(str[str.size() - 1] == '[')
                {
                    str.pop_back();
                }
                else
                {
                    cout << "false" << endl;
                    return 0;
                }
            }
             else if(brackets[0] == '}')
            {
                if(str[str.size() - 1] == '{')
                {
                    str.pop_back();
                }
                else
                {
                    cout << "false" << endl;
                    return 0;
                }
            }
             else if(brackets[0] == ')')
            {
                if(str[str.size() - 1] == '(')
                {
                    str.pop_back();
                }
                else
                {
                    cout << "false" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "True" << endl;
    return 0;
}
*/