void displayItems() {
    cout << endl;
    
    if (top == -1){
        cout << " Stsck is Not defind" << endl;
    }
    else{
        for ( int i = top ; i >= 0 ; i--){
            cout <<" - "<< stack[i]<<" ";
        }
        cout << endl;
        
    }
}
