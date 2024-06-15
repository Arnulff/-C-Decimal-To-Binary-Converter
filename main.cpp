#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <Windows.h>

using namespace std;


void Print(string text) // This is Just For Style
{
    for(char word : text)
    {
        cout << word;
        Sleep(020);
    }
}


vector<int> ToBinary(int number) // The function that converts numbers into binary
{
    vector<int> array(0);


    while(number != 0) 
    {
        array.push_back(number % 2);
        number /= 2;
    }



    reverse(array.begin(), array.end()); // Reverse Vector Elements



    for(int digit : array) // Print Each Bit of Vector 
    {
        cout << digit;
    }                                             

    return array;
}


void Option_One()
{
    int number(0);

    while(true) // Main Loop
    {

        Print("Which Number Would You Like To Convert ? : ");
        
        cin >> number;

        if(cin.fail())
        {
            system("cls");
            Print("ERROR >> Invalid Input !");
            Sleep(2000);

            Print(" Please, retry");

            Sleep(2000);

            cin.clear();
            cin.ignore(INT_MAX, '\n');
            
            system("cls");
        }
        else
        {
            cout << number << " ToBinary -> "; ToBinary(number);
            cout << endl;
        }
    

        string input("");

        while(true) // Input EXIT/RESTART Loop
        {

        
    
            Print("\n\nConvert another number ? [yes/no] : ");
            cin >> input;

            if(input == "yes" || input == "Yes")
            {
                break;
            }
            else if(input == "no" || input == "No")
            {
                return;
            }
            else
            {
                system("cls");
                Print("ERROR >> Invalid Input !");
                Sleep(2000);

                Print(" Please, retry");

                Sleep(2000);

                cin.clear();
                cin.ignore(INT_MAX, '\n');
                
                system("cls");   
            }

        }
    }
}





void Option_Two()
{
    system("cls");
    int start_number(0), end_number(0);

    while(true) // Main Loop
    {
        while(true) // Input Loop
        {
            system("cls");
            Print("Enter a start number : ");
            cin >> start_number;

            if(cin.fail()) // If Invalid Input..
            {
                system("cls");
                Print("ERROR >> Invalid Input !");
                Sleep(2000);

                Print(" Please, retry");

                Sleep(2000);

                cin.clear();
                cin.ignore(INT_MAX, '\n');
                
                system("cls");   
                continue;        
            }

            Print("\n\nEnter an end number : ");
            cin >> end_number;

            if(cin.fail()) // If Invalid Input..
            {
                system("cls");
                Print("ERROR >> Invalid Input !");
                Sleep(2000);

                Print(" Please, retry");

                Sleep(2000);

                cin.clear();
                cin.ignore(INT_MAX, '\n');
                
                system("cls");  
                continue;
            }

            if(start_number > end_number)
            {
                system("cls");

                Print("ERROR >> The start number is bigger than end number !");
                Sleep(2000);
                system("cls");

                continue;
            }
            else
            {
                for(start_number; start_number <= end_number ; start_number++)
                {
                    cout << start_number << " To Binary -> "; ToBinary(start_number); cout << endl;
                }                
            }

            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cin.ignore();
            
            string input("");

            while(true) // Input EXIT/RESTART Loop
            {

            
        
                Print("\n\nConvert another number ? [yes/no] : ");
                cin >> input;

                if(input == "yes" || input == "Yes")
                {
                    break;
                }
                else if(input == "no" || input == "No")
                {
                    return;
                }
                else
                {
                    system("cls");
                    Print("ERROR >> Invalid Input !");
                    Sleep(2000);

                    Print(" Please, retry");

                    Sleep(2000);

                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    
                    system("cls");   
                }

            }
                
        }
    }
    
}






int main()
{
    system("cls");

    int option(0);

    while(true) // Boucle 'option' Input
    {
        system("cls");
        Print("\t\t{ Decimal To Binary Converter }\n\n[1] Convert Number\n[2] See Many Binarys\n[3] Exit\n\n");

        Print("Please, select an option : ");

        cin >> option;


        if(option == 1) // If 'option' = 1, Run Option_One()
        {
            Option_One();
        }
        else if(option == 2)
        {
            Option_Two();
        }
        else if(option == 3)
        {
            break;
        }
        else
        {
            system("cls");
            Print("ERROR >> Invalid Input !");
            Sleep(2000);

            Print(" Please, retry");

            Sleep(2000);

            cin.clear();
            cin.ignore(INT_MAX, '\n');
            
            system("cls");       
        }
    }


    return 0;
}