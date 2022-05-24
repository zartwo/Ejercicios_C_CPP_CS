	void prueba(string palabras) {


		string prueba = " ";
		int cont = 0, cont2 = 0;
		int pos1 = 0, pos2 = 1;
		string formacion = " ";
		string letra = " ", n1 = "", n2 = "", n3 = "", n4 = "", n5 = "", n6 = " ", n7 = "", n8 = "";
		string inicial = " ";
		int pos = 0;
		int largo = palabras.length();
		palabras[largo];

		//buscaremos la palabra pala
		for (int i = 0; i <= x; i++) {
			for (int j = 0; j <= y; j++) {

		
				letra = getPos(i, j); //extrae lo que contiene la matriz en esa posicion
				inicial = palabras[pos]; //extrae la posicion que vale pos de la palabra pasada

				if (letra == inicial) {//si lo que contiene letra es igual a lo que contiene inical entra


					if (cont == 0) {
						formacion += inicial; //formacion= a la primera letra extraida de la palabra ejemplo : "p" 
						pos++; //pos aumenta por lo que la proxima letra a extraer va ser 
						inicial = palabras[pos];//extrajo la siguiente letra = "a"

					}
					else if (cont > 0) {
						pos++;
						formacion += inicial;
						inicial = palabras[pos];

					}

					cont++;

					
					
					//extrae lo que contiene todas las posiciones adyacentes a la posicion matriz[i][j] donde
					//se encontro la primera letra para asi encontrar en que adyancecia se encuentra la siguiente letra
					// es decir la "a", los if son para evitar que intente obtener datos de posiciones que no existen

					if (i == 0 && j == 1 || i == 0 && j == 2 || i == 0 && j == 3) {

						n1 = getPos(i, j + 1);


						n2 = getPos(i, j - 1);


						n4 = getPos(i + 1, j);


						n7 = getPos(i + 1, j - 1);


						n8 = getPos(i + 1, j + 1);

					}

					else if (i == 0 && j == 0) {
						n1 = getPos(i, j + 1);


						n4 = getPos(i + 1, j);


						n8 = getPos(i + 1, j + 1);



					}
					else if (i == 0 && j == 4) {

						n2 = getPos(i, j - 1);


						n4 = getPos(i + 1, j);


						n7 = getPos(i + 1, j - 1);


					}
					else if (i == 1 && j == 4 || i == 2 && j == 4 || i == 3 && j == 4) {

						n3 = getPos(i - 1, j);


						n4 = getPos(i + 1, j);


						n2 = getPos(i, j - 1);


						n5 = getPos(i - 1, j - 1);


						n7 = getPos(i + 1, j - 1);


					}
					else if (i == 4 && j == 4) {

						n3 = getPos(i - 1, j);


						n2 = getPos(i, j - 1);


						n5 = getPos(i - 1, j - 1);


					}
					else if (i == 4 && j == 1 || i == 4 && j == 2 || i == 4 && j == 3) {

						n3 = getPos(i - 1, j);


						n1 = getPos(i, j + 1);


						n2 = getPos(i, j - 1);


						n6 = getPos(i - 1, j + 1);

						n5 = getPos(i - 1, j - 1);


					}
					else if (i == 4 && j == 0) {

						n1 = getPos(i, j + 1);


						n3 = getPos(i - 1, j);


						n6 = getPos(i - 1, j + 1);


					}
					else if (i == 1 && j == 0 || i == 2 && j == 0 || i == 3 && j == 0) {

						n1 = getPos(i, j + 1);


						n3 = getPos(i - 1, j);


						n4 = getPos(i + 1, j);


						n6 = getPos(i - 1, j + 1);


						n8 = getPos(i + 1, j + 1);


					}
					else if (i == 1 && j == 1 || i == 1 && j == 2 || i == 1 && j == 3 || i == 2 && j == 1 || i == 2 && j == 2 || i == 2 && j == 3
						|| i == 3 && j == 1 || i == 3 && j == 2 || i == 3 && j == 3) {


						n1 = getPos(i, j + 1);
						n2 = getPos(i, j - 1);
						n3 = getPos(i - 1, j);
						n4 = getPos(i + 1, j);
						n5 = getPos(i - 1, j - 1);
						n6 = getPos(i - 1, j + 1);
						n7 = getPos(i + 1, j - 1);
						n8 = getPos(i + 1, j + 1);

					}


					//aqui se valida si existe la palabra en las pos adyacentes 


					if (n1 == inicial) { //Si la matriz en esa pos == "A"
						formacion += inicial; //formacion=pa
						pos++; // pos aumenta para extraer la siguiente letra y ahora volver a repetir el proceso hasta completar la 
						//palabra buscada
						j += 1;	// como se encontro la letra en x posicion adyacencia se inicializa ya sea i o j para que inicie 
						//desde ahi en la proxima corrida y que verique sus adyacencias 



					}
					else if (n2 == inicial) {
						formacion += inicial;
						pos++;  //ru
						j = j - 1;

					}
					else if (n3 == inicial) {
						formacion += inicial;
						pos++;
						i = i - 1;


					}
					else if (n4 == inicial) {
						formacion += inicial;
						pos++;
						i += 1;

					}
					else if (n5 == inicial) {
						formacion += inicial;
						pos++;
						i = i - 1;
						j = j - 1;

					}
					else if (n6 == inicial) {
						formacion += inicial;
						pos++;
						i = i - 1;
						j += 1;


					}
					else if (n7 == inicial) {
						formacion += inicial;
						pos++;
						i += 1;
						j = j - 1;


					}
					else if (n8 == inicial) {
						formacion += inicial;
						pos++;
						i += 1;
						j += 1;




					}


				

					}
		

				}

			}

			

			cout << "|" << formacion << "|";
		}
	