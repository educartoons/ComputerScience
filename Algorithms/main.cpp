//
//  main.cpp
//  Algorithms
//
//  Created by Eduar Apaza Yáñez on 8/12/16.
//  Copyright © 2016 Eduar Apaza Yáñez. All rights reserved.
//
//

#include <iostream>

using namespace std;

void print_array(int *, int size);

int main(int argc, const char * argv[]) {
    
    int array[] = {5,2,4,6,1,3};
    int array_length, key, i, j;
    
    array_length = sizeof(array)/sizeof(*array);
    
    print_array(array, array_length);
    
    // Algorith Insertion Sort
    
    for(j=1;j<array_length;j++){
        key = array[j];
        i=j-1;
        while(i>=0 && array[i]>key){
            array[i+1]=array[i];
            i=i-1;
        }
        array[i+1]=key;
    }
    
    // End Insertion Sort
    
    print_array(array, array_length);
    
}

void print_array(int *array, int size){
    int array_length = size;
    int i;
    
    for(i=0;i<array_length;i++){
        cout<<array[i]<<", ";
    }
    cout<<endl;
}

