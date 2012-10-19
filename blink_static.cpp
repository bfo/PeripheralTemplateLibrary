#include <gpio.hpp>
#include <cpu.hpp>
#include <board.hpp>
#include <delay_static.hpp>


typedef StaticDelay delayer;

int main()
{
    cpu::init(cpu::DEFAULT);
    board::LED::port::enable();
    board::LED::output();
    while (true) {
        board::LED::high();
        delayer::delay(100000U);
        board::LED::low();
        delayer::delay(100000U);
    }
}
