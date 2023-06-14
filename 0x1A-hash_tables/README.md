# Hash Tables: A Complete Guide

## Introduction
A hash table, also known as a hash map, is a data structure that allows efficient storage and retrieval of key-value pairs. It is based on the concept of hashing, which involves converting a key into a unique numerical value called a hash code.

## How Hash Tables Work
1. **Hash Function**: A hash function takes a key as input and computes a hash code, which is used as an index to store the corresponding value in an array. The hash function should produce the same hash code for the same key consistently.

2. **Array and Buckets**: The hash table uses an array to store the key-value pairs. Each element in the array is called a bucket. The number of buckets is predetermined and is typically a prime number to achieve better distribution.

3. **Hash Code to Index**: The hash code is mapped to an index in the array using a process called hashing. A common approach is to use the modulus operator `%` to obtain the remainder of dividing the hash code by the number of buckets. This ensures that the index falls within the valid range of the array.

4. **Collision Handling**: Since multiple keys can produce the same hash code (collisions), collision handling techniques are required. Two common approaches are separate chaining and open addressing. 
   - **Separate Chaining**: Each bucket contains a linked list. When a collision occurs, the new key-value pair is appended to the linked list at that bucket.
   - **Open Addressing**: When a collision occurs, the new key-value pair is stored in the next available slot in the array, using techniques like linear probing or quadratic probing.

5. **Insertion**: To insert a key-value pair into a hash table:
   - Compute the hash code for the key.
   - Map the hash code to an index using the hashing technique.
   - If there is no collision, store the key-value pair at that index.
   - If a collision occurs, apply the appropriate collision resolution technique.

6. **Retrieval**: To retrieve a value from the hash table:
   - Compute the hash code for the given key.
   - Map the hash code to an index.
   - Traverse the linked list or probe through the array using the collision resolution technique until the key is found or the end is reached.

7. **Deletion**: To delete a key-value pair from the hash table:
   - Find the key in the hash table using the retrieval process.
   - If found, remove the key-value pair from the linked list or mark it as deleted in open addressing.

- A hashtable is a data structure used to store info with 2 major components:
1. Key 
2. Value
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
```
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
