void deletenode(int value)
{
if(head == nullptr)
{
cout << "List is empty" <<endl;
return;
}
node* temp = head;
  while(temp != nullptr && temp->data != value)
    temp = temp->next;
}
