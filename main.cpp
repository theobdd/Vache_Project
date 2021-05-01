#include <iostream>

using namespace std;

int main()
{
    int nbr_piquet, max;
    int x, y;

    max=50;


    cout << "Combien de piquet" << endl;
    cin>>nbr_piquet;
    while(nbr_piquet>max){
        cout << "Trop de piquet" << endl;
        cin>>nbr_piquet;
    }

    for(int i=0; i<nbr_piquet; i++){

        cout << "Saisir coordonnees X" << endl;
        cin>>x;
        cout << "Saisir coordonnees X" << endl;
        cin>>y;
    }



    return 0;
}
