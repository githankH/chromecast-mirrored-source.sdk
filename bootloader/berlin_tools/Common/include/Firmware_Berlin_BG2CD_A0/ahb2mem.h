//////
/// don't edit! auto-generated by docc: ahb2mem.h
////////////////////////////////////////////////////////////
#ifndef ahb2mem_h
#define ahb2mem_h (){}


#include "ctypes.h"

#pragma pack(1)
#ifdef __cplusplus
  extern "C" {
#endif

#ifndef _DOCC_H_BITOPS_
#define _DOCC_H_BITOPS_ (){}

    #define _bSETMASK_(b)                                      ((b)<32 ? (1<<((b)&31)) : 0)
    #define _NSETMASK_(msb,lsb)                                (_bSETMASK_((msb)+1)-_bSETMASK_(lsb))
    #define _bCLRMASK_(b)                                      (~_bSETMASK_(b))
    #define _NCLRMASK_(msb,lsb)                                (~_NSETMASK_(msb,lsb))
    #define _BFGET_(r,msb,lsb)                                 (_NSETMASK_((msb)-(lsb),0)&((r)>>(lsb)))
    #define _BFSET_(r,msb,lsb,v)                               do{ (r)&=_NCLRMASK_(msb,lsb); (r)|=_NSETMASK_(msb,lsb)&((v)<<(lsb)); }while(0)

#endif



//////
/// 
/// $INTERFACE Axi2MemReg              biu              (4,4)
///     # # ----------------------------------------------------------
///     @ 0x00000 ADDR                 (P)
///               %unsigned 32 ADDR                      0x0
///                                    ###
///                                    * Memory address for the read or write transaction
///                                    ###
///     @ 0x00004 WDATA                (W-)
///               %unsigned 32 WDATA                     0x0
///                                    ###
///                                    * Data to be written
///                                    ###
///     @ 0x00008 RDATA                (R-)
///               %unsigned 32 RDATA                     0x0
///                                    ###
///                                    * Data that is read
///                                    ###
///     @ 0x0000C                      (W-)
///     #         # Stuffing bytes...
///               %% 32
///     @ 0x00010 READ                 (WOC-)
///               %unsigned 1  READ                      0x0
///                                    ###
///                                    * Writing a 1 to this bit kicks off a read transaction
///                                    ###
///               %%        31         # Stuffing bits...
///     @ 0x00014                      (W-)
///     #         # Stuffing bytes...
///               %% 96
///     @ 0x00020 BUSY                 (R-)
///               %unsigned 1  BUSY                      0x0
///                                    ###
///                                    * 0: Read or Write Transaction in progress.
///                                    * 1: Axi2Mem is ready to accept new transaction
///                                    ###
///               %%        31         # Stuffing bits...
///     # # ----------------------------------------------------------
/// $ENDOFINTERFACE  # size:      36B, bits:      98b, padding:     0B
////////////////////////////////////////////////////////////
#ifndef h_Axi2MemReg
#define h_Axi2MemReg (){}

    #define     RA_Axi2MemReg_ADDR                             0x0000

    #define     BA_Axi2MemReg_ADDR_ADDR                        0x0000
    #define     B16Axi2MemReg_ADDR_ADDR                        0x0000
    #define   LSb32Axi2MemReg_ADDR_ADDR                           0
    #define   LSb16Axi2MemReg_ADDR_ADDR                           0
    #define       bAxi2MemReg_ADDR_ADDR                        32
    #define   MSK32Axi2MemReg_ADDR_ADDR                           0xFFFFFFFF
    ///////////////////////////////////////////////////////////
    #define     RA_Axi2MemReg_WDATA                            0x0004

    #define     BA_Axi2MemReg_WDATA_WDATA                      0x0004
    #define     B16Axi2MemReg_WDATA_WDATA                      0x0004
    #define   LSb32Axi2MemReg_WDATA_WDATA                         0
    #define   LSb16Axi2MemReg_WDATA_WDATA                         0
    #define       bAxi2MemReg_WDATA_WDATA                      32
    #define   MSK32Axi2MemReg_WDATA_WDATA                         0xFFFFFFFF
    ///////////////////////////////////////////////////////////
    #define     RA_Axi2MemReg_RDATA                            0x0008

    #define     BA_Axi2MemReg_RDATA_RDATA                      0x0008
    #define     B16Axi2MemReg_RDATA_RDATA                      0x0008
    #define   LSb32Axi2MemReg_RDATA_RDATA                         0
    #define   LSb16Axi2MemReg_RDATA_RDATA                         0
    #define       bAxi2MemReg_RDATA_RDATA                      32
    #define   MSK32Axi2MemReg_RDATA_RDATA                         0xFFFFFFFF
    ///////////////////////////////////////////////////////////
    #define     RA_Axi2MemReg_READ                             0x0010

    #define     BA_Axi2MemReg_READ_READ                        0x0010
    #define     B16Axi2MemReg_READ_READ                        0x0010
    #define   LSb32Axi2MemReg_READ_READ                           0
    #define   LSb16Axi2MemReg_READ_READ                           0
    #define       bAxi2MemReg_READ_READ                        1
    #define   MSK32Axi2MemReg_READ_READ                           0x00000001
    ///////////////////////////////////////////////////////////
    #define     RA_Axi2MemReg_BUSY                             0x0020

    #define     BA_Axi2MemReg_BUSY_BUSY                        0x0020
    #define     B16Axi2MemReg_BUSY_BUSY                        0x0020
    #define   LSb32Axi2MemReg_BUSY_BUSY                           0
    #define   LSb16Axi2MemReg_BUSY_BUSY                           0
    #define       bAxi2MemReg_BUSY_BUSY                        1
    #define   MSK32Axi2MemReg_BUSY_BUSY                           0x00000001
    ///////////////////////////////////////////////////////////

    typedef struct SIE_Axi2MemReg {
    ///////////////////////////////////////////////////////////
    #define   GET32Axi2MemReg_ADDR_ADDR(r32)                   _BFGET_(r32,31, 0)
    #define   SET32Axi2MemReg_ADDR_ADDR(r32,v)                 _BFSET_(r32,31, 0,v)

    #define     w32Axi2MemReg_ADDR                             {\
            UNSG32 uADDR_ADDR                                  : 32;\
          }
    union { UNSG32 u32Axi2MemReg_ADDR;
            struct w32Axi2MemReg_ADDR;
          };
    ///////////////////////////////////////////////////////////
    #define   GET32Axi2MemReg_WDATA_WDATA(r32)                 _BFGET_(r32,31, 0)
    #define   SET32Axi2MemReg_WDATA_WDATA(r32,v)               _BFSET_(r32,31, 0,v)

    #define     w32Axi2MemReg_WDATA                            {\
            UNSG32 uWDATA_WDATA                                : 32;\
          }
    union { UNSG32 u32Axi2MemReg_WDATA;
            struct w32Axi2MemReg_WDATA;
          };
    ///////////////////////////////////////////////////////////
    #define   GET32Axi2MemReg_RDATA_RDATA(r32)                 _BFGET_(r32,31, 0)
    #define   SET32Axi2MemReg_RDATA_RDATA(r32,v)               _BFSET_(r32,31, 0,v)

    #define     w32Axi2MemReg_RDATA                            {\
            UNSG32 uRDATA_RDATA                                : 32;\
          }
    union { UNSG32 u32Axi2MemReg_RDATA;
            struct w32Axi2MemReg_RDATA;
          };
    ///////////////////////////////////////////////////////////
             UNSG8 RSVDxC                                      [4];
    ///////////////////////////////////////////////////////////
    #define   GET32Axi2MemReg_READ_READ(r32)                   _BFGET_(r32, 0, 0)
    #define   SET32Axi2MemReg_READ_READ(r32,v)                 _BFSET_(r32, 0, 0,v)
    #define   GET16Axi2MemReg_READ_READ(r16)                   _BFGET_(r16, 0, 0)
    #define   SET16Axi2MemReg_READ_READ(r16,v)                 _BFSET_(r16, 0, 0,v)

    #define     w32Axi2MemReg_READ                             {\
            UNSG32 uREAD_READ                                  :  1;\
            UNSG32 RSVDx10_b1                                  : 31;\
          }
    union { UNSG32 u32Axi2MemReg_READ;
            struct w32Axi2MemReg_READ;
          };
    ///////////////////////////////////////////////////////////
             UNSG8 RSVDx14                                     [12];
    ///////////////////////////////////////////////////////////
    #define   GET32Axi2MemReg_BUSY_BUSY(r32)                   _BFGET_(r32, 0, 0)
    #define   SET32Axi2MemReg_BUSY_BUSY(r32,v)                 _BFSET_(r32, 0, 0,v)
    #define   GET16Axi2MemReg_BUSY_BUSY(r16)                   _BFGET_(r16, 0, 0)
    #define   SET16Axi2MemReg_BUSY_BUSY(r16,v)                 _BFSET_(r16, 0, 0,v)

    #define     w32Axi2MemReg_BUSY                             {\
            UNSG32 uBUSY_BUSY                                  :  1;\
            UNSG32 RSVDx20_b1                                  : 31;\
          }
    union { UNSG32 u32Axi2MemReg_BUSY;
            struct w32Axi2MemReg_BUSY;
          };
    ///////////////////////////////////////////////////////////
    } SIE_Axi2MemReg;

    typedef union  T32Axi2MemReg_ADDR
          { UNSG32 u32;
            struct w32Axi2MemReg_ADDR;
                 } T32Axi2MemReg_ADDR;
    typedef union  T32Axi2MemReg_WDATA
          { UNSG32 u32;
            struct w32Axi2MemReg_WDATA;
                 } T32Axi2MemReg_WDATA;
    typedef union  T32Axi2MemReg_RDATA
          { UNSG32 u32;
            struct w32Axi2MemReg_RDATA;
                 } T32Axi2MemReg_RDATA;
    typedef union  T32Axi2MemReg_READ
          { UNSG32 u32;
            struct w32Axi2MemReg_READ;
                 } T32Axi2MemReg_READ;
    typedef union  T32Axi2MemReg_BUSY
          { UNSG32 u32;
            struct w32Axi2MemReg_BUSY;
                 } T32Axi2MemReg_BUSY;
    ///////////////////////////////////////////////////////////

    typedef union  TAxi2MemReg_ADDR
          { UNSG32 u32[1];
            struct {
            struct w32Axi2MemReg_ADDR;
                   };
                 } TAxi2MemReg_ADDR;
    typedef union  TAxi2MemReg_WDATA
          { UNSG32 u32[1];
            struct {
            struct w32Axi2MemReg_WDATA;
                   };
                 } TAxi2MemReg_WDATA;
    typedef union  TAxi2MemReg_RDATA
          { UNSG32 u32[1];
            struct {
            struct w32Axi2MemReg_RDATA;
                   };
                 } TAxi2MemReg_RDATA;
    typedef union  TAxi2MemReg_READ
          { UNSG32 u32[1];
            struct {
            struct w32Axi2MemReg_READ;
                   };
                 } TAxi2MemReg_READ;
    typedef union  TAxi2MemReg_BUSY
          { UNSG32 u32[1];
            struct {
            struct w32Axi2MemReg_BUSY;
                   };
                 } TAxi2MemReg_BUSY;

    ///////////////////////////////////////////////////////////
     SIGN32 Axi2MemReg_drvrd(SIE_Axi2MemReg *p, UNSG32 base, SIGN32 mem, SIGN32 tst);
     SIGN32 Axi2MemReg_drvwr(SIE_Axi2MemReg *p, UNSG32 base, SIGN32 mem, SIGN32 tst, UNSG32 *pcmd);
       void Axi2MemReg_reset(SIE_Axi2MemReg *p);
     SIGN32 Axi2MemReg_cmp  (SIE_Axi2MemReg *p, SIE_Axi2MemReg *pie, char *pfx, void *hLOG, SIGN32 mem, SIGN32 tst);
    #define Axi2MemReg_check(p,pie,pfx,hLOG) Axi2MemReg_cmp(p,pie,pfx,(void*)(hLOG),0,0)
    #define Axi2MemReg_print(p,    pfx,hLOG) Axi2MemReg_cmp(p,0,  pfx,(void*)(hLOG),0,0)

#endif
//////
/// ENDOFINTERFACE: Axi2MemReg
////////////////////////////////////////////////////////////



#ifdef __cplusplus
  }
#endif
#pragma  pack()

#endif
//////
/// ENDOFFILE: ahb2mem.h
////////////////////////////////////////////////////////////
