void mx_printchar(char c);

void printUpperEdge(int n);

void printUpperPart(int n);

void printMiddleEdge(int n, int i);

void printMiddlePart(int n);

void printFarCorner(int n);

void printLowerPart(int n);

void printLowerEdge(int n);

void mx_cube(int n){

  if(n > 1){

    for(int i = 0; i < 4 + n + n / 2; i++){

      if(i == 0)
        printUpperEdge(n);

      if(i > 0 && i < n / 2 + 1){

        printUpperPart(n);

        i = n / 2 + 1;
      }

      if(i == (n / 2 + 1))
        printMiddleEdge(n,i);

      if(i > ((n / 2) + 1) && i < n + 1)
        printMiddlePart(n);

      if(i == n)
	printFarCorner(n);

      if(i > n && i != 3 + n + n / 2){

        printLowerPart(n);

        i = 3 + n + n / 2;
      }

      if(i == 3 + n + n / 2)
        printLowerEdge(n);

      
    }
  }
}

void printUpperEdge(int n){
	for(int j = 0; j < n / 2 + 1; j++)

          mx_printchar(' ');

        mx_printchar('+');

        for(int j = 0; j < n * 2; j++)

          mx_printchar('-');

        mx_printchar('+');

        mx_printchar('\n');
}

void printUpperPart(int n){
	for(int j = 0; j < n / 2; j++){

          for(int k = 0; k < n / 2 - j; k++)

            mx_printchar(' ');

          mx_printchar('/');

          for(int k = 0; k < n * 2; k++)

            mx_printchar(' ');

          mx_printchar('/');

          for(int k = 0; k < j; k++)

            mx_printchar(' ');

          mx_printchar('|');

          mx_printchar('\n');

        }
}	

void printMiddleEdge(int n, int i){
	mx_printchar('+');

        for(int j = 0; j < n * 2; j++)

          mx_printchar('-');

        mx_printchar('+');

        for(int j = 0; j < i - 1; j++)

          mx_printchar(' ');

        mx_printchar('|');

        mx_printchar('\n');
}

void printMiddlePart(int n){
	mx_printchar('|');

        for(int j = 0; j < n * 2; j++)

          mx_printchar(' ');

        mx_printchar('|');

        for(int j = 0; j < n / 2; j++)

          mx_printchar(' ');

        mx_printchar('|');

        mx_printchar('\n');
}

void printFarCorner(int n){
	mx_printchar('|');

        for(int j = 0; j < n * 2; j++)

          mx_printchar(' ');

        mx_printchar('|');

        for(int j = 0; j < n / 2; j++)

          mx_printchar(' ');

        mx_printchar('+');

        mx_printchar('\n');
}

void printLowerPart(int n){
	for(int j = 0; j < n / 2; j++){

          mx_printchar('|');

          for(int k = 0; k < n * 2; k++)

            mx_printchar(' ');

          mx_printchar('|');

          for(int k = 0; k < n / 2 - (j + 1); k++)

            mx_printchar(' ');

          mx_printchar('/');

          mx_printchar('\n');
	}
}

void printLowerEdge(int n){
	mx_printchar('+');

        for(int j = 0; j < n * 2; j++)

          mx_printchar('-');

        mx_printchar('+');

        mx_printchar('\n');
}
