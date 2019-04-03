#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int matrix[60][49];
	int nroelementos;
	int contador = 0;
	
	for (int i=0;i<60;i++)
	{
		for (int j=0;j<49;j++)
		{
			matrix[i][j]=0;
		}
	}
cin>>nroelementos;
		//cout<<nroelementos;
		for (int i=0;i<(nroelementos*2);i=i+2)
		{

				scanf("%d",&matrix[i][0]);
				     cout<<(matrix[i][0])<<endl;
				for (int z = 0; z<(matrix[i][0]);z++)
				{
					scanf("%d",&matrix[i+1][z]);
					cout<<(matrix[i+1][z]);	
				}
				cout<<endl;
		}
	cout<<nroelementos;
	for (int i=0;i<(nroelementos*2);i++)
		{
			int mayor = 0;
			int menor = 0;
			if (i%2!=0)
			{
				for (int j=0;j<=(matrix[i-1][0]-2);j++)
				{
					if (matrix[i][j]<matrix[i][j+1])
					{
						menor = menor + 1;
					}
					else if (matrix[i][j]>matrix[i][j+1])
					{
						mayor = mayor + 1;
					}
					else 
					{
					continue;
					}
				}
			contador = contador+1;
			cout<<"Caso "<<contador<<": "<<menor<<" "<<mayor<<endl;
			}
			}
			return 0;

	}
	/*for(int i=0;i<=testnumber;i++)
	{	
		
		int nroelementos;
		int Arrayi[nroelementos];
		cin>>nroelementos;
		for(int j = 0;j<nroelementos;j++)
		cin>>Array
			[j]=
		
	}*/

