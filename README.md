# Morse Code Translator (C++)

A simple Morse Code Translator built in C++.

## Features

- Converts text to Morse code
- Supports letters (A–Z)
- Supports numbers (0–9)
- Ignores letter case

## Example

Input:
```
Hello 123
```

Output:
```
.... . .-.. .-.. --- / .---- ..--- ...--
```

## Concepts Used

- `map`
- `string`
- `getline()`
- `for` loop
- `toupper()`

## Run

```bash
g++ main.cpp -o morse
./morse
```