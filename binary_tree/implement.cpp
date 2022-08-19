#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
		//cout<<"Successfully created"<<endl;
	}
};
//fuction to preorder traversal
void preorder(struct Node* node){
	if(node==NULL)
		return ;
	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}

//fuction to postorder traversal
void postorder(struct Node* node){
	if(node==NULL)
		return ;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<" ";
}

//fuction for inorder traversal
void inorder(struct Node* node){
	if(node==NULL)
		return;
	inorder(node->left);
	cout<<node->data<<" ";
	inorder(node->right);
}

//fuction to print level order traversal
/*void levelorder(struct Node *root){
	vector<vector<int> > ans;
	if(root==NULL)
		cout<<" ";
	queue<struct Node*>q;
	vector<int> level;
	q.push(root);
	while(!q.empty()){
		int size=q.size();
		for(int i=0;i<size;i++){
			struct Node* node=q.front();
			q.pop();
			if(node->left!=NULL)
				q.push(node->left);
			if(node->right!=NULL)
				q.push(node->right);
			level.push_back(node->data);
		}
		ans.push_back(level);
	}
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<level.size();j++){
			cout<<ans[j]<<" ";
		}
	}
	
}*/

int main(){
	struct Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->left->right->left=new Node(6);
	root->right->left=new Node(7);
	root->right->right=new Node(8);
	root->right->right->left=new Node(9);
	root->right->right->right=new Node(10);
	cout<<"Preorder Traversal: "<<endl;
	preorder(root);
	cout<<endl;
	cout<<"Postorder Traversal: "<<endl;
	postorder(root);
	cout<<endl;
	cout<<"Inoreder Traversal: "<<endl;
	inorder(root);
	cout<<endl;
	cout<<"Levelorder Traversal: "<<endl;
	levelorder(root);

}

