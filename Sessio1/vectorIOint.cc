#include "vectorIOint.hh"

/* Leer vector */
void leer_vector_int(vector<int>& v) {// version accion
  //cout<<"Escribe el tamaño del vector:"<<endl;
  int numEst;
  cin >> numEst;
  v = vector<int> (numEst);
  
  //cout<<"Escribe los elementos del vector:"<<endl;  
  for (int i=0; i<numEst;++i)
    cin >> v[i];
}

/* Escribir vector */
void escribir_vector_int(const vector<int>& v) {
	int lv = v.size();
  for (int i=0; i<lv;++i)
    cout << v[i] << " ";
  cout << endl;
}


void cercaMaxMin(int& max, int& min, vector<int>& v) {
	min = v[0];
	max = v[0];
	
	int lv = v.size();
	for (int i = 0; i < lv; i++) {
		if (min > v[i])
			min = v[i];
		if (max < v[i])
			max = v[i];
	}
	
}

int main() {
	vector <int> v(0);
	leer_vector_int(v);
	int min, max;
	cercaMaxMin(max, min, v);
	
	//escribir_vector_int(v);
	cout << max << ' ' <<  min << endl;
	
}
