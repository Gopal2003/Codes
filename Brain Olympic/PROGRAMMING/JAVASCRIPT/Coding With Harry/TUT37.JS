console.log("This is tutorial 37");

// Pretend that this response is coming from the server
const students = [
    {name: "harry", subject: "JavaScript"},
    {name: "Rohan", subject: "Machine Learning"}
]


function enrollStudent(student, callbac){
    setTimeout(function() {
        students.push(student);
        console.log("Student has been enrolled");
        callbac();
    }, 2000);//2000milliSec=2sec is the waiting time of the function enrollStudent
}

function getStudents(){
    setTimeout(function() {
        let str = "";
        students.forEach(function(student){
            str += `<li> ${student.name}</li>`
        });
        document.getElementById('students').innerHTML = str;
        console.log("Students have been fetched");
    }, 3000);
}

let newStudent = {name:"Sunny", subject:"Python"}
enrollStudent(newStudent, getStudents);
// getStudents();

