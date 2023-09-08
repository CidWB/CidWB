# Adding a new file for Coursera practice
print("Hello, world!")


#Random Mimo code I edited
def get_waiting_list(signups):
  if signups > 200:
    print(f"Waiting list: {signups - 200}")
  elif signups == 200:
    print("Waiting list full.")
  else:
    print(f"{200 - signups} spaces left.")
get_waiting_list(20)
