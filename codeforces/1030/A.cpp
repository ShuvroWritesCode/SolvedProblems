#include<stdio.h>

int main(){
    int opinion, sum;
    scanf("%d", &opinion);
    int arr[opinion], i;
    for(i=0; i<opinion; i++){
        scanf("%d ", &arr[i]);
        sum += arr[i];
    }
    if(sum == 0){
        printf("EASY\n");
    }
    else printf("HARD\n");
    return 0;
}
