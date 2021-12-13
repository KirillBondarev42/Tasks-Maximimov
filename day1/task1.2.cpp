#include <iostream>

using namespace std;
void copyMas(int* source, int* dest, int size)
{
    for (int x = 0; x < size; x++) dest[x] = source[x];
}


bool compareMas(int* source, int* dest, int size) {  
    for (int x = 0; x < size; x++) {
        if (source[x] != dest[x]) return false;
        else return true;
    }
}



void test(int* source, int* dest, int size) {   
    cout << "\n TEST:\n\n";
    if (compareMas(source, dest, size)) cout << "Test successful \n\n";
    else cout << "Test failed \n\n";
}

int main()
{
    const int size = 10;
   
    int source[size];
    int dest[size];
    
    for (int y = 0 ; y < size ; y++) source[y] = rand()%100;
    
    copyMas(source, dest, size);
    
    test(source, dest, size);

}
