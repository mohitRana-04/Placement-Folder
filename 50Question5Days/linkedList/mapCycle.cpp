bool cyclemap(LinkedList* head){
	if(head == NULL);

	unordered_map<LinkedList*, bool> mp;

	while(head){

		if(mp[head]){
			return 1;
		}
		mp[head] = true;
		head = head->next;

	}
	return 0;
}