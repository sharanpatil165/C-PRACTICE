#include <stdio.h>

#define SIZE 3

void display(int cache[], int n) {
    printf("Cache: ");
    for(int i = 0; i < n; i++)
        printf("%d ", cache[i]);
    printf("\n");
}

int search(int cache[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(cache[i] == key)
            return i;
    return -1;
}

void moveToEnd(int cache[], int n, int index) {
    int temp = cache[index];
    for(int i = index; i < n-1; i++)
        cache[i] = cache[i+1];
    cache[n-1] = temp;
}

void insert(int cache[], int *n, int key) {

    int pos = search(cache, *n, key);

    if(pos != -1) {
        // already exists → move to recent
        moveToEnd(cache, *n, pos);
    } else {
        if(*n < SIZE) {
            cache[*n] = key;
            (*n)++;
        } else {
            // remove LRU (first element)
            for(int i = 0; i < SIZE-1; i++)
                cache[i] = cache[i+1];
            cache[SIZE-1] = key;
        }
    }
}

int main() {
    int cache[SIZE];
    int n = 0;

    int inputs[] = {1,2,3,1,4,5};
    int len = 6;

    for(int i = 0; i < len; i++) {
        printf("Access: %d\n", inputs[i]);
        insert(cache, &n, inputs[i]);
        display(cache, n);
    }

    return 0;
}