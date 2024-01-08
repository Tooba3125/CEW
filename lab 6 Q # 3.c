main.c

#include <stdio.h> #include "matrix.h"

int main(){
int mat1[2][2] = {{1,2},{5,6}};
int mat2[2][2] = {{1,2},{5,6}};
printf("On Addition\n");
int *mat3 = add(mat1, 2, 2, mat2,2, 2);
print_mat(mat3, 2, 2); printf("\nOn Multiplication\n");
 
matrix.c

#include	"matrix.h"
#include	<stdlib.h> #include <stdio.h>

int* add(int* mat1, int r1, int c1, int*mat2, int r2, int c2){
if(c1 == c2 && r1 == r2){
int* mat3 = (int*)malloc(r1 * c1 * sizeof(int));
// Use dynamic memory allocation int* ptr = mat3;
for(int i = 0; i<r1; i++){ for(int j = 0;
 

int *mat4 = mul(mat1, 2, 2, mat2,2, 2);		j<c1; j++){
print_mat(mat4, 2, 2);		*ptr = *mat1 + *mat2;
printf("\nOn Transposition\n"); int *mat5 = transpose(mat1, 2, 2);
print_mat(mat5, 2, 2);		// printf("%d ", *ptr);mat1++;
mat2++;ptr++;}
}
printf("\nDeterminant of mat1\n");		return mat3;
int num = determinant(mat1, 2,	}	
 
2);



}
 

print_mat(mat1, 2, 2); printf("Determinant = %d", num); return 0;
 
return NULL;
}

int* mul(int *mat1, int r1, int c1, int*mat2, int r2, int c2){
if(c1 == r2){
int* mat3 = (int*)malloc(r1 * c1 *
 
matrix.h

#ifndef	MATRIX_h #define MATRIX_h int* add();
int* mul();
int* transpose(); int determinant();
void print_mat(); #endif
 
sizeof(int)); // Use dynamic memory allocation int* ptr = mat3;
for(int i = 0; i<r1; i++){ for(int j = 0;
j<c2; j++){
*ptr = 0;
for(int k = 0; k<c1; k++){
*ptr += mat1[i * c1 + k] * mat2[k * c2 + j];
}
// printf("%d ", *ptr); ptr++;

}
 
}
int* transpose(int *mat1, int r, int c){int* mat
= (int*)malloc(r * c * sizeof(int));
int* ptr = mat;
for(int j = 0; j<c; j++){ for(int i
= 0; i<r; i++){
*ptr = mat1[i * c + j];ptr++;
}

}
return mat;
}

int determinant(int* mat, int r, int c){ if(r == c){
return mat[0] * mat[3] - mat[1] *
mat[2];
}

void print_mat(int* mat, int r, int c){ for(int i = 0; i<r; i++){
for(int j = 0; j<c; j++){ printf("%4d ", *mat);mat++;}
printf("\n");
}
}
