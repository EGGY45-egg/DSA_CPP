#include <iostream>

using namespace std;

int main()
{
    int array_size = 5;
    string pokemon[array_size] = {"Charmander", "Pikachu","Bulbasaur","Squirtle","Mew"};
    string usr_inp;
    int idx_inp;


    cout << "Current List [0-4]: ";
    for(int i = 0; i< array_size; i++){
        cout << pokemon[i];
        if (i < array_size - 1){
            cout << ", ";
        }
    }
    while (true){
        cout << "\nChoose which Pokemon to replace: ";
        cin >> idx_inp;
        if (idx_inp >= 0 && idx_inp < array_size){
            break;
        }
        cout << "Index Invalid!!";
    }
    cout << "Replacement Pokemon: ";
    cin >> usr_inp;
    cout << "\nPokemon to replace " << pokemon[idx_inp] << " is " << usr_inp << endl;
    pokemon[idx_inp] = usr_inp;

    cout << "List with Replaced Pokemon: ";
    for(int i = 0; i< array_size; i++){
        cout << pokemon[i];
        if (i < array_size - 1){
            cout << ", ";
        }
    }
    return 0;
}
