#include <cmath>
#include <cstdio>
#include <map>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    cin.ignore();

    map<string, string> attributeValuePairs;
    string inputStr, tag_preamble = "";
    for (int i = 0; i < n; i++)
    {
        getline(cin, inputStr);
        stringstream ss(inputStr);
        string word, attribute, value;
        size_t pos;
        while (getline(ss, word, ' '))
        { // get tokens out of each line
            // found tag
            if (word[0] == '<')
            {
                string tag;
                if (word[1] == '/')
                { // found a closing tag
                    tag = word.substr(2);
                    tag = tag.substr(0, tag.length() - 1); // remove '>'
                    pos = tag_preamble.find("." + tag);
                    if (pos == string::npos)
                        tag_preamble = "";
                    else
                        tag_preamble = tag_preamble.substr(0, pos);
                }
                else
                { // found tag opening
                    tag = word.substr(1);
                    if (tag.find(">") != string::npos) // get rid of ">"
                        tag = tag.substr(0, tag.length() - 1);
                    if (tag_preamble == "")
                        tag_preamble = tag;
                    else
                        tag_preamble = tag_preamble + "." + tag;
                }
            }
            // found value
            else if (word[0] == '"')
            {
                pos = word.find_last_of('"');
                value = word.substr(1, pos - 1);
                attributeValuePairs[attribute] = value;
            }
            // found attribute name
            else if (word[0] != '=')
            {
                attribute = tag_preamble + "~" + word;
            }
            else
            {
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        getline(cin, inputStr);
        if (attributeValuePairs.find(inputStr) == attributeValuePairs.end())
            cout << "Not Found!" << endl;
        else
            cout << attributeValuePairs[inputStr] << endl;
    }
    return 0;
}
