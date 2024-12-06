import hash

print("Login Page \n")
login_id = input("Enter your Employee ID(Press new for New ID): ")
if login_id.lower() == 'new':
    name = input("Enter your name: ")
    new_id = hash.hashfunction(name)
    print(f"Employee ID created! Your ID is {new_id}")
else:
    hash.validate(int(login_id))