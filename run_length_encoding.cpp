#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char string[100];
	cout<<"Enter the string:";
	cin>>string;
	int len=strlen(string);
	int i=0;
	int j;
	int k=0;
	int count=1;
	int char_count[100];
	while(i<len){
		j=i;
		while(j<len-1 && string[j]==string[j+1]){
			count=count+1;
			j++;
		}
		cout<<i<<" and "<<count <<"\n";
		char_count[k++]=count;
		i=i+count;
		count=1;
	}

	for(i=0;i<k;i++){
		cout<<char_count[i]<<"\n";
	}
	
	i=0;
	j=0;
	while(i<len){
	    count=char_count[j++];
	    if(count!=1){
	        cout<<string[i]<<count;
	        i=i+count;
	    }
	    else{
	        cout<<string[i];
	        i=i+count;
	        
	    }
	    
	}
}
