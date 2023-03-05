struct node 
{
	struct node *prev;
	int data;
	struct node *next;
	
};

struct node *head=NULL;
struct node *tail=NULL;

void create_list()
{
	int i,n;
	printf("enter the number of nodes create:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data of node %d :",i);
		scanf("%d",&newnode->data);
		
		newnode->prev=NULL;
		newnode->next=NULL;
		
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
		void traverse_forward()
		{
			struct node *ptr;
			ptr=Head;
			while(ptr!=NULL)
			{
				printf("%d",ptr->data);
				ptr=ptr->next;
			}
			
			void search(struct node*head,int key)
			{
			    int i=0;
				struct node*ptr;
				ptr=Head;
				while(ptr!=NULL)
				{
					i++;
					if(ptr->data==key)
					{
						break;
					}
					else
					ptr=ptr->next;
				}
			printf("The element was found at %d poisition:",i);
			}
			
			int main()
			{
				printf("Enter the operation you want to perform");
				
			}
        }
    }
		
	
}
