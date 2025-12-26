#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {};
	int student = 0 ;

	 std :: cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		std :: cout << "Student [" << student +1 << "]: ";
		cin >> grade;
		if(grade == '0'){
			break;
		}else if(grade == 'A'){
			count[0]++;
			student++;
		}else if(grade == 'B'){
			count[1]++;
			student++;
		}else if(grade == 'C'){
			count[2]++;
			student++;
		}else if(grade == 'D'){
			count[3]++;
			student++;
		}else if(grade == 'F'){
			count[4]++;
			student++;
		}else{ 
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	

	cout << "In total "<< student << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<" ";	
	
	return 0;
}

