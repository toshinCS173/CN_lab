#include<stdio.h>

void main()
{
    int bucket_size = 60;
    int inflow_rate = 0;
    int outflow_rate = 0;
    int remaining_size = 0;
    int present_data = -1;

    printf("\n Enter the size of the bucket : ");
    scanf("%d",&bucket_size);

    printf("\n Enter the output flow rate : ");
    scanf("%d",&outflow_rate);

    while(1)
    {
        printf("\n Do you have any data packets? (1->(yes) or 0->(no)): ");
        scanf("%d",&present_data);

        if(present_data == 1)
        {
            printf("\n Enter the input data flow rate : ");
            scanf("%d",&inflow_rate);

            if((remaining_size + inflow_rate) <= bucket_size)
            {
                remaining_size += inflow_rate;

                printf("\n The capacity of bucket (before output flow) : %d",remaining_size);
                remaining_size -= outflow_rate;
                printf("\n The capacity of bucket now : %d\n",remaining_size);
            }
            else
            {
                printf("\n Bucket is Full!!!!!!! Cannot accept the input!!!");
                printf("\n The present size of bucket now : %d\n",remaining_size);

            }
        }

        else
        {
            printf("\n The capacity of bucket (before output flow) : %d",remaining_size);
            remaining_size -= outflow_rate;
            printf("\n The capacity of bucket now : %d\n",remaining_size);
        }
    }
}




//output:
//Enter the size of the bucket : 60
//Enter the output flow rate : 5
//Do you have any data packets? (1->(yes) or 0->(no)): 1
//Enter the input data flow rate : 20
//The capacity of bucket (before output flow) : 20
 //The capacity of bucket now : 15
//Do you have any data packets? (1->(yes) or 0->(no)): 0
//The capacity of bucket (before output flow) : 15
// The capacity of bucket now : 10

// Do you have any data packets? (1->(yes) or 0->(no)): 1
// Enter the input data flow rate : 10
 //The capacity of bucket (before output flow) : 20
// The capacity of bucket now : 15

/ //Do you have any data packets? (1->(yes) or 0->(no)): 1
///Enter the input data flow rate : 60
 //Bucket is Full!!!!!!! Cannot accept the input!!!
 //The present size of bucket now : 15

 //Do you have any data packets? (1->(yes) or 0->(no)): ///
