bool findTriplet(Node* a,Node* b,Node* c,int X){
    unordered_map<int,pair<int,int>> mp;

    for(Node* p=a;p!=NULL;p=p->next){
        for(Node* q=b;q!=NULL;q=q->next){
            mp[p->data+q->data]={p->data,q->data};
        }
    }

    for(Node* r=c;r!=NULL;r=r->next){
        int need=X-r->data;
        if(mp.find(need)!=mp.end()){
            cout<<mp[need].first<<" "
                <<mp[need].second<<" "
                <<r->data;
            return true;
        }
    }
    return false;
}
