#include <iostream>

using namespace std;

int main()
{
    int array_size = 5;
    string pokemon[6] = {"Charmander", "Pikachu","Bulbasaur","Squirtle","Mew"};
    string usr_inp;
    int idx_inp;


    cout << "Current List [0-4]: ";
    for(int i = 0; i< array_size; i++){
        cout << pokemon[i];
        if (i < array_size - 1){
            cout << ", ";
        }
    }
    cout << "\nAdd a Pokemon: ";
    cin >> usr_inp;

    pokemon[array_size] = usr_inp;
    array_size++;

    cout << "\nList with New Pokemon: ";
    for(int i = 0; i< array_size; i++){
        cout << pokemon[i];
        if (i < array_size - 1){
            cout << ", ";
        }
    }
    return 0;
}
