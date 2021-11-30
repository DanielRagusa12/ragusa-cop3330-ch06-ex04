#include <iostream>
#include <vector>
#include "Header.h"

using namespace std;


int checkDuplicate(vector <Name_value>& people, string current_name);
void printInfo(vector<Name_value>& people);


int main()
{
    vector <Name_value> people;
    string current_name;
    int current_score;

    cout << "Enter name, and score pairs: " << endl;
    int i = 0;
    while (1)
    {
        cin >> current_name;
        cin >> current_score;

        if (current_name == "NoName" && current_score == 0)
        {
            cout << endl << endl;
            printInfo(people);
            break;
        }
        if (checkDuplicate(people,current_name) == 1)
        {
            cout << "Error! Duplicate Name Entry" << endl;
            break;
        }

        Name_value newPerson(current_name,current_score);

        people.push_back(newPerson);


        i++;
    }

}

int checkDuplicate(vector <Name_value>& people,string current_name)
{
    for (int i = 0; i < people.size(); i++)
    {
        if (people[i].getName() == current_name)
        {
            return 1;
        }
        else
            return 0;
    }

}

void printInfo(vector<Name_value>& people)
{
    for (int i = 0; i < people.size(); i++)
    {
        cout << people[i].getName() << " " << people[i].getScore() << endl;
    }
}