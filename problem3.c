#include<stdio.h>
#include<stdlib.h>

void NGE(int size, int* numarr){
    int result[size];
    int resultTop = 0;

    int current[size];
    int currentTop = 0;

    for(int i = size-1; i >= 0; i--){
        int item = numarr[i];
        //result에 값이 있다
        if(resultTop > 0 ){
            for(int i = currentTop-1; i >= 0; i--){
                //오른쪽 수가 클때
                if(item < current[i]){
                    result[resultTop] = current[i];
                    current[currentTop] = item;
                    resultTop++;
                    currentTop++;
                    break;
                }
                
                //오른쪽에 자기보다 큰 수가 없을 때
                if(i ==0){
                    result[resultTop] = -1;
                    current[currentTop] = item;
                    resultTop++;
                    currentTop++;
                }
            }
        }
        //result에 값이 없다
        else{
            result[resultTop] = -1;
            current[currentTop] = item;
            currentTop++;
            resultTop++;
        }
    }

    //결과 출력
    for(int i = resultTop-1 ; i >= 0; i-- ){
        printf( "%d ",result[i]);
    }
}

int main(){
    int num;
    scanf("%d", &num);
    int *testarr = malloc(sizeof(int) * num);
    for(int i = 0 ; i<num; i++){
        scanf("%d", &testarr[i]);
    }

    NGE(num, testarr);
    return 0;
}