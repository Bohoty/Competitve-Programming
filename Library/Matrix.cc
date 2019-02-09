struct Matrix{
	ll mat[5][5];
	Matrix(bool I){
		memset(mat, 0, sizeof mat);
		if(I)
			for(int j = 0; j < 5; j++)
				mat[j][j] = 1;
	}
	int * operator [] (int i){
		return mat[i];
	}
	friend Matrix operator * (Matrix A, Matrix B){
		Matrix ret;
		for(int i = 0; i < 5; i++)
			for(int j = 0; j < 5; j++)
				for(int k = 0; k < 6; k++)
					ret[i][j] = (ret[i][j] + A[i][k] * B[k][j]) % MOD;
		return ret;
	}
};
