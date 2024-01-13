#include <iostream>

using namespace std;

int main()
{
    int n,n1, aux, sum=0;

    cout << "primeiro num: ";
    cin >> n;
     cout << "segund num: ";
    cin >> n1;

    for(aux=1 ; aux<=n1 ; aux++)
        sum += aux;

    cout << "Somatório: " << sum << endl;

    return 0;
}

