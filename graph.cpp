




//#include <iostream>
//using namespace std;
//
//struct Graph{
//	int V;
//	int E;
//	int **adj;
//};
//
//struct Graph* adjmatrixOfgraph(){
//	int u,i,v;
//	 Graph* adjmatrixOfgraph= new Graph();
//	if(!adjmatrixOfgraph){
//		cout<<"memory error";
//		
//	}
//	cout<<"enter the number of nodes and number of edges"<<endl;
//	cin>>adjmatrixOfgraph->V;
//	cin>>adjmatrixOfgraph->E;
//	*adjmatrixOfgraph->adj = new int[adjmatrixOfgraph->V *adjmatrixOfgraph->V];
//	for (u=0;u<adjmatrixOfgraph->V;u++){
//		for(v=0;v<adjmatrixOfgraph->V;v++){
//			adjmatrixOfgraph->adj[u][v]=0  ;
//			
//		}
//	}
//	
//	cout<<"Enter the number of edges";
//	for(i=0; i<	adjmatrixOfgraph->E;i++){
//		cin>>u,v;
//			adjmatrixOfgraph->adj[u][v]=1;
//			adjmatrixOfgraph->adj[v][u]=1;
//	}
//	return 	adjmatrixOfgraph;
//}
//
//int main() {
//  Graph* graph = adjmatrixOfgraph();
//
//  // Print out adjacency matrix
//  for (int i = 0; i < graph->V; i++) {
//    for (int j = 0; j < graph->V; j++) {
//      std::cout << graph->adj[i][j] << " ";
//    }
//    std::cout << std::endl;
//  }
//
//  return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct Graph{
//	int V;
//	int E;
//	int **adj;
//};
//
//struct Graph* adjmatrixOfgraph(){
//	int u,i,v;
//	 Graph* adjmatrixOfgraph= new Graph();
//	if(!adjmatrixOfgraph){
//		cout<<"memory error";
//		
//	}
//	cout<<"enter the number of nodes and number of edges"<<endl;
//	cin>>adjmatrixOfgraph->V;
//	cin>>adjmatrixOfgraph->E;
//	*adjmatrixOfgraph->adj = new int[adjmatrixOfgraph->V *adjmatrixOfgraph->V];
//	for (u=0;u<adjmatrixOfgraph->V;u++){
//		for(v=0;v<adjmatrixOfgraph->V;v++){
//			adjmatrixOfgraph->adj[u][v]=0  ;
//			
//		}
//	}
//	
//	cout<<"Enter the number of edges";
//	for(i=0; i<	adjmatrixOfgraph->E;i++){
//		cin>>u,v;
//			adjmatrixOfgraph->adj[u][v]=1;
//			adjmatrixOfgraph->adj[v][u]=1;
//	}
//	return 	adjmatrixOfgraph;
//}
//
//int main() {
//  Graph* graph = adjmatrixOfgraph();
//
//  // Print out adjacency matrix
//  for (int i = 0; i < graph->V; i++) {
//    for (int j = 0; j < graph->V; j++) {
//      std::cout << graph->adj[i][j] << " ";
//    }
//    std::cout << std::endl;
//  }
//
//  return 0;
//}


//#include <iostream>
//
//#include <stack>
//#include <string>
//using namespace std;
//
//int main(){
//    stack<char> stringstack1;
//    stack<char> stringstack2;
//    string word = "Data Structures";
//    int size = sizeof(word);
// 
//    for (int i = 0; i < size; i++)
//    {
//        stringstack1.push(word[i]);
//    }
//
//    for (int i = 0; i < size; i++)
//    {
//        char c = stringstack1.top();
//        stringstack1.pop();
//        stringstack2.push(c);
//    }
//    // Print Stack
//    for (int i = 0; i < int(stringstack2.size()) + 1; i++)
//    {
//        cout << stringstack2.top();
//        stringstack2.pop();
//    }
//    cout<<int(stringstack2.size())+1;
//    return 0;
//}


//#include<iostream> 
//#include <list> 
//using namespace std; 

//void push(int stack[],int &top,int max,int item){
//	if(top==max-1){
//		cout<<"stack overflow"<<endl;
//		return;
//	}else{
//	
//	top++;
//	stack[top]=item;	
//
//}
//}
//
//void pop(int stack[],int &top){
//	if(top==-1){
//		cout<<"underflow"<<endl;
//		return;
//	}
////	item==stack[top];
//	top--;
//	return;
//}
//
//void display(int &top, int s[]){
//   if(top==-1){
//      cout<<"stack underflow"<<endl;
//   }else{
//      for(int i=top; i>=0; i--){
//         cout<<s[i]<<" ";
//      }
//      cout<<endl;
//   }
//}
//
//int main()
//{
//    int value,item;
//  int top=-1;  
// int a[3];
// int max=sizeof(a)/sizeof(a[0]);
// 
//cout<<"1) Push in stack"<<endl;
//   cout<<"2) Pop from stack"<<endl;
//   cout<<"3) Display stack"<<endl;
//   cout<<"4) Exit"<<endl;
// while(value!=4){
//      cout<<"Enter choice: "<<endl;
//      cin>>value;
//      switch(value) {
//         case 1: {
//            cout<<"Enter value to be pushed:"<<endl;
//            cin>>item;
//            push(a,top,max,item);
//            break;
//         }
//         case 2: {
//            pop(a,top);
//            break;
//         }
//         case 3: {
//            display(top,a);
//            break;
//         }
//         case 4: {
//            cout<<"Exit"<<endl;
//            break;
//         }
//         default: {
//            cout<<"Invalid Choice"<<endl;
//         }
//      }
//   }
//   
//
//return 0;
//}













//class  Graph	{ 
//    int v; 
//    list <int>*listOfVertices	;    
//	 public: 
//        Graph(int v){ 
//            this->v=v; 
//            listOfVertices=new list<int>[v]; 
//        } 
//        void addEdge(int x, int	  y ){ 
//            listOfVertices[x].push_back	( y ) ; 
//            listOfVertices[y].push_back(x); 
// 	 
//        } 
// 	 
//void printAdjacencylist(){	 
//    for (int i=0;i<v;i++){ 
//        cout<<"vertex"<<" "<<i <<	"->"	; 
//        for(int j : listOfVertices[ i ]){	   // iterate j in range of listOfVertices[i]	 
//            cout<<" "<<j<<","; 
//        }         cout	<<endl; 
//    } 
//    } }; int main(){	 
//    int v; 
//    Graph  g ( 4 ) ; 
//    g.addEdge(0 ,1); 
//    g.addEdge	(0,2 ) ; 
//    g.addEdge( 1 , 2 ) ; 
//    g.addEdge(2,3); 
//    g.printAdjacencylist();// calling function 
//	} 


//#include <iostream> 
//using namespace  std	; 
//#define n 	4 // because 4 nodes in the given graph  
//void addedge	
//(int  graph	[n][n]	,int	  i , int j){ 
//    graph[i][j]=1; 
//    graph[j][i]=1;// because graph is undirected 
//} 
//int main(){	 
//    int graph[n][n]={0} ; 
//    addedge(graph,0,1); 
//    addedge(graph,0 , 2 ) ;     
//	addedge(graph,1,2);     
//	addedge	( graph,2 , 3 ) ; 
// 	 
//    cout<<"Adjacency matrix\n"<<endl; 
//    for(int i=0;i<n;i++){         
//	for(int j=0;j<n;j++){             
//	cout<<graph[i][j]<<" "; 
//        } 
//        cout<<endl; 
//    }  
//} 







//# include <iostream>
//using namespace std;
// 
//void insert(int k ,int e, int &n, int a[]){
//	int j=n-1;
//	while(j>=k){
//		a[j+1]=a[j];
//		j--;
//	}
//	a[k]=e;
//	n=n+1;
//}
//
//void traverse(int &n, int a[]){
//	int j=0;
//	while(j<n){
//		cout<<a[j]<<" ";
//		j++;
//	}
//	cout<<endl;
//	
//}
//
//int search (int e, int a[] , int &n){
//	a[n]=e;
//	int loc=0;
//	while(a[loc]!=e){
//		loc=loc+1;
//	}
//	if(loc==n){
//	 loc=-1;
//	}
//	return loc;
//	
//}
//int bsearch( int e , int up,int a[]){
//	int loc;
//	int beg=0;
//	int end=up;
//	int mid=(beg+end)/2;
//	while(beg<=end && a[mid]!=e ){
//		if(e>a[mid]){
//			beg=mid+1;
//		}else{
//			end=mid-1;
//		}
//		mid=(beg+end)/2;
//	}
//	if (a[mid]==e){
//		loc= mid;
//	}else{
//	
//	loc=-1;
//	}
//	return loc;
//	
//}
//void sort(int a[],int n){
//	for(int i=0; i<=n-1; i++){
//		for(int j=0; j<n-i-1; j++){
//			if(a[j]>a[j+1]){
//				int temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//			
//		}
//	}
//}
//void deletion(int &n, int a[]){
//	int j=n-1;
//	while(j<n-1){
//		a[j+1]=a[j];
//		j--;
//	}
//	n=n-1;
//}
//
//int main(){
//    int A[6]={6,5,4,3,2,1};
//    
//    int n = sizeof(A)/sizeof(A[0]);
//    sort( A,n);
//    traverse(n,A);
//    int s1=bsearch(2,5,A);
//    cout<<s1<<endl;
//    int k =2;
//    int item=5;
//    insert(k,item,n,A);
//    int s=search(7,A,n);
//    cout<<s<<endl;
//    
//
////    traverse(n,A);
////    deletion(n,A);
////    traverse(n,A);
//}
