//
//  someMatrix.hpp
//  Matrix_OOP
//
//  Created by Tatiana Melnikova on 09.04.2020.
//  Copyright © 2020 Tatiana Melnikova. All rights reserved.
//

#ifndef someMatrix_hpp
#define someMatrix_hpp

#include <iostream>
#include <vector>

using namespace std;

struct node_container{
    int data;
    struct node_container * next;
    struct node_container * prev;
};

class container{
    private:
        
    public:
    
};

typedef vector<vector<int>> imatrix;

class someMatrix {
    
    private:
        size_t row, coll;
        imatrix matrix;
        bool isSquare;
        
    //protected наследовать свойства и методы
        
    public:
        
        someMatrix();
        
        someMatrix(size_t row, size_t coll);
        
        void input_matrix();
        
        void print_matrix();
        
        bool is_diagonal();
        
        bool is_unit_matrix_diagonal();
    
        bool is_down_matrix_diagonal();
        
        bool is_up_matrix_diagonal();
    
        static someMatrix matrix_addition(someMatrix &matrixEka, someMatrix &matrixToka);// static общая для всего класса
    
        size_t row_count();
    
        size_t coll_count();
    
        vector<int> operator[](size_t);// есть краткий вызов
};


#endif /* someMatrix_hpp */

