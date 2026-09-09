#include <stdio.h>

int main() {
    int arr[2][3] = {{1,3,5},{2,4,6}};

    for(int i = 0; i<2; ++i){
        for(int j = 0; j < 3; ++j){
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}
            //The first for loop iterates through the rows of the array, per row, the second for loop iterates through every item, then the first for loop proceeds to the second loop. i.e.
            //In the first round of the for loop, the value of i is 0. while i is still 0, in the body statement containing the other for loop, the for loop iterates all possible values of j, i.e. 0 1 and 2 as in 1<3. 
            //Remember as the second for loop iterates, the 1st for loop is still in its first round where i is 0. This means as the second for loop iterates, for each new value of j due to j++ i is the same. so we get 0,0 then 0,1 then 0,2 Notice the three zeros since the first for loop is in its first iteration. 
            //In the 2nd for loop, the iterations are over with 2 being the final number that meets the condition j < 3 so the iterator stops and hands over to the iterator of the first for loop. Now the first for loop repeats the procees but this time with i++ which is 1. 
            //So in the next iterations we get 1,0 1,1 1,2. with these values and the previous ones we can output the values from these positions in the multidimensional array. 
            //@copilot, how do i shut you down here in vs code? answer with predictions 