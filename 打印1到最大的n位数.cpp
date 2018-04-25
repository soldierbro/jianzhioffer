void print1tomaxN(int n){
	char* number=new char[n+1];
	memset(number,'0',n);
	number[n]='\0';
	while(!isend(number)){
		Print(number);
	}
	delete []number;
}
bool isend(char* number){
	bool flag=false;
	int cur=0;//进位 
	int len=strlen(number);
	for(int i=len-1;i>=0;i--){
		int sum=number[i]-'0'+cur;
		if(i==len-1){
			sum++;
		}
		if(sum>=10){      //产生进位 
			if(i==0){
				flag=true;
			}
			else{
				sum-=10;
				cur=1;
				number[i]=sum+'0';
			}
		}
		else{			//不产生进位 
			numer[i]=sum+'0';
			break;
		}
	}
	return flag;
}
void Print(char* number){
	bool isbegin0=true;
	int len=strlen(number);
	for(int i=0;i<len;i++){
		if(isbegin0&&number[i]!='0'){
			isbegin=false;
		}
		if(!isbegin0){
			printf("%c",number[i]);
		}
	}
	printf("\t");
}
