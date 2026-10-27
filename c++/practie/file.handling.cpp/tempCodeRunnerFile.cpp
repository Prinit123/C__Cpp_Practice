ifstream file;
           char ch;
           file.open("example3.txt");

           while (file.get(ch))
           {
                      cout << ch;
           }
           