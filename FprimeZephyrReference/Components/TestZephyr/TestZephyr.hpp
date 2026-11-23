// ======================================================================
// \title  TestZephyr.hpp
// \author root
// \brief  hpp file for TestZephyr component implementation class
// ======================================================================

#ifndef FprimeZephyrReference_TestZephyr_HPP
#define FprimeZephyrReference_TestZephyr_HPP

#include "FprimeZephyrReference/Components/TestZephyr/TestZephyrComponentAc.hpp"

namespace FprimeZephyrReference {

class TestZephyr final : public TestZephyrComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct TestZephyr object
    TestZephyr(const char* const compName  //!< The component name
    );

    //! Destroy TestZephyr object
    ~TestZephyr();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command TODO
    //!
    //! TODO
    void TODO_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq            //!< The command sequence number
                         ) override;

    //! Handler implementation for command PowerLed
    void PowerLed_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                             U32 cmdSeq            //!< The command sequence number
                             ) override;
};

}  // namespace FprimeZephyrReference

#endif
