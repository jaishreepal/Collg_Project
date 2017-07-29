#include<iostream>
using namespace std;
class names{
	char name[20];
	int size_of_name;
	public:
		
		names():size_of_name(0){
			
		}
		
		void get_name(){
			cout<<"Enter the name -----> "<<endl;
			cin.get(name,20);
		char p='\0';
		int q=0;
		while(name[q]!=p){
		  ++size_of_name;
			q++;
		}
			cout<<"Your name has ---->"<<size_of_name<<" characters"<<endl;
		}
		void letter(char[]);
		
};

void names::letter(char a[]){
/**************************FOR A*************************/
int ind=0;
while(a[ind]!='\0'){


	if(a[ind]=='a'){
		
	{
	for(int i=0;i<7;++i){
		if(i==0){
		for(int j=6;j>=i;--j){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	else if(i==4){
		for(int j=6;j>=i;--j){
			cout<<" ";
		}
			cout<<"*";
			
			
			for(int j=0;j<2*i;++j){
			cout<<"*";
		}
		cout<<"*"<<endl;
		}
	
	else{
	for(int j=6;j>=i;--j){
			cout<<" ";
		}
			cout<<"*";
			
			
			for(int j=0;j<2*i;++j){
			cout<<" ";
		}
		cout<<"*"<<endl;
		}
		
	
	}
	
	  }

}



/**************************   FOR 8   *************************/
	if(a[ind]==8){
		
	
	for(int i=0;i<7;++i){
		if(i==0||i==3||i==6){
		for(int j=3;j>=0;--j){
			cout<<" ";
		}
	
		for(int j=3;j>=0;--j){
			cout<<"* ";
		}
		cout<<endl;
}

else{
	for(int j=3;j>=0;--j){
			cout<<" ";
		}
	cout<<"*";
		for(int j=4;j>=0;--j){
			cout<<" ";
		}
		cout<<"*"<<endl;
}

		
	
	}
	
	  

}

/**************************   FOR o/0   *************************/
	if(a[ind]==0||a[ind]=='o'){
		
	
	for(int i=0;i<7;++i){
		if(i==0||i==6){
		for(int j=3;j>=0;--j){
			cout<<" ";
		}
	
		for(int j=3;j>=0;--j){
			cout<<"* ";
		}
		cout<<endl;
}

else{
	for(int j=3;j>=0;--j){
			cout<<" ";
		}
	cout<<"*";
		for(int j=4;j>=0;--j){
			cout<<" ";
		}
		cout<<"*"<<endl;
}

		
	
	}
	
	  

}
/**************************   FOR B   *************************/
	if(a[ind]=='b'){
		
	
	for(int i=0;i<7;++i){
		if(i==0||i==3||i==6){
		for(int j=3;j>=0;--j){
			cout<<" ";
		}
	
		for(int j=4;j>=0;--j){
			cout<<"* ";
		}
		cout<<endl;
}

else{
	for(int j=3;j>=0;--j){
			cout<<" ";
		}
	cout<<"*";
		for(int j=3;j>=0;--j){
			cout<<"  ";
		}
		cout<<"*"<<endl;
}

		
	
	}
	
	  

}

/**************************   FOR 8   *************************/
	if(a[ind]==81){
		
	
	for(int i=0;i<7;++i){
		if(i==0||i==3||i==6){
		for(int j=3;j>=0;--j){
			cout<<" ";
		}
	
		for(int j=3;j>=0;--j){
			cout<<" *";
		}
		cout<<endl;
}

else{
	for(int j=3;j>=0;--j){
			cout<<" ";
		}
	cout<<"*";
		for(int j=3;j>=0;--j){
			cout<<"  ";
		}
		cout<<"*"<<endl;
}

		
	
	}
	
	  

}
/**************************   FOR 3   *************************/
	if(a[ind]==3){
		
	
	for(int i=0;i<7;++i){
		if(i==0||i==3||i==6){
		for(int j=3;j>=0;--j){
			cout<<" ";
		}
	
		for(int j=3;j>=0;--j){
			cout<<"* ";
		}
		cout<<endl;
}

else{
	for(int j=3;j>=0;--j){
			cout<<" ";
		}
	
		for(int j=3;j>=0;--j){
			cout<<"  ";
		}
		cout<<"*"<<endl;
}

		
	
	}
	
	  

}

/**************************   FOR C   *************************/
if(a[ind]=='c'){
for(int i=0;i<7;++i){
	if(i==0||i==6){
		for(int j=0;j<3;++j){
			cout<<" ";
		}
		for(int k=0;k<3;++k){
		
		cout<<" *";
		
	}
	cout<<endl;
}
else{
	for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*"<<endl;
	
}


}
}

/**************************   FOR D   *************************/

if(a[ind]=='d'){


	
	
	for(int i=0;i<7;++i){
		if(i==0||i==6){
		for(int j=3;j>=0;--j){
			cout<<" ";
		}
	
		for(int j=4;j>=0;--j){
			cout<<"* ";
		}
		cout<<endl;
}

else{
	for(int j=3;j>=0;--j){
			cout<<" ";
		}
	cout<<"*";
		for(int j=3;j>=0;--j){
			cout<<"  ";
		}
		cout<<"*"<<endl;
}

		
	
	}
	
	  









           }//end of if 
           
           /**************************   FOR E   *************************/


if(a[ind]=='e'){
	
	
	
	
	for(int i=0;i<7;++i){
		if(i==0||i==3||i==6){
		for(int j=3;j>=0;--j){
			cout<<" ";
		}
	
		for(int j=4;j>=0;--j){
			cout<<"* ";
		}
		cout<<endl;
}

else{
	for(int j=3;j>=0;--j){
			cout<<" ";
		}
	cout<<"*"<<endl;
	
}

		
	
	}
	
	  
	
	
}//end of if

/**************************   FOR F   *************************/


if(a[ind]=='f'){
	
	
	
	
	for(int i=0;i<7;++i){
		if(i==0||i==3){
		for(int j=3;j>=0;--j){
			cout<<" ";
		}
	
		for(int j=4;j>=0;--j){
			cout<<"* ";
		}
		cout<<endl;
}

else{
	for(int j=3;j>=0;--j){
			cout<<" ";
		}
	cout<<"*"<<endl;
	
}

		
	
	}
	
	  
	
	
}//end of if



/**************************   FOR G   *************************/

if(a[ind]=='g'){
for(int i=0;i<7;++i){
	if(i==0||i==6){
		for(int j=0;j<3;++j){
			cout<<" ";
		}
		for(int k=0;k<3;++k){
		
		cout<<" *";
		
	}
	cout<<endl;
}
else if(i>3&&i<6){
		for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*";
		for(int k=0;k<3;++k){
		
		cout<<"  ";
		
	}
	cout<<"*"<<endl;
	
}
else if(i==3){
	for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*";
		for(int k=0;k<3;++k){
		
		cout<<" *";
		
	}
	cout<<endl;
	
}
	

else{
	for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*"<<endl;
		
	
}


}
}//end of if


/**********************************  FOR 6   *************************/

if(a[ind]==6){
for(int i=0;i<7;++i){
	if(i==0||i==6){
		for(int j=0;j<3;++j){
			cout<<" ";
		}
		for(int k=0;k<3;++k){
		
		cout<<" *";
		
	}
	cout<<endl;
}
else if(i>3&&i<6){
		for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*";
		for(int k=0;k<3;++k){
		
		cout<<"  ";
		
	}
	cout<<"*"<<endl;
	
}
else if(i==3){
	for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*";
		for(int k=0;k<3;++k){
		
		cout<<" *";
		
	}
	cout<<endl;
	
}
	

else{
	for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*"<<endl;
		
	
}


}
}//end of if


/**********************************  FOR H   *************************/
if(a[ind]=='h'){
for(int i=0;i<7;++i){
	if(i==0||i==6){
		for(int j=0;j<3;++j){
			cout<<" ";
		}
		for(int k=0;k<3;++k){
		
		cout<<" *";
		
	}
	cout<<endl;
}
else if(i>3&&i<6){
		for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*";
		for(int k=0;k<3;++k){
		
		cout<<"  ";
		
	}
	cout<<"*"<<endl;
	
}
else if(i==3){
	for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*";
		for(int k=0;k<3;++k){
		
		cout<<" *";
		
	}
	cout<<endl;
	
}
	

else{
	for(int j=0;j<3;++j){
			cout<<" ";
		}
		cout<<"*"<<endl;
		
	
}


}
}//end of if





++ind;
}//end of while
}//End of function

int main(){
names l1;
l1.get_name();
//char b='g';
l1.letter("abcdefg");
	return 0;
}//end of main()
