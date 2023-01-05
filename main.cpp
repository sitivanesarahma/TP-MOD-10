#include <iostream>
#include "stack.h"

using namespace std;

//NIM : 1301213086 % 4 = 2

int main()
{
    stack S, S1;
    createStack_1301213086(S);
    createStack_1301213086(S1);

    push_1301213086(S, 'P');
    push_1301213086(S, 'E');
    push_1301213086(S, 'R');
    push_1301213086(S, 'C');
    push_1301213086(S, 'A');
    push_1301213086(S, 'Y');
    push_1301213086(S, 'A');
    push_1301213086(S, 'D');
    push_1301213086(S, 'I');
    push_1301213086(S, 'R');
    push_1301213086(S, 'I');
    //printInfo_1301213086(S);
    for(int i = 1; i<=11; i++){
        push_1301213086(S1, pop_1301213086(S));
    }
    printInfo_1301213086(S1);
    //cout << endl;
    for(int i = 1; i <= 7; i++){
        pop_1301213086(S1);
    }
    printInfo_1301213086(S1);

    return 0;
}
