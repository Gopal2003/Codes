// console.log("Hello welcome")
// let Obj={
//     name:'GG',
//     speed:23,
//     run :function(){
//       console.log(`name is running`);
//     }

// };
// console.log(Obj);
console.log("This is tut 27");

// Object Literal for creating objects
let car = {
  name: "Maruti 800",
  topSpeed: 89,
  run: function () {
    console.log("car is running");
  },
};
// we have already seen constructors like these:
// new Date();

// Creating a constructor for cars
// function GeneralCar(givenName, givenSpeed) {
//   this.name = givenName;
//   this.topSpeed = givenSpeed;
//   this.run = function() {
//     console.log(`${this.name} Is Running`);
//   };
//   this.analyze = function() {
//     console.log(
//       `This car is slower by ${200 - this.topSpeed} Km/H than Mercedes`
//     );
//   };
// }
// car1 = new GeneralCar("Nissan", 180);
// car2 = new GeneralCar("Marutu Alto", 80);
// car3 = new GeneralCar("Mercedes", 200);
// console.log(car1, car2, car3);

function GeneralCar(givenName, givenSpeed) {
  this.name = givenName;
  this.topSpeed = givenSpeed;
  this.run = function () {
    console.log(`${name} is running`);
  };
  this.analyze = function () {
    console.log(
      ` ${this.name} is slower by ${250 - this.topSpeed} than mercedes`
    );
  };
}
let car1 = new GeneralCar("Maruti 800", 45);
console.log(car1);
let car2=new GeneralCar("Lamborgini",300);
console.log(car2)
let car3=new GeneralCar("Mercedes",500);
console.log(car3);
