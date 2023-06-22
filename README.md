
# JSON String generator

This program is written in c++ that replicates the functionality of Javascript's stringify function. 


## Run Locally

NOTE: have a C++ compiler setup to execute the command

Go to the project directory

```bash
  g++ Json_string_generator
```

```bash
  ./a.out
```



## Screenshots
### Using string, number, boolean and null value types
<img width="196" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/bb3a15d9-f2bc-49f4-ae69-55d94234dbf0">
<img width="186" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/3e6cc325-eafa-4f30-9841-7b0a9e3c78bd">
<img width="376" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/ac5fb75e-48b8-47c6-a4c2-004299ed4564">

### Using objects and arrays

### Using nested objects and arrays in combination

## Features

- Handling of nested value types
- Generates both in string and file format
- Ability to modify each level of nesting
- Provides a console level UI


## FAQ

#### Why am i getting multiple exits?

Each level of exit refers to each level of nesting. For example, (need to add image)

#### What does option 3 do and what is the difference between that and the final exit?

It clears the string file that contains all the generated strings, whereas the final exit only exits the program but the string and the file is stored in memory

#### Do i need to add anything to the output?

No, simply copy the output to work with the JSON string. If you don't trust the output, simply copy the output to (add link) and validate. 

