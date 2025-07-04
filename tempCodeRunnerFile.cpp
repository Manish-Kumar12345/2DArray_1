for(int i = 0; i < m; i ++){
        for(int j = i; j < m; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        
    }