#ifndef FIX44_LISTSTATUSREQUEST_H
#define FIX44_LISTSTATUSREQUEST_H

#include "Message.h"

namespace FIX44
{

  class ListStatusRequest : public Message
  {
  public:
    ListStatusRequest() : Message(MsgType()) {}
    ListStatusRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("M"); }

    ListStatusRequest(
      const FIX::ListID& aListID )
    : Message(MsgType())
    {
      set(aListID);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif