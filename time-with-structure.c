/* Define a structure named Time with members hours, minutes, and seconds. Write a C program to input two times, add them, and display the result in proper time format.*/
#include<stdio.h>
struct time{
    int hour;
    int minute;
    int second;
}t1,t2,result;
int main(){
    printf("\nEnter the values for time 1:\n");
    printf("\nEnter the hour = ");
    scanf("%d",&t1.hour);
    printf("\nEnter the minute = ");
    scanf("%d",&t1.minute);
    printf("\nEnter the second = ");
    scanf("%d",&t1.second);
    printf("\nThe time 1 (in hr:min:sec format) = %02d:%02d:%02d",t1.hour,t1.minute,t1.second);

    printf("\n\n\nEnter the values for time 2:\n");
    printf("\nEnter the hour = ");
    scanf("%d",&t2.hour);
    printf("\nEnter the minute = ");
    scanf("%d",&t2.minute);
    printf("\nEnter the second = ");
    scanf("%d",&t2.second);

    result.hour=t1.hour+t2.hour;
    result.minute=t1.minute+t2.minute;
    result.second=t1.second+t2.second;
    result.minute%=60;
    result.second%=60;
    
    printf("\nThe time 2 (in hr:min:sec format) = %02d:%02d:%02d",t2.hour,t2.minute,t2.second);

    printf("\n\nThe sum total of the time (in hour:min:sec format) = %02d:%02d:%02d",result.hour,result.minute,result.second);
    return 0;
}