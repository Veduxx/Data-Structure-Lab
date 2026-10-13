// write a program menu driven for simple bank token system that allows the user to issue the token, display all tokens , serve customer and exit the program
#include <iostream>
using namespace std;

int main()
{
    int choice;
    int tokens[100];
    int count = 0, served = 0;

    while (true)
    {
        cout << "\n--- BANK TOKEN SYSTEM ---\n";
        cout << "1. Issue Token\n";
        cout << "2. Display All Tokens\n";
        cout << "3. Serve Customer\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (count < 100)
                {
                    tokens[count] = count + 1;
                    cout << "Token issued: "
                         << tokens[count] << endl;
                    count++;
                }
                else
                {
                    cout << "Token limit reached!\n";
                }
                break;

            case 2:
                if (served == count)
                {
                    cout << "No pending tokens.\n";
                }
                else
                {
                    cout << "Pending Tokens: ";
                    for (int i = served; i < count; i++)
                    {
                        cout << tokens[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (served < count)
                {
                    cout << "Serving customer with Token "
                         << tokens[served] << endl;
                    served++;
                }
                else
                {
                    cout << "No customers waiting.\n";
                }
                break;

            case 4:
                cout << "Exiting Bank Token System.\n";
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
