//
//  main.cpp
//  Matrix_OOP
//
//  Created by Tatiana Melnikova on 16.03.2020.
//  Copyright © 2020 Tatiana Melnikova. All rights reserved.
//

#include "someMatrix.hpp"

int main(int argc, const char * argv[]) {
    someMatrix a;
    someMatrix b;
    
    a.input_matrix();
    a.print_matrix();
    
    someMatrix::matrix_addition(a, b);
    cout << a.is_diagonal();
    return 0;
}


