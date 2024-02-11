console.log("Hellos");
// let arr=[1,2,3,4,5];
// let arr1=[1,2,3,4,5,6];
// setTimeout(()=>{
//       for(let i=0;i<5;i++){
//          console.log("The Element at index "+i+" is "+arr[i]);
//       }
// }, 2000);
// setTimeout(()=>{
//     for(let i=0;i<6;i++){
//         console.log("The Element at index "+i+" is "+arr1[i]);
//      }
// },3000)

function func1() {
    return new Promise(function (R, r) {
        setTimeout(() => {
            const error = true;
            if (!error) {
                console.log("Your problem has been solved");
                R();
            }
            else {
                console.log("your problem has not been solved");
                r();
            }
        }, 2000);
    });
}
func1()
    .then(function () {
        console.log("Thanks");
    })
    .catch(function () {
        console.log("Very bad");
    });
