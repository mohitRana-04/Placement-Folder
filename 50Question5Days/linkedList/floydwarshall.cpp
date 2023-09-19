LinkedList* floyd(LinkedList* head){
	if(head == NULL) return;

	LinkedList* slow = head;
	LinkedList* fast = head;

	while(slow && fast){
		slow = slow->next;
		fast = fast->next;
		if(fast) fast=fast->next;

		if(slow == fast){
			// means cycle is present
			return slow;
		}
	}
	// means cycle is not present
	return NULL;
}

LinkedList* starting(LinkedList* head){

	if(head == NULL) return NULL;

	LinkedList* Node = floyd(head);
	LinkedList* slow = head;

	while(slow != Node){
		slow = slow->next;
		Node = Node->next;
	}
	return slow;

}

LinkedList* removeloop(LinkedList* head){
	LinkedList* start = starting(head);

	LinkedList* temp = start;

	while(start->next != temp){
		start = start->next;
	}
	start->next = NULL;
}