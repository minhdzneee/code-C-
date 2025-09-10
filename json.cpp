#include <iostream>
#include <fstream>
#include "json.hpp"  // Thư viện nlohmann/json

using json = nlohmann::json;

int main() {
    // Tạo object JSON
    json data = {
        {"name", "DM"},
        {"age", 21},
        {"skills", {"C++", "Python"}},
        {"student", true}
    };

    // Ghi ra chuỗi
    std::cout << data.dump(4) << std::endl;

    // Ghi ra file
    std::ofstream file("data.json");
    file << data.dump(4);
    file.close();

    // Đọc từ file
    std::ifstream infile("data.json");
    json loaded;
    infile >> loaded;

    std::cout << "Tên: " << loaded["name"] << std::endl;
    std::cout << "Kỹ năng đầu tiên: " << loaded["skills"][0] << std::endl;

    return 0;
}