int sum (int n);  
int main()  
{  
    int n,s;  
    printf("Enter the number : ");  
    scanf("%d",&n);  
    s = sum(n);  
    printf("sum = %d",s);  
}  
int sum(int n)  
{  
    if (n==0)  
    {  
        return 0;  
    }  
    else if ( n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n+sum(n-1);  
    }  
}  
