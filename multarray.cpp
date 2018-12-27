#include <iostream>

using namespace std;

void multArray(int **pPtrArray, int rows, int cols);

int main(){

    int rows;
    int cols;
    cout << "How many rows would you like: ";
    cin >> rows;
    cout << "How many columns would you like: ";
    cin >> cols;

    int **pPtrArray;
    pPtrArray = new int*[rows];

    // Now for each pointer store the address of an array of
    // integers
    for(int i = 0; i < rows; i++){

        pPtrArray[i] = new int[cols];
    }
    multArray(pPtrArray,rows, cols); 
    
    for(int i = 0; i < rows; i++){
        
        delete [] pPtrArray[i];
    }
    delete [] pPtrArray;
}

void multArray(int **pPtrArray, int rows, int cols){

  // Rows & Cols
  for(int i = 0; i < rows; i++){

    for(int j = 0; j < cols; j++){

      pPtrArray[i][j] = i * j;
    }
  }
  // Display the table
  for(int i = 0; i < rows; i++){

    for(int j = 0; j < cols; j++){

      cout <<"[" << pPtrArray[i][j] << "]" << "\t";
    }
    cout << endl;
  }
}
