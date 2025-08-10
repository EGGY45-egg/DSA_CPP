#include <iostream>
using namespace std;
int main()
{
    int array_size = 5;
    string pokemon[6] = {"Charmander", "Pikachu","Bulbasaur","Squirtle","Mew"};
    string usr_inp;
    int position;

    cout << "Current Team [0-4]: ";
    for(int i = 0; i< array_size; i++){
        cout << pokemon[i];
        if (i < array_size - 1){
            cout << ", ";
        }
    }

    cout << "\nInsert a Pokemon to the Team: ";
    cin >> usr_inp;

    cout << "What position will " << usr_inp << " be on the Team [0-5]: ";
    cin >> position;

    if (position < 0 || position > array_size || array_size == 6){
        cout << "Invalid Position!! Team Full!\n";
        return 1;
    }

    for(int i = array_size; i > position; i--){
        pokemon[i] = pokemon[i-1];
    }
    pokemon[position] = usr_inp;
    array_size++;

    cout << "\nUpdated Team: ";
    for(int i = 0; i< array_size; i++){
        cout << pokemon[i];
        if (i < array_size - 1){
            cout << ", ";
        }
    }
    return 0;
}
