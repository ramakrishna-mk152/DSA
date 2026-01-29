void shuffleArray(vector<int>&arr){
    int n=arr.size();
    srand(time(0));

    for(int i=n-1;i>0;i--){
        int j=rand()%(i+1);
        swap(arr[i],arr[j]);
    }
}

