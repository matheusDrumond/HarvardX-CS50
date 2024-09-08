## Week 0 - Introduction to Computer Science

### Binary System

The base-2 system, known as the binary system, consists of the digits 0 and 1. A binary digit is called a bit, and computers interpret electric signals as 0 or 1: no electricity is 0, and flowing electricity is 1. Modern hardware uses millions of transistors alternating between on and off to process information.

A byte consists of 8 bits. The largest value representable by a byte is 255, calculated as \(2^7 + 2^6 + \dots + 2^0 = 255\).

### Text Representation

The ASCII system uses 8 bits to represent characters. For example, the capital letter "A" is represented by 01000001 (65 in decimal). To decode a bit pattern, calculate the sum of powers of 2 corresponding to each "1" bit. For example, 10001001 represents \(2^7 + 2^3 + 2^0 = 137\).

Apart from ASCII, we also have Unicode, which can use up to 4 bytes to represent characters, allowing over 4 billion possibilities. Unicode values often start with "U+", such as U+1F468.

### Colors

In the RGB color system, colors are represented using three bytes, each indicating the intensity of red, green, and blue, respectively. A pixel on your screen receives three values between 0 and 255 to display a specific color.

### Algorithms

Algorithms are sequences of instructions designed to solve problems. In computing, algorithms process inputs and generate outputs, whether it's text, images, sounds, or something else.

### Large Language Models (LLMs)

LLMs, like chatbots, use vast amounts of text to learn patterns. Rather than relying on a series of conditional statements, these models predict responses by analyzing massive datasets to provide accurate and relevant answers.
