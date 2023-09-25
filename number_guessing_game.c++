#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Specify a different directory for temporary files
    std::string tempDir = "C:/Your/Desired/Directory/";

    // Create a temporary file in the specified directory
    std::string tempFilePath = tempDir + "tempfile.txt";

    std::ofstream tempFile(tempFilePath);

    if (tempFile.is_open()) {
        std::cout << "Temporary file created successfully." << std::endl;
        tempFile.close();
    } else {
        std::cerr << "Error: Unable to create the temporary file." << std::endl;
    }

    return 0;
}
