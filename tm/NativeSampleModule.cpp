#include "NativeSampleModule.h"

namespace facebook::react {

NativeSampleModule::NativeSampleModule(std::shared_ptr<CallInvoker> jsInvoker)
    : NativeSampleModuleCxxSpec(std::move(jsInvoker)) {}

std::string NativeSampleModule::reverseString(jsi::Runtime& rt, std::string input) {
  return std::string(input.rbegin(), input.rend());
}

size_t NativeSampleModule::stringLength(jsi::Runtime& rt, std::string input) {
  return input.length(); // Implementation of getStringLength method.
}

} // namespace facebook::react