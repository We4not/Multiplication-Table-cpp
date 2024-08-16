#include <iostream>
#include <vector>

void showTable(std::vector<std::vector<int>> table, std::string start = "None")
{
    if(start != "None")
    {
        std::cout << start << std::endl;
    }

    for(int y = 0; y < table.size(); y++)
    {
        for(int x = 0; x < table[y].size(); x++)
        {
            std::cout << table[y][x];
            if(x < table[y].size()-1)
            {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<std::vector<int>> table = {
        {2, 4, 1},
        {3, 8, 5},
        {6, 9, 7}
    };
    std::vector<std::vector<int>> multiplication_table = {
        {4},
        {2},
        {5}
    };
    std::vector<std::vector<int>> output_table;
    showTable(table, "Table:");
    showTable(multiplication_table, "Multiplication table:");
    std::cout << "multiplication occurs";
    for(int y = 0; y < table.size(); y++)
    {
        std::cout << ".";
        output_table.push_back({});
        for(int x = 0; x < table[y].size(); x++)
        {
            output_table[y].push_back(table[y][x] * multiplication_table[x][0]);
        }
    }
    std::cout << "\nFinished!";
    showTable(output_table, " Result is:");
    return 0;
}
