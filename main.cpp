#include <iostream>
using namespace std;
int main()
{
    int array_size = 5;
    string pokemon[array_size] = {"Charmander", "Pikachu","Bulbasaur","Squirtle","Mew"};
    int usr_inp;

    for(int i = 0; i< array_size; i++){
        cout << pokemon[i];
        if (i < array_size - 1){
            cout << ", ";
        }
    }
    cout << "\nChoose a pokemon [0-4]: ";
    cin >> usr_inp;

    if (usr_inp >= array_size ){
        cout << "The list is full!"<<endl;
    }else if(usr_inp < 0){
        cout << "Invalid Index!"<<endl;
    }else {
        cout << "The Pokemon at index "<< usr_inp << " is "<< pokemon[usr_inp] << endl;
    }
    return 0;
}
