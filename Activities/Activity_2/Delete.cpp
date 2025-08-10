#include <iostream>
using namespace std;
int main()
{
    int array_size = 5;
    string pokemon[6] = {"Charmander", "Pikachu","Bulbasaur","Squirtle","Mew"};
    string usr_inp;
    bool pkmnInTeam = false;

    cout << "Current Team: ";
    for(int i = 0; i< array_size; i++){
        cout << pokemon[i];
        if (i < array_size - 1){
            cout << ", ";
        }
    }

    cout << "\nEnter a Pokemon to remove from the Team: ";
    cin >> usr_inp;

    for(int i = 0; i < array_size; i++){
        if (pokemon[i] == usr_inp){
            for (int j = i; j < array_size -1; j++){
                pokemon[j] = pokemon[j + 1];
            }
            array_size--;
            pkmnInTeam = true;
        }
    }

    if (!pkmnInTeam){
        cout << usr_inp << " is not in the team.\n";
    }

    cout << "\nUpdated Team: ";
    for(int i = 0; i< array_size; i++){
        cout << pokemon[i];
        if (i < array_size - 1){
            cout << ", ";
        }
    }
    return 0;
}
