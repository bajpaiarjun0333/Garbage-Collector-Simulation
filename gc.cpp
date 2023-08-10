#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;


//we intend to declare a heap or array of some size 
int heap_capacity=64000;//capacity in bytes: This is the total amount of memory that we can use.
//this heap capacity should be divisible by pointer size in the machine so that we can get the total number of words
int heap_capacity_words=(heap_capacity/sizeof(void*));


int main(){
    cout<<heap_capacity_words<<endl;
    return 0;
}