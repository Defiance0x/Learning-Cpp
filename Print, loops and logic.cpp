#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Welcome! \n";
    cout << "Hello World!\n";
    string response;
    cout << "Please say hello back \n";

    int hello = 0;

    while (hello == 0)
    {
        
        cin >> response;
        cout << "You said " << response << endl;


        if (response == "hello" || response == "Hello")
        {
            cout << "Thank you! :) \n";
            cout << "Press any key to exit.";
            hello = 1;
        }

        else
        {
            cout << "Please say hello :( \n";
            hello = 0;

        }
    }


    system("pause > 0");
}
