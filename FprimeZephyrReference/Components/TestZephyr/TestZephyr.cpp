// ======================================================================
// \title  TestZephyr.cpp
// \author root
// \brief  cpp file for TestZephyr component implementation class
// ======================================================================

#include "FprimeZephyrReference/Components/TestZephyr/TestZephyr.hpp"

namespace FprimeZephyrReference {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

TestZephyr ::TestZephyr(const char* const compName) : TestZephyrComponentBase(compName) {}

TestZephyr ::~TestZephyr() {}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void TestZephyr ::TODO_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
    // TODO
    this->gpioSet_out(0, Fw::Logic::HIGH);
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

void TestZephyr ::PowerLed_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace FprimeZephyrReference
