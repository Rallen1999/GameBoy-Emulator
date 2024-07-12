#pragma once
#include <cstdint>

const unsigned int REGISTERS = 16;
const unsigned int MEMORY = 8192;

class CPU {
public:
  void Registers();
  void Flags();
  void LoadROM();
  void main();

private:
  uint8_t registers[REGISTERS]{};
  uint16_t opcode{};
  uint8_t memory[MEMORY]{};
  uint8_t sp{};
  uint16_t pc{};
};
