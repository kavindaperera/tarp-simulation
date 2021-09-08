//
// Generated file, do not edit! Created by nedtool 5.6 from TarpMessage.msg.
//

#ifndef __TARPMESSAGE_M_H
#define __TARPMESSAGE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



class TarpPacket;
#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

/**
 * Class generated from <tt>TarpMessage.msg:20</tt> by nedtool.
 * <pre>
 * class TarpPacket extends inet::FieldsChunk
 * {
 *     int srcAddr;
 *     int destAddr; // also contain neighbour in Hello msgs
 *     int hops; // maximum length of the path that the packet is allowed to travel expressed as the number of hops  
 * }
 * </pre>
 */
class TarpPacket : public ::inet::FieldsChunk
{
  protected:
    int srcAddr = 0;
    int destAddr = 0;
    int hops = 0;

  private:
    void copy(const TarpPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TarpPacket&);

  public:
    TarpPacket();
    TarpPacket(const TarpPacket& other);
    virtual ~TarpPacket();
    TarpPacket& operator=(const TarpPacket& other);
    virtual TarpPacket *dup() const override {return new TarpPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSrcAddr() const;
    virtual void setSrcAddr(int srcAddr);
    virtual int getDestAddr() const;
    virtual void setDestAddr(int destAddr);
    virtual int getHops() const;
    virtual void setHops(int hops);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TarpPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TarpPacket& obj) {obj.parsimUnpack(b);}

#endif // ifndef __TARPMESSAGE_M_H

