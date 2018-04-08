// This solution uses pointers to create a matrix
// Other solution using vectors of vectors is available in file variableArray_1.cpp

int n,q;
int a,b;
int col;
cin >> n >> q;

int **mat = NULL;
mat = new int*[n];
for (int i=0; i<n; i++){
    cin >> col;
    mat[i] = new int[col];
    for (int j=0; j<col; j++)
        cin >> mat[i][j];    
}

for (int i=0; i<q; i++){
    cin >> a >> b; 
    cout << mat[a][b] << endl;
}

return 0;
}
