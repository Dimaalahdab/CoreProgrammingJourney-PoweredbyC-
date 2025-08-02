#include <iostream>
using namespace std;
int main()
{
    int num;
    string item, all = " ", comma = ", ";

    cout << "How many item will you enter: ";
    cin >> num;
    if ((num == 0) || (num < 0))
    {
        cout << "Invalid Number \n";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (i < num)
            {
                cout << "Add the item number " << i << " : ";
                cin >> item;
                all = all + item + comma;
            }
            else
            {
                cout << "Add the item number " << num << " : ";
                cin >> item;
                cout << all << "and " << item;
            }
        }
    }

    // may be I can use dynamic array
}