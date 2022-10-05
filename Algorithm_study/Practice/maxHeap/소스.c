#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 200

typedef struct {
	int key;
}element;

typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
}HeapType;

HeapType* create() {
	return (HeapType*)malloc(sizeof(HeapType));
}

void init(HeapType* h) {
	h->heap_size = 0;
}

void insert_max_heap(HeapType* h, element item) {
	int i = ++h->heap_size;
	while ((i != 1)&& (item.key > h->heap[i/2].key)) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;
}

element delete_max_heap(HeapType* h) {
	element item = h->heap[1];
	element temp = h->heap[h->heap_size--];
	int parent = 1;
	int child = 2;

	while (child <= h->heap_size) {
		if (h->heap[child].key < h->heap[child + 1].key)
			child++;
		if (temp.key > h->heap[child].key) break;
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}

void heap_sort(HeapType* heap, element k[]) {
	for (int i = 0; i < 4; i++) {
		insert_max_heap(heap, k[i]);
	}
	for (int i = 3; i >= 0; i--) {
		k[i] = delete_max_heap(heap);
	}
}

int main() {
	HeapType* heap;
	heap = create();
	init(heap);
	element key[4] = {1, 2, 3, 4};

	heap_sort(heap, key);

	for (int i = 0; i < 4; i++) {
		printf("%d ", key[i]);
	}
	
}