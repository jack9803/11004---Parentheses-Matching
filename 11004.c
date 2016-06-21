#include<stdio.h>
#include<stdlib.h>


char S[1010];


int main(){

int N,i;
char c;
scanf("%d",&N);
c=getchar();
int flag=0;
int top=0;
int emptyline=0;
for(i=0;i<N;i++){
    c=getchar();
    if(c=='\n'){
        emptyline=1;
    }else{
        while(1){

            if(c=='{'||c=='['||c=='('||c=='<'){
                top++;
                S[top]=c;
            }else if(c=='}'){
                if(S[top]=='{'){
                    top--;
                }else{
                    top++;
                    S[top]=c;
                }
            }else if(c==']'){
                if(S[top]=='['){
                    top--;
                }else{
                    top++;
                    S[top]=c;
                }
            }else if(c==')'){
                if(S[top]=='('){
                    top--;
                }else{
                    top++;
                    S[top]=c;
                }
            }else if(c=='>'){
                if(S[top]=='<'){
                    top--;
                }else{
                    top++;
                    S[top]=c;
                }
            }else if(c=='\n'){
                break;
            }
            c=getchar();
        }
    }
    if(emptyline==1){
        printf("Case %d: Yes\n",i+1);
    }else{
        if(top==0){
            printf("Case %d: Yes\n",i+1);
        }else{
            printf("Case %d: No\n",i+1);
        }
    }
    flag=0;
    top=0;
    emptyline=0;
}
return 0;
}
