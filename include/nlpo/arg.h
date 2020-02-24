#ifndef __NLPO_ARG_H__
#define __NLPO_ARG_H__

#include <functional>
#include <string>
#include <list>

namespace nlpo::arg
{
    using None  = std::function<void()>;
    using One   = std::function<void(std::string)>;
    using Multi = std::function<void(std::list<std::string>)>;
}

#endif

