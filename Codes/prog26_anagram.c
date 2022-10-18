#include<stdio.h>
#include<string.h>

int anagram(char *p, char *q,int n){
    int cur,i,flag =0;
    int a[25];
    for(int i=0;i<n;i++)
        a[i]=0;
    i=0;
    for(int j =0;p[j];j++){
        cur = p[j];
        // printf("%c",cur);
        for(int k =0;q[k];k++){
            if(cur == q[k]){
                // printf("%c",q[k]);
                a[i++]=1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        // printf("%d",a[i]);
        if(a[i]!=1){
            flag =1;
            break;
        }
    }
    if(flag)
        return 0;
    else    
        return 1;


    
}

int main(){
    char str1[] ="silent";
    char str2[] ="listen";
    int n = strlen(str1);
    int m = strlen(str2);
    if(n==m){
    int a = anagram(str1,str2,n);
    if(a)
        printf("Given String is anagram");
    else
        printf("Given String is not anagram");
    }
    else
        printf("Given String is not anagram");
    return 0;
}