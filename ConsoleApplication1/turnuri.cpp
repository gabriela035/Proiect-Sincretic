#include <iostream>
using namespace std;

void hanoi(int n, char a, char c,char b)
{
    if (!n) 
        return;
    hanoi(n - 1, a, b, c);
    cout << "Disc: " << n << " de pe " << a << " pe " << c << endl;
    hanoi(n - 1, b, c, a);
}

int main()
{
    int n;
    cout << "Introduceti nr. de discuri\n n= ";
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}