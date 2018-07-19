
#ifndef INTERCOM_CPP_DETAIL_DECLARATIONS_H
#define INTERCOM_CPP_DETAIL_DECLARATIONS_H


#include "../guiddef.h"
#include "../datatypes.h"

namespace intercom
{
namespace detail
{

    typedef intercom::HRESULT ( *GetClassObjectFunc ) ( const intercom::CLSID&, const intercom::IID&, void** );

    typedef intercom::HRESULT ( *IntercomListClassObjectsFunc ) ( size_t*, intercom::CLSID** );

}
}

#endif
