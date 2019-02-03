#ifndef _AVR_INTERRUPT_H_
#define _AVR_INTERRUPT_H_

#define _VECTOR(N) __vector_ ## N

#define ISR(vector, ...)            \
     extern "C" void vector (void)  __VA_ARGS__; \
     void vector (void)

#endif
