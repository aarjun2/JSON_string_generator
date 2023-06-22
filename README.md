
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
<img width="193" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/f8499807-a897-4b90-994f-4f389ddf7f55">
<img width="188" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/0f25e723-9d2f-4ecd-9180-3a2a5ddd0f00">
<img width="300" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/0e2ce2ee-c143-4967-8967-1e8df94063d4">
<img width="442" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/0e2be4eb-79e0-4e4a-8884-99e3d9fd8c60">


### Using nested objects and arrays in combination
<img width="182" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/ad08e680-100a-4745-9bb3-bd5fbb125144">
<img width="188" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/31a9294b-f653-4e3a-809a-499016e8ad32">
<img width="183" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/a2a2764b-65ac-415d-ab74-0eb3483487d9">
<img width="300" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/72e8aeda-0bff-456e-a358-7300e6841adb">
<img width="185" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/4b0e1d82-8652-4799-a579-ef0e8adeb96a">
<img width="301" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/45041645-bea2-48d1-9540-28f834d9e1f7">
<img width="397" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/f75908ef-38e1-447c-88ee-bc6ebd5b726d">


## Features

- Handling of nested value types
- Generates both in string and file format
- Ability to modify each level of nesting
- Provides a console level UI


## FAQ

#### Why am i getting multiple exits and multiple add pairs?

Refere to images below: Each level of exit refers to each level of nesting. In the below example, the two exits refer to the two arrays that are nested, the first exit indicated that I want done appending to the 789 array, the second intended it for the 456 array. The multiple add key value pair refer to each level of objects such as cd, ef, and gh.
<img width="301" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/45041645-bea2-48d1-9540-28f834d9e1f7">
<img width="397" alt="image" src="https://github.com/aarjun2/JSON_string_generator/assets/136024177/f75908ef-38e1-447c-88ee-bc6ebd5b726d">

#### What does option 3 do and what is the difference between that and the final exit?

It clears the string file that contains all the generated strings, whereas the final exit only exits the program but the string and the file is stored in memory. Option 3 is not displayed in the screenshots as focus was on nesting, but the updated program will have option 3 to clear the output file.

#### Do i need to add anything to the output?

No, simply copy the output to work with the JSON string. If you don't trust the output, simply copy the output to [validate_JSON](https://jsonlint.com/) and validate. 

