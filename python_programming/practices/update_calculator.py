# EB 6th Update financial calculator

def get_input(prompt):
    value = float(input(prompt))
    return value  

def calculate_percent(income, expense):
    percent = (expense/income) * 100
    return percent

income = get_input("Enter your monthly income: $")
rent = get_input("Enter your monthly rent: $" )
food =get_input("Enter your monthly food cost: $")
savings =get_input("Enter how much you save monthly: $")
entertainment = get_input("Enter your monthly entertainment expenses: $")

rent_percent = calculate_percent(income, rent)
food_percent = calculate_percent(income, food)
savings_percent = calculate_percent(income, savings)
entertainment_percent = calculate_percent(income, entertainment)


print("\n--- Expense Report ---")
print(f"Rent: {rent_percent:.2f}% of income" )
print(f"Food: {food_percent:.2f}% of income" )
print(f"Savings: {savings_percent:.2f}% of income" )
print(f"Entertainment: {entertainment_percent:.2f}% of income")

total_percent = rent_percent + food_percent + savings_percent + entertainment_percent
print(f" \nTotal percentage of income accounted for: {total_percent:.2f}%")