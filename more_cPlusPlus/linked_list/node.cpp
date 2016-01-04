node * createnode(int value)
{
   node * newnodum = new node ;
   newnodum->nodeptr = NULL ;
   newnodum->value = value ;
   return newnodum ;
}

void push(node**root , int value)
{
   node * newnodum = createnode(value) ;
   newnodum->nodeptr = (*root) ;
   (*root) = newnodum ;
}

void print_list( node * root )
{
   for ( root = root ; root != NULL ; root = root->nodeptr )
   {
      std::cout<<root->value<<std::endl ;
   }
}
