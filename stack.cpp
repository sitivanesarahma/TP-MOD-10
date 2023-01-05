#include "stack.h"
void createStack_1301213086(stack &S){
    Top(S) = 0;
}
bool isEmpty_1301213086 (stack S){
    if (Top(S) == 0){
        return true;
    } else {
        return false;
    }
}
bool isFull_1301213086 (stack S){
    if (Top(S) == 15){
        return true;
    } else {
        return false;
    }
}
void push_1301213086 (stack &S, infotype x){
    if (isFull_1301213086(S) == false){
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}
int pop_1301213086 (stack &S){
    infotype x;
    if (isEmpty_1301213086(S)== false){
        x = info(S)[Top(S)];
        Top(S) = Top(S)-1;
    }
    return x;
}
void printInfo_1301213086 (stack S){
    for (int i = Top(S); i > 0; i--){
        cout << info(S)[i] << " ";
    }
    cout << endl;
}
