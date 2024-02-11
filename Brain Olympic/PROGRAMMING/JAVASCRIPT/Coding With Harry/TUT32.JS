console.log("This is exersice session");
class library
{
    constructor(givenBook1,givenBook2,givenBook3){
        this.B1=givenBook1;
        this.B2=givenBook2;
        this.B3=givenBook3;
    }
    getBookList()
    {
         return(`The list of the books are
         1)${this.B1}
         2)${this.B2}
         3)${this.B3}
         `)
    }
    issueBook(bookName,user){
        this.bName=bookName;
        this.user=user;
        return(`${this.bName} is issued to the user ${this.user}`)
    }
    returnBook(bookName)
    {
        this.BName=bookName;
        return(`${this.BName},the name of the book is returned by ${this.user}.so, ${this.user} donot contain anybook`)
    }
}
let book1=new library('Harrypotar1','Harrypotar2','Harrypotar3')
console.log(book1);





















// console.log("This is tutorial 32")
// create a class library and implement the following:
// constructor must take the book list as an argument
// getBookList()
// issueBook(bookname, user)
// returnBook(bookname)





