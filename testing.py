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

#Mimo
def display_programme(movies):
  print("Airing tonight: ")
  for movie in movies:
    print(movie)

movie_list = ["Alien", "Moon"]
display_programme(movie_list)

#As expected

def display_progress(total_files):
  for i in range(total_files):
    i += 1
    print(f"Downloading file {i} out of {total_files}")

display_progress(3)

# I need to append values to an array to print the fibonacci series
'''#include <iostream>
using namespace std;
int main () {
	int n, num;
	int arr[2] = {0, 1};
	cout << arr[0] << "\n" << arr[1] << "\n";
	
	for (n=2; n<30; n++) {
//	arr [n] = (arr[(n-2)] + arr[(n-1)]);
		cout << arr [n] << "\n";
	}

// I want to map each array value 
}'''
