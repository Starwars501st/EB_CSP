# EB 6th Financial Calculator

income = float(input("what is your monthly income?  "))
rent = float(input("what is your monthly rent/mortgage?  "))
utilities=float(input("what is your monthy utilities?  "))
groceries = float(input("what is your monthly groceries?  "))
transportation = float(input("what is your monthly transportation?  "))

total = rent + utilities + transportation + groceries

utilities_percentage = utilities*100/income
rent_percentage = rent * 100/income
groceries_percentage = groceries*100/income
transportation_percentage = transportation*100/income

print(f"Your total monthly expenses are: ${total:,.2f}")



# # how do format to currency For an integer
# amount_int = 2,150.00

# print(f'${amount_int:,.2f}')

# # how do format to currency For a float
# amount_float = 98765.4321
# print(f'${amount_float:,.2f}')

# stuff to learn: how do convert strings into intergers and floats, how to format numbers into US currency format, how do concatenate, f strings.

savings = income * 0.10

remaining_money = income - (rent+utilities+groceries+transportation+savings)

print(f"\nYour rent is ${rent:.2f} and that is {rent_percentage:.1f}% of your income.")
print(f"Your utilities are ${utilities:.2f} and that is {utilities_percentage:.1f}% of your income.")
print(f"Your groceries are ${groceries:.2f} and that is {groceries_percentage:.1f}% of your income.")
print(f"Your transportation is ${transportation:.2f} and that is {transportation_percentage:.1f}% of your income.")
print(f"\nYou should save ${savings:.2f} a month, that is 10% of your income.")
print(f"You have ${remaining_money:.2f} of spending money each month!")



