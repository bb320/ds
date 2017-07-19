5-60 연결 리스트의 노드 삽입
// 리스트 마지막 노드에 삽입 연산하며, itdata 값은 150이라고 가정함
void additNode(linkedList_h* H, listNode* preNode, int itdata) {
	listNode* NewNode;
	NewNode = (listNode*)malloc(sizeof(listNode));
	NewNode -> data = itdata;
	NewNode -> link = NULL;
	
	NewNode -> link = prevNode -> link;
	prevNode - > link = NewNode;
	return;
}

5-66 연결 리스트의 특정 노드 탐색
// 연결 리스트에서 특정 노드를 검색하여 반환하고자 하는 연산, itdata = 200
void searchNode(linkedList_h* H, int itdata) {
	listNode* tempNode;
	tempNode = H -> head;
	
	while(tempNode -> data != itdata) {
		tempNode = tempNode -> link;
	}
	printf("Search successful! \n");
}