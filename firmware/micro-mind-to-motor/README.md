# micro-mind-to-motor firmware

STM32F746/MP6550 firmware for receiving `mind2motor` wheel commands through
the HC-05 on USART1 (PA9 TX, PA10 RX) at 9600 baud.

## Protocol

The laptop sends a line at least every 400 ms:

```text
W<left>,<right>\n
```

Both values are forward wheel-duty percentages from 0 through 100. Examples:

```text
W40,40    forward
W20,60    turn left
W60,20    turn right
W0,0      stop
```

The board reports every 100 ms:

```text
S pc 40 40 0
```

The last number counts rejected input lines. `S idle 0 0 ...` means no valid
frame has arrived for 400 ms, so the firmware stopped and slept both drivers.
Sending `?` requests the identity line `I mind2motor 1`.

Motor 1 (J8, TIM4 channels 1/2) is currently treated as the left wheel and
Motor 2 (J7, TIM4 channels 3/4) as the right wheel. If the physical sides are
opposite, swap the two percentages in `Motors_SetWheelPercent()`.

## Laptop commands

Replace `COM7` with the HC-05 outgoing Bluetooth COM port:

```text
python -m mind2motor wheels 40 40 --seconds 2 --car COM7 --baud 9600
python -m mind2motor drive --car COM7 --baud 9600
```

The Muse connects to the laptop over BLE. The laptop independently connects
to the HC-05 over Bluetooth Classic; the Muse never connects to the HC-05.

Test with the wheels raised and a suitable motor supply connected.
