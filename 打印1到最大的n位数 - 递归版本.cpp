void print1tomaxN(int n){
	if(n<=0)
		return;
	char* number=new char[n+1];
	number[n]='\0';
	for(int i=0;i<10;i++){
		number[0]=i+'0';
		print1tomaxNRecursively(number,n,0);
	} 
	delete []number;
}
void print1tomaxNRecursively(char* number,int length,int index){
	if(index==length-1){
		Print(number);
		return;
	}
	for(int i=0;i<10;i++){
		number[index+1]=i+'0';
		print1tomaxNRecursively(number,length,index+1);
	}
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
