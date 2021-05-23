// Rotate matrix 90 degrees
#include <iostream>
#include <vector>

using namespace std;

void rotate_matrix(char matrix[3][4]){
    //Declare the variables to traverse the maxrix	
    int i = 0; 
    int j = 0;
    
    //Write algorithm to rotate the matrix here
    int result[4][3];
    for(i=0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
	    result[3-j][i] = matrix[i][j];    
	};
    };

    //Display the input matrix
    cout<<"Input matrix is: "<<endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
       	    cout<<(char)matrix[i][j];
	};
	cout<<endl;
    }; 

    //Display the rotated matrix
    cout<<"Rotated matrix is: "<<endl; 
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
	    cout<<(char)result[i][j];
	};	
	cout<<endl;
    };
}

int main() {
    char input_mat[3][4] = {{'a','b','c','d'}, {'e','f','g','h'}, {'i','j','k','l'}};
    rotate_matrix(input_mat);

    return 0;
}
