 #include<iostream>
using namespace std;

int main(){
	int grade,
	aCount = 0,
	bCount = 0,
	cCount = 0,
	dCount = 0,
	fCount = 0;
	string rien="Incorrecet grade ";
	
	cout<<"Enter the letter grades."<<endl
		<<"Enter the EOF character to end input."<<endl;
		
		while ((grade = cin.get()) != EOF){		
			
				
				if(grade=='A'|| grade=='a')
						++aCount;				
				
					else if(grade=='B'|| grade=='b')
						++bCount;
					
					else if(grade=='C'|| grade=='c')
						++cCount;
					
					else if(grade=='D'|| grade=='d')
						++dCount;
					
					else if(grade=='F'|| grade=='f')
						++fCount;
				 
						
			}		
										
			
			cout<<"Total for each letter grade are: "
			<<"\nA : " <<aCount
			<<"\nB : " <<bCount
			<<"\nC : " <<cCount
			<<"\nD : " <<dCount
			<<"\nF : " <<fCount <<endl;
		return 0;
			
}

