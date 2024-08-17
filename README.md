# Multiplication-Table-cpp
This is another [Multiplication-Table](https://github.com/We4not/Multiplication-Table), but it's writted on C++ <br>

# How this work?
First, we create a function:
``` c++
// Render table
void showTable(std::vector<std::vector<int>>, std::string start="None")
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
```
We'll explain why we created the function <br>

Then we create a input vector (but actually i call multidimensional vector):
``` c++
int main()
{
    // Input table (you can also change this table)
    std::vector<std::vector<int>> table = {
        {2, 4, 1},
        {3, 8, 5},
        {6, 9, 7}
    };
    ...

```
And multiplication table:
``` c++
    // Multiplication table (you can change this table)
    std::vector<std::vector<int>> multiplication_table = {
        {4},
        {2},
        {5}
    };
    ...
```

And finally output table:
``` c++
    // Output table. We write in this vector all result with input_table and multiplication_table
    std::vector<std::vector<int>> output_table;
```
Now we take each number from the input table and multiply it by each number from multiplication table and writting in output table. It all looks in code like this:
``` c++
    std::cout << "multiplication occurs";
    for(int y = 0; y < table.size(); y++)
    {
        std::cout << ".";
        output_table.push_back({});
        for(int x = 0; x < table[y].size(); x++)
        {
            output_table.push.back(table[y][x] * multiplication_table[x][0]);
        }
    }
    ...
```
In picture looks like this:
![icon](https://github.com/We4not/Multiplication-table/blob/main.prototype.png)
After we've done everything, all that remains is to display the information to the user like this:

``` c++
    // I forgot to add, that this is before multiply, not after
    showTable(table, "Table:");
    showTable(multiplication_table, "Multiplication table:");

    // After multiply
    std::cout << "\nFinished!";
    showTable(output_table, " Result is:");
    return 0;
} // end of int main()
```

And result is:
```
Table:
2, 4, 1
3, 8, 5
6, 9, 7

Multiplication table:
4
2
5

multiplication occurs...
Finished! Result is:
8, 8, 5
12, 16, 25
24, 18, 35
```

Oh yes, about the `showTable()` function.
How does it event work? Let's go back to the very beginning

## Function `showTable()`
What does the `std::string start="None"` variable do inside a function? Before displaying the table, we first write what is written inside the `start` variable, and then we display the table.
``` c++
void showTable(std::vector<std::vector<int>> table, std::string start = "None")
{
    if(start != "None")
    {
        std::cout << start << std::endl;
    }
    ...
```
If nothing is written to the `start` variable, then we skip this check <br>

How do we display the table on the screen? We go through x and y on the table which is specified in the `table` variable and print it to the screen.
``` c++
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
        std::cout << std::endl; // After completing the first cycle, we go to the next cycle y
    }
    std::cout << std::endl;
``` 

