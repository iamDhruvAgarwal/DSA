
    cin >> a >> b;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
        if(arr[i] > b){
            count++;
        }
    }