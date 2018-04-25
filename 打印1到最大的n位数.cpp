void print1tomaxN(int n){
	if(n<=0)
		return;
	char* number=new char[n+1];
	memset(number,'0',n);
	number[n]='\0';
	while(!Increment(number)){
		Print(number);
	}
	delete []number;
}
bool Increment(char* number){
	bool flag=false;
	int cur=0;//进位 
	int len=strlen(number);
	for(int i=len-1;i>=0;i--){
		int sum=number[i]-'0'+cur;
		if(i==len-1){
			sum++;
		}
		if(sum>=10){      //产生进位 
			if(i==0){		//判断什么时候终止+1，使用strcmp函数比较每次number与“999…999”的大小，但是复杂度是O(n)
							//Increment函数复杂度为O(1)，只有当“999…999”+1产生进位的时候终止，此时Increment返回true	
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
			isbegin0=false;
		}
		if(!isbegin0){
			printf("%c",number[i]);
		}
	}
	printf("\t");
}
