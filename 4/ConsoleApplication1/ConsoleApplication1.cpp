#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: " << endl;
    getline(cin, str, '.');

    int index = str.rfind("one");
    if (index != -1)
    {
        cout << "Index of the last occurrence of \"one\": " << index << endl;
    }
    else
    {
        cout << "String \"one\" not found!!!" << endl;
    }

    int count = 0;
    index = 0;
    string word = "abc";
    while ((index = str.find(word, index)) != -1)
    {
        count++;
        index += word.length();
    }
    cout << "The \"" << word << "\" is found " << count << " times." << endl;

    int countLetters = 0, countSigns = 0;
    int countL = 0;
    int countS = 0;
    index = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (countS >= 2)
            {
                countSigns++;
            }
            countS = 0;
            countL++;

        }
        else
        {
            if (countL >= 2)
            {
                countLetters++;
            }
            countL = 0;
            countS++;
        }
    }
    if (countS >= 2)
    {
        countSigns++;
    }
    if (countL >= 2)
    {
        countLetters++;
    }
    cout << "Count group of letter: " << countLetters << ". Count group of sign: " << countSigns << endl;
    return 0;
}
