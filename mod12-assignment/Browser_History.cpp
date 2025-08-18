#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> websites;
    string input;

    while (cin >> input && input != "end")
    {
        websites.push_back(input);
    }

    int Q;
    cin >> Q;
    cin.ignore();

    list<string>::iterator current = websites.begin();

    for (int i = 0; i < Q; i++)
    {
        string command;
        getline(cin, command);

        if (command.substr(0, 5) == "visit")
        {
            string target = command.substr(6);
            bool found = false;

            for (auto it = websites.begin(); it != websites.end(); ++it)
            {
                if (*it == target)
                {
                    current = it;
                    cout << *current << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "next")
        {
            auto temp = current;
            temp++;
            if (temp != websites.end())
            {
                current = temp;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "prev")
        {
            if (current != websites.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
