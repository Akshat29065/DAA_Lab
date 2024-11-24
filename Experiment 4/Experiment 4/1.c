#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int start;
    int finish;
} Activity;
int compare(const void *a, const void *b){
    Activity *activityA = (Activity *)a;
    Activity *activityB = (Activity *)b;
    return activityA->finish - activityB->finish;
}
void activitySelection(Activity activities[], int n){
    qsort(activities, n, sizeof(Activity), compare);
    printf("Selected activities:\n");
    printf("Start: %d, Finish: %d\n", activities[0].start, activities[0].finish);
    int lastFinishTime = activities[0].finish; 
    for (int i = 1; i < n; i++){
        if (activities[i].start >= lastFinishTime) {
            printf("Start: %d, Finish: %d\n", activities[i].start, activities[i].finish);
            lastFinishTime = activities[i].finish;
        }
    }
}
int main(){
    Activity activities[] = {
        {1, 4}, {3, 5}, {0, 6}, {5, 7}, {8, 9}, {5, 9}
    };  
    int n = sizeof(activities) / sizeof(activities[0]);
    activitySelection(activities, n); 
    return 0;
}
