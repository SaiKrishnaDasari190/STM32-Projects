# Call Stack Feature in Keil uVision by Invalid function Pointer
The Call stack feature of Keil uVision is understand by dereferencing the invalid function pointer

Call stack window always points the lastly exected function when we stop executing the program 

In order to understand the call stack feature I have created a invalid function pointer.

Whenever the function is executed it will dereference a invalid Address the PC is loaded with that address 

as the function address is invalid the program is traped in Hardfard Handler It will not execte the next instuctions. It can be identified using the Call Stack Feature

The Call stack window will give the last executed function

__Documentation folder:__ Consits of a PDF which describes the block diagram, Description , and Flow chart for the Project

__Firmware folder:__ Consits of Program Code in Keil uVision using C programming Language

__Hardware folder:__ Consists of the Images/Videos/Circuit Diagrams of the Hardware of STM32 Outputs
