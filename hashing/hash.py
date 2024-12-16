import random
import string
import json
import os

def hashfunction(your_name):
    random_value = ord(random.choice(string.ascii_lowercase))
    value = [ord(name) for name in your_name]
    
    digit_sum = sum(int(digit) for digit in str(random_value))
    
    sorted_val = sorted(value)
    
    result = [val / digit_sum for val in sorted_val]
    average = int((sum(result) / len(result) if result else 0)*1000)
    

    file_name = 'C:\\Users\\BaidyaSu\\DSA\\hashing\\hashdata.json'
    data = {average: value}
    
    if not os.path.exists(file_name):
        with open(file_name, "w") as file:
            json.dump({}, file)

    try:
        with open(file_name, 'r') as file:
            json_data = json.load(file)
            
    except json.JSONDecodeError:
        json_data = {}  
        
    if value in json_data.values():
        print(f"value already exists. Skipping addition.")
        return None
    
    
    json_data.update(data)
    
    with open(file_name, "w") as file:
        json.dump(json_data, file, indent=4)
    
    return average  

def validate(id):
    typecheck_id = str(id)
    file_name = 'C:\\Users\\BaidyaSu\\DSA\\hashing\\hashdata.json'
    try:
        with open(file_name, 'r') as file:
            data = json.load(file)
    except FileNotFoundError:
        print(f"Error: File '{file_name}' not found.")
        return None
    except json.JSONDecodeError:
        print(f"Error: Failed to decode JSON from '{file_name}'.")
        return None
    
    
    if typecheck_id in data:
        ascii_values = data[typecheck_id]
        original_string = ''.join(chr(val) for val in ascii_values)
        print(f"Authenticated, Welcome {original_string}!")
    else:
        print("ALERT!!!Unauthorized Access....")
        
if __name__ == "__main__":
    hashfunction('Subhajit')
    validate(5736)
    
    



