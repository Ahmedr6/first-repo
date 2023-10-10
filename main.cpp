#include <iostream>

using namespace std;

int main()
{
        int sum=0;
    float avg;
     int arr[1000];
    int x;
    printf("plz enter the size of the array \n");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        printf("plz enter the score of the subject number %d\n",i+1);
        scanf("%d",&arr[i]);
         printf("kill switch\n");
       sum+=arr[i];

    }
    avg=(float)sum/x;
    printf("%f",avg);

    return 0;
}
