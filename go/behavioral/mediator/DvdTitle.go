package mediator

//// Original copy of this content taken from http://www.fluffycat.com/Java-Design-Patterns/ in 2010
//// Original Author: Larry Truett
//// Privacy Policy at http://www.fluffycat.com/Privacy-Policy/
//Java Design Patterns Mediator
//Mediator Overview
//Passes communication between two or more objects.
//DvdTitle - the Abstract Colleague or Mediatee

type DvdTitle interface {  
   SetTitle(titleIn string)
	GetTitle() string
}
