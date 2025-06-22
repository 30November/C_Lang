typedef struct {
    int size,front,rear;
} MyCircularDeque;


MyCircularDeque* myCircularDequeCreate(int k) {
	
	MyCircularDeque* obj=malloc(sizeof(MyCircularDeque));
	if (obj)
	{
		obj->front=-1;
		obj->rear=-1
		obj->size=k;
	}
    
}

bool myCircularDequeInsertFront(MyCircularDeque* obj, int value) {
    if (obj->rear==(obj->front)%obj->size) return false;
    
}

bool myCircularDequeInsertLast(MyCircularDeque* obj, int value) {
    if (obj->rear==(obj->front)%obj->size) return false;
}

bool myCircularDequeDeleteFront(MyCircularDeque* obj) {
    if(MyCircularDeque.front==-1) return false; return true;
}

bool myCircularDequeDeleteLast(MyCircularDeque* obj) {
    if (rear==-1) return false; return true;
}

int myCircularDequeGetFront(MyCircularDeque* obj) {
    
}

int myCircularDequeGetRear(MyCircularDeque* obj) {
    
}

bool myCircularDequeIsEmpty(MyCircularDeque* obj) {
    
}

bool myCircularDequeIsFull(MyCircularDeque* obj) {
    if (front==(rear+1)%size)
}

void myCircularDequeFree(MyCircularDeque* obj) {
    
}
