#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
};

class List{
public:
node* head;
};

class Graph{
public:
int V;
List* arr;
};

node* create_node(int dest){
node* newnode=(node* )malloc(sizeof(node));
newnode->data=dest;
newnode->next=NULL;
return newnode;
}

Graph* create_graph(int v){
Graph* graph=(Graph*)malloc(sizeof(Graph));
graph->V=v;
graph->arr=(List*)malloc(sizeof(List)*v);
int i=0;
for(int i=0;i<v;i++){
graph->arr[i].head=NULL;
}
return graph;
}


void addEdge(Graph* graph,int src,int dest){
node* temp=create_node(dest);
temp->next=graph->arr[src].head;
graph->arr[src].head=temp;

node* temp1=create_node(src);
temp1->next=graph->arr[dest].head;
graph->arr[dest].head=temp1;

}

void print_graph(Graph* graph){
for(int i=0;i<graph->V;i++){
node* trav=graph->arr[i].head;
cout<<i;
while(trav!=NULL){
cout<<"->"<<trav->data;
trav=trav->next;
}
cout<<endl;
}
}

main()
{

    int V = 4;
    Graph* graph = create_graph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    print_graph(graph);

    return 0;
}
