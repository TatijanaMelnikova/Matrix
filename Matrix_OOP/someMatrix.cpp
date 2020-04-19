//
//  someMatrix.cpp
//  Matrix_OOP
//
//  Created by Tatiana Melnikova on 09.04.2020.
//  Copyright © 2020 Tatiana Melnikova. All rights reserved.
//

#include "someMatrix.hpp"

someMatrix::someMatrix (){
    row = 0;
    coll = 0;
    isSquare = 1;
}

someMatrix::someMatrix (size_t row, size_t coll){
    this->row = row;
    this->coll = coll;
    
    if(row == coll)
        isSquare = 1;
    else
        isSquare = 0;
    
    for(size_t i{0}; i < row; i++){
        matrix.push_back(vector<int>());
        for(size_t j{0}; j < coll; j++)
            matrix[i].push_back(0);
    };
}


void someMatrix::input_matrix(){
 
    cout << "Введите количество строк" << endl;
    cin >> row;
    cout << "Введите количество столбцов" << endl;
    cin >> coll;
    
    for (int i{0}; i<row; i++) {
        matrix.push_back(vector<int>());
        for(int j{0}; j<coll; j++){
 
            cout << "Введите элемент " << i <<"."<< j << endl;
            int elem;
            cin >> elem;
            matrix[i].push_back(elem);
        }
    }
}

void someMatrix::print_matrix(){
    
    for (int i{0}; i<matrix.size(); i++) {
        for(int j{0}; j<matrix[0].size(); j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }    
}

bool someMatrix::is_diagonal(){

    if( matrix.size() > 0 && matrix.size() == matrix[0].size()){
        for (int i{0}; i<matrix.size(); i++)
            for (int j{0}; j<matrix.size(); j++)
                if(i != j && matrix[i][j] != 0)
                    return false;
    }else
        return false;
    return true;
}

bool someMatrix::is_unit_matrix_diagonal(){
    
    if( matrix.size() > 0 && matrix.size() == matrix[0].size()){
        for (int i{0}; i<matrix.size(); i++)
            for (int j{0}; j<matrix.size(); j++)
                if(i != j && matrix[i][j] != 0)
                    return false;
                else if( i == j && matrix[i][j] != 1)
                    return false;
    }else
        return false;
    
    
   return true;
}

bool someMatrix::is_down_matrix_diagonal(){
    
    if( matrix.size() > 0 && matrix.size() == matrix[0].size()){
        for (int i{0}; i<matrix.size(); i++)
            for (int j{0}; j<matrix.size(); j++)
                if(i < j && matrix[i][j] != 0)
                    return false;
    }else
        return false;
    
   return true;
}

bool someMatrix::is_up_matrix_diagonal(){
    
    if( matrix.size() > 0 && matrix.size() == matrix[0].size()){
        for (int i{0}; i<matrix.size(); i++)
            for (int j{0}; j<matrix.size(); j++)
                if(i > j && matrix[i][j] != 0)
                    return false;
    }else
        return false;
    
   return true;
}

someMatrix someMatrix::matrix_addition(someMatrix &matrixEka, someMatrix &matrixToka){
    
    if(matrixEka.row_count() == matrixToka.row_count() && matrixEka.coll_count() == matrixToka.coll_count()){
        
        someMatrix matrixKo(matrixEka.row_count(), matrixEka.coll_count());
        
        for (int i{0}; i<matrixEka.row_count(); i++)
            for(int j{0}; j<matrixToka.coll_count(); j++)
                matrixKo[i][j] = matrixEka[i][j] + matrixToka[i][j];
        
        return matrixKo;
        
    }else throw invalid_argument("Размер матриц должен совпадать");

   
  //  return someMatrix();
}

size_t someMatrix::row_count(){
    return row;
}


size_t someMatrix::coll_count(){
    return coll;
}

vector<int> someMatrix::operator[](size_t index){
    return matrix[index];
}
