#include <iostream>


using namespace std;
int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
        cerr << "Não é possível redirecionar cerr " << i << "\n" << endl;
    return 0;
}