//CS23001
//LAB 4
//COLE KAMINSKI
//FEBRUARY 8, 2022



 int main() {

    std::ifstream file ("data1-1.txt");
    if(!file.is_open()) {
        std::cout << "Unable to open file\n";
        return 1;
    }

    char ch;
    file.get(ch);
    while(!file.eof()) {
        std::cout << ch;
        file.get(ch);
    }
    std::cout << '\n';
    file.close();
    return 0;
  }
