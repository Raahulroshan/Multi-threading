#include <stdio.h>
#include <pthread.h>

void *alert(void *a){
    printf("Emergency alert received\n");
    return NULL;
}

void *ambulance(void *a){
    printf("Ambulance dispatched\n");
    printf("Patient reached hospital\n");
    return NULL;
}

int main(){
    pthread_t t1,t2;
    pthread_create(&t1,NULL,alert,NULL);
    pthread_join(t1,NULL);
    pthread_create(&t2,NULL,ambulance,NULL);
    pthread_join(t2,NULL);
    return 0;
}
