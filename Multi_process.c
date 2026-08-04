#include <stdio.h>
#include <pthread.h>

void *alert(void *a){
    printf("Emergency detected\n");
    return NULL;
}

void *ambulance(void *a){
    printf("Ambulance moving\n");
    printf("Patient admitted\n");
    return NULL;
}

int main(){
    pthread_t t1,t2;
    pthread_create(&t1,NULL,alert,NULL);
    pthread_create(&t2,NULL,ambulance,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    return 0;
}
