#include <iostream>
using namespace std;
int main()
{
	int i, j;
	int A[2][2], B[2][2], O[2][2];
	int temp;
	cout<<"Operasi Matriks 2x2"<<endl;
	cout<<"input elemen matriks : "<<endl;
		for(i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				cout<<"A["<<(i+1)<<"] ["<<(j+1)<<"] = " ;cin>>A[i][j];
			}
		}
		for (i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
			cout<<"B["<<(i+1)<<"] 
			["<<(j+1)<<"] = " ;cin>>B[i][j];
			}
		}
		for (i=0; i<2; i++)
		{
			for(j=0; j<2; j++)O[i][j]=A[i][j]+B[i][j];
		}
		cout<<"Matriks A: " <<endl;
		for (i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				cout<<A[i][j]<<"\t";
			}
			cout<<endl;
		}
		cout<<endl;
 
		cout<<"Matriks B: "<<endl;
		for (i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				cout<<B[i][j]<<"\t";
			}
			cout<<endl;
 }
 }
		cout<<endl;
 
		cout<<"Hasil Penjumlahan Matriks A dan B: "<<endl;
		for (i=0; i<2; i++)
		{
			for(j=0; j<2; j++)	
			{
				cout<<O[i][j]<<"\t";
			}
			cout<<endl;
		}
		//Perkalian matriks
		for (int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
			{
				O[i][j]=0;
				temp=A[i][z]*B[z][j];
					O[i][j]=O[i][j]+temp;

				for(int z =0; z<2; z++)
				{

			}
		}
		//Hasil perkalian
		cout<<endl;
		cout<<"Hasil Perkalian Matriks A dan B: "<<endl;
		for (int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
			{
				cout<<O[i][j]<<"\t";
			}
			cout<<endl;
		}
		cout<<"\nHasil Pengurangan Matriks A dan B: "<<endl;
		for (int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
			{
				O[i][j]=A[i][j]-B[i][j];
				cout<<O[i][j]<<"\t";
			}
			cout<<endl;
		}
}

