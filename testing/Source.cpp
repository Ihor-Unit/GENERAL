#include <iostream>

using namespace std;

void BSSgen() {
	int p = 67;
	int q = 53;
	int h = 32;
	int x = 517;
	int n = p * q;
	long int S[21], G[21];
	S[0] = x;
	G[0] = S[0] % h;

	for (int i = 1; i <= 20; i++) {
		cout << "S[" << i << "] = " << S[i-1] << "^2 mod" << n << " = ";
		S[i] = (S[i - 1] * S[i - 1]) % n;
		cout << S[i] << endl;

		G[i] = S[i] % h;
		cout << "G[" << i << "] = " << S[i] << " mod" << h << " = " << G[i] <<"\n\n";

	}
}

void modRC4() {
	int key[6] = { 1, 0, 0, 0, 0, 0 };
	int S[32];

	for (int i = 0; i < 32; i++) {
		S[i] = i;
	}

	int j = 0;
	for (int i = 0; i < 32; i++) {
		j = (j + S[i] + key[(i % 6)]) % 32;
		cout << "S[" << i << "] = " << j << endl;
		swap<int>(S[i], S[j]);
	}

	j = 0;
	int i = 0;
	int K;
	for (int H = 0; H < 32; H++) {
		i = (i + 1)    % 32;
		j = (j + S[i]) % 32;
		swap<int>(S[i], S[j]);
		K = S[(S[i] + S[j]) % 32];
		cout << "K = " << K << endl;
	}
}

int main() {
	//BSSgen();
	modRC4();

}