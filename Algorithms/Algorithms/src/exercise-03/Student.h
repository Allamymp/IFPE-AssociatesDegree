#include <string>
#include <iostream>

class Student {
private:
    std::string name;
    std::string math;
public:
    Student() {
    }

    Student(const char *name, const char *math) :
            name(name), math(math) {
    }
    friend class Arrangement<Student>;

};

template<>
void Arrangement<Student>::set(int idx, const Student &student) {
    items[idx].name = student.name;
    items[idx].math = student.math;
    // atribua nome e mat individualmente para o item do array
    // isto é, pegue o aluno no array, e atribua cada campo um a um
}
template<>
void Arrangement<Student>::exibir() {
    for (int i = 0; i < tamanho; i++) {
        std::cout << "[Index:" << i << " Name:" << items[i].name << " Math= " << items[i].math << "]";
    }
}



