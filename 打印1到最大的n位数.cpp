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
	int cur=0;//��λ 
	int len=strlen(number);
	for(int i=len-1;i>=0;i--){
		int sum=number[i]-'0'+cur;
		if(i==len-1){
			sum++;
		}
		if(sum>=10){      //������λ 
			if(i==0){		//�ж�ʲôʱ����ֹ+1��ʹ��strcmp�����Ƚ�ÿ��number�롰999��999���Ĵ�С�����Ǹ��Ӷ���O(n)
							//Increment�������Ӷ�ΪO(1)��ֻ�е���999��999��+1������λ��ʱ����ֹ����ʱIncrement����true	
				flag=true;
			}
			else{
				sum-=10;
				cur=1;
				number[i]=sum+'0';
			}
		}
		else{			//��������λ 
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
