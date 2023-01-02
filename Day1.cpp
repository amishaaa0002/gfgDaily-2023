class Solution {
  public:
    vector<int> maximumValue(Node* node) {
        //code here
        
        vector<int>ans;
        
        queue<Node*>q;
        q.push(node);
        while(!q.empty()){
            
            int sz=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<sz;i++){
                Node* n=q.front();
                q.pop();
                maxi=max(maxi,n->data);
                if(n->left!=NULL){
                    q.push(n->left);
                }
                if(n->right!=NULL){
                    q.push(n->right);
                }
            }
            ans.push_back(maxi);
            
            
        }
        return ans;
    }
};