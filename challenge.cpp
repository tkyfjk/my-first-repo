#include <iostream>
using namespace std;



int main(){
	
	char hello[] = "fujiki takuya";
	
	cout<<"["<<hello<<"]を文字コードに帰ると"<< endl;
	for (int i=0; i< (int) sizeof hello; i++){
				cout<< (int) (unsigned char) hello[i] <<", ";
	}
			
			cout << endl;
	
		
}
