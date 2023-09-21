function getName(names) {
  for (i = 0; i < names.length; i++)
	console.log(names[i]);
}
var students = ["Laurel", "Yanni"];
var firstMember = getName(students);


/*I'm so glad this actuallly worked!!!!*/
function getAverage(grades) {
  sum = 0
  for (i = 0; i < grades.length; i++) {
	sum = sum + grades[i];
  }
average = sum / grades.length;
return average;
}
const grades = [10, 5, 8];
const averageGrade = getAverage(grades);
console.log(averageGrade);
