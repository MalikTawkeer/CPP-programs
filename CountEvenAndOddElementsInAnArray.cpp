    // COUNT EVEN ODD ELEMENTS IN AN ARRAY
    #include<iostream>
    using namespace std;
    int main()
    {
        int arr[10];
        int even=0;
        int odd=0;
        int i;
        for( i=0;i<10;i++)
        {
        printf("\nEnter value for arr[%d]:",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2)
        {
            even++;
        }
        else{odd++;}
        }
        printf("Even=%d , \tOdd=%d",odd,even);
        return 0;
    }