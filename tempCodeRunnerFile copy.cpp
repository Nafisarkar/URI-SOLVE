
    while(cin>>x && x!=0){
        int array[x];
        for (size_t i = 0; i < x; i++)
        {
            cin>>array[i];
        }
        for(int i = 0; i < x; i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
