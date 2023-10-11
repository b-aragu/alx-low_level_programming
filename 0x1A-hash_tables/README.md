# Hash Tables in C

## Introduction
- Briefly introduce the concept of hash tables and their relevance in computer science and programming.

## What is a Hash Function?
- Explain what a hash function is.
- Discuss the purpose of a hash function in hash table operations.
- Provide examples of hash functions in C.

## What Makes a Good Hash Function
- Define the characteristics of a good hash function.
- Discuss the importance of a balanced distribution of keys.
- Highlight the factors to consider when designing or selecting a hash function.

## What is a Hash Table?
- Define what a hash table is and how it works.
- Explain the key-value storage concept in hash tables.
- Describe the structure of a hash table and its components in C.

## How to Use Hash Tables in C
- Show how to create and initialize a hash table in C.
- Explain how to insert, retrieve, and delete elements in a hash table.
- Provide example code for these operations.

## Collisions and Collision Resolution
- Define what a collision is in the context of hash tables.
- Discuss the common causes of collisions.
- Explain various methods for dealing with collisions, such as chaining and open addressing.
- Provide code examples for collision resolution techniques.

## Advantages of Hash Tables
- Enumerate the advantages of using hash tables, such as fast data retrieval and storage.
- Discuss scenarios where hash tables are particularly useful.

## Drawbacks of Hash Tables
- Highlight the limitations and potential drawbacks of hash tables, such as memory usage and collision handling complexities.

## Common Use Cases of Hash Tables
- Explore the most common use cases for hash tables, including:
  - Implementing associative arrays.
  - Caching data for efficient access.
  - Solving problems in algorithmic competitions.
  - Implementing data structures like sets and maps.

- A hashtable is a data structure used to store info with 2 major components:
1. Key 
2. Value

- It is a way to implement an associative array.
- It is based on the concept of hashing which involves converting a key into a unique numerical value called a `hash code.
- The hash code is then used as an _index_ to store the value in an array
## How Does a Hash Table Work?

1. **Hash Function**: The first step in using a hash table is to define a hash function. A hash function takes a key as input and computes a hash code. The hash code should be deterministic, meaning that the same key should always produce the same hash code.
    
2. **Array and Buckets**: The hash table uses an array to store the key-value pairs. Each element in the array is called a "bucket." The number of buckets is typically predetermined and is usually a prime number for better distribution.
    
3. **Hash Code to Index**: Once the hash code is computed, it needs to be mapped to an index in the array. This is done using a process called "hashing." A common approach is to use the modulus operator `%` to obtain the remainder of dividing the hash code by the number of buckets. This ensures that the index is within the valid range of the array.
    
4. **Collision Handling**: Since multiple keys can produce the same hash code (known as a collision), we need a strategy to handle collisions. There are different collision resolution techniques, but one commonly used method is separate chaining. In separate chaining, each bucket contains a linked list. When a collision occurs, the new key-value pair is simply appended to the linked list at that bucket.
    
5. **Insertion**: To insert a key-value pair into a hash table, we follow these steps:
    
    - Compute the hash code for the key.
    - Map the hash code to an index using the hashing technique.
    - If there is no collision (i.e., the bucket is empty), create a new node and store the key-value pair in the bucket.
    - If a collision occurs, append a new node to the linked list in the bucket.
6. **Retrieval**: To retrieve a value from the hash table:
    
    - Compute the hash code for the given key.
    - Map the hash code to an index.
    - Traverse the linked list in the corresponding bucket until the key is found or the end of the list is reached.

## Implementing a Hash Table in C
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

// Structure for each node in the linked list
typedef struct Node {
    char* key;
    int value;
    struct Node* next;
} Node;

// Structure for the hash table
typedef struct {
    Node* buckets[TABLE_SIZE];
} HashTable;

// Hash function
unsigned int hash(const char* key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash * 31) + *key;
        key++;
    }
    return hash % TABLE_SIZE;
}

// Insert a key-value pair into the hash table
void insert(HashTable* table, const char* key, int value) {
    unsigned int index = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = strdup(key);
    newNode->value = value;
    newNode->next = NULL;

    if (table->buckets[index] == NULL) {
        table->buckets[index] = newNode;
    } else {
        Node* current = table->buckets[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Retrieve the value associated with a key from the hash table
int get(HashTable* table, const char* key) {
    unsigned int index = hash(key);
    Node* current = table->buckets[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return -1; // Key not found
}

// Entry point of the program
int main() {
    HashTable table;
    memset(table.buckets, 0, sizeof(table.buckets)); // Initialize buckets to NULL

    insert(&table, "apple", 5);
    insert(&table, "banana", 10);

    int appleValue = get(&table, "apple");
    printf("Value for 'apple': %d\n", appleValue); // Output: 5

    int bananaValue = get(&table, "banana");
    printf("Value for 'banana': %d\n", bananaValue); // Output: 10

    return 0;
}

```
## Conclusion

Hash tables are a powerful data structure for efficient key-value pair storage and retrieval. By understanding the concepts behind hash tables and their implementation in C, you can leverage this data structure in your programs to improve performance when dealing with large datasets or frequent lookups.

```c
#include <stdio.h>
#include <string.h>

#define CAPACITY 50000 // size of hashtable

unsigned long hash_function(char* str)
{
	unsigned long i = 0;
	for(int j = 0; str[j]; j++)
	{
		i += str[j];
	}
	return i % CAPACITY;
}

int main()
{
	char input_string[] = "MOONCAKE";
	unsigned long hash_code;

	hash_code = hash_function(input_string);
	printf("the hash function for \"%s"\ is %lu \n", input_string, hash_code);

	return 0;
}
```

## Preprocessor Directives

- `#include <stdio.h>` and `#include <string.h>`: These lines include standard C libraries necessary for input/output and string manipulation.

## Constants and Data Types

- `#define CAPACITY 50000`: Defines a constant named `CAPACITY` with a value of 50000, representing the size of a hash table.

## Hash Function

- `unsigned long hash_function(char* str)`: Defines a function named `hash_function` that takes a string `str` as input and returns an `unsigned long` integer. This integer will be the hash code.

## Inside the Hash Function

- `unsigned long i = 0;`: Initializes an unsigned long integer `i` to 0. It accumulates the hash code.
    
- `for (int j = 0; str[j]; j++)`: Iterates through each character of the input string `str`. The loop variable `j` is used to index the characters.
    
- `i += str[j];`: Inside the loop, it adds the ASCII value of each character in the string to `i`. This converts the string into a numeric value.
    
- `return i % CAPACITY;`: After processing all characters in the string, it returns the remainder of `i` divided by `CAPACITY`. This ensures that the resulting hash code falls within the range of the hash table's size.
    

## Purpose and Use

- **Purpose**: This hash function's purpose is to convert a string (e.g., "mooncake") into a numeric value (hash code) for indexing in a hash table. Hash functions are crucial for efficient data storage and retrieval based on keys.
    
- **Use**: Hash tables are data structures used to store and retrieve data quickly. This hash function calculates a hash code that determines the location in the hash table for storing or finding corresponding data.
    

## Why It's Done This Way

- This hash function is simple and serves as a basic example. It converts a string into a numeric value by summing the ASCII values of its characters.
- However, more advanced hash functions are designed to minimize collisions (different strings producing the same hash code) and distribute keys evenly.

## Data Types Used

- `char* str`: A pointer to a character, representing a string. Strings in C are typically represented as character arrays.
- `unsigned long`: An unsigned long integer data type capable of holding large positive values. It is used to store the hash code.

In summary, this code provides a basic example of a hash function used in hash tables. It converts strings into numeric values, enabling efficient data retrieval and storage based on keys. While simple, it's important to choose or design appropriate hash functions for specific applications to ensure good performance and avoid collisions.
