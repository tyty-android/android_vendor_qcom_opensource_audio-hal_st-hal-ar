#include <utils/RefBase.h>

namespace vendor {
namespace qti {
namespace hardware {
namespace ListenSoundModel {
namespace V1_0 {

struct IListenSoundModel : virtual ::android::RefBase {
    virtual ~IListenSoundModel() = default;

    int registerAsService(std::string const&);

    int registerAsService() {
        return registerAsService("default");
    }

    virtual void _placeholder00();
    virtual void _placeholder01();
    virtual void _placeholder02();
    virtual void _placeholder03();
    virtual void _placeholder04();
    virtual void _placeholder05();
    virtual void _placeholder06();
    virtual void _placeholder07();
    virtual void _placeholder08();
    virtual void _placeholder09();
    virtual void _placeholder10();
    virtual void _placeholder11();
    virtual void _placeholder12();
    virtual void _placeholder13();
    virtual void _placeholder14();
    virtual void _placeholder15();
    virtual void _placeholder16();
    virtual void _placeholder17();
    virtual void _placeholder18();
    virtual void _placeholder19();
    virtual void _placeholder20();
    virtual void _placeholder21();
    virtual void _placeholder22();
    virtual void _placeholder23();
    virtual void _placeholder24();
    virtual void _placeholder25();
    virtual void _placeholder26();
    virtual void _placeholder27();
    virtual void _placeholder28();
    virtual void _placeholder29();
    virtual void _placeholder30();
    virtual void _placeholder31();
    virtual void _placeholder32();
    virtual void _placeholder33();
    virtual void _placeholder34();
    virtual void _placeholder35();
    virtual void _placeholder36();
    virtual void _placeholder37();
    virtual void _placeholder38();
    virtual void _placeholder39();
    virtual void _placeholder40();
    virtual void _placeholder41();
    virtual void _placeholder42();
};

struct _Data {
    uint64_t _data{};
};

namespace implementation {

extern "C" uintptr_t _ZTTN6vendor3qti8hardware16ListenSoundModel4V1_014implementation16ListenSoundModelE[];
extern "C" uintptr_t _ZTVN6vendor3qti8hardware16ListenSoundModel4V1_014implementation16ListenSoundModelE[];

struct ListenSoundModel : IListenSoundModel, _Data {
    ListenSoundModel();
    virtual ~ListenSoundModel();

    static ListenSoundModel* new_ListenSoundModel() {
        // BL              _Znwm
        // MOVI            V0.2D, #0
        // MOV             X23, X0
        // MOV             X22, X0
        // STR             Q0, [X0]
        // STR             Q0, [X23,#0x10]!
        // MOV             X0, X23 ; this
        auto obj = reinterpret_cast<uintptr_t*>(operator new(0x20));
        std::memset(obj, 0, 0x20);
        auto x22 = &obj[0x0];
        auto x23 = &obj[0x2];

        // BL              _ZN7android7RefBaseC2Ev
        struct Broker : android::RefBase {};
        new(x23) Broker;

        auto& vtt = _ZTTN6vendor3qti8hardware16ListenSoundModel4V1_014implementation16ListenSoundModelE;
        auto& vtb = _ZTVN6vendor3qti8hardware16ListenSoundModel4V1_014implementation16ListenSoundModelE;

        // ADRP            X8, #_ZTTN...
        // LDR             X8, [X8,#_ZTTN...]
        auto x8 = &vtt[0];

        // LDP             X10, X9, [X8,#8]
        uintptr_t x10 = x8[0x1];
        uintptr_t x9 = x8[0x2];

        // LDP             X11, X12, [X8,#0x18]
        uintptr_t x11 = x8[0x3];
        uintptr_t x12 = x8[0x4];

        // STR             X9, [X22]
        x22[0x0] = x9;
        // LDUR            X9, [X9,#-0x18]
        x9 = reinterpret_cast<uintptr_t*>(x9)[-3];
        __builtin_assume((x9 & 0b111) == 0);
        // STR             X11, [X22,X9]
        x22[x9 >> 3] = x11;
        // STR             X10, [X22]
        x22[0x0] = x10;
        // LDUR            X9, [X10,#-0x18]
        x9 = reinterpret_cast<uintptr_t*>(x10)[-3];
        __builtin_assume((x9 & 0b111) == 0);

        // ADRP            X8, #_ZTVN
        // LDR             X8, [X8,#_ZTVN...]
        auto x8_1 = reinterpret_cast<uintptr_t>(&vtb[0]);

        // ADD             X10, X8, #0x1B8
        x10 = x8_1 + 0x1b8;
        // ADD             X8, X8, #0x18
        x8_1 = x8_1 + 0x18;
        // STR             X12, [X22,X9]
        x22[x9 >> 3] = x12;

        // STR             X10, [X23]
        x23[0x0] = x10;

        // STP             X8, XZR, [X22]
        x22[0x0] = x8_1;
        x22[0x1] = 0;

        return reinterpret_cast<ListenSoundModel*>(obj);
    }

};

static_assert(sizeof(ListenSoundModel) == 32, "Broken ABI stability of ListenSoundModel");

} // namespace implementation
} // namespace V1_0
} // namespace ListenSoundModel
} // namespace hardware
} // namespace qti
} // namespace vendor
