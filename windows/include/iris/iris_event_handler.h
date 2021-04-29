//
// Created by LXH on 2021/1/14.
//

#ifndef IRIS_IRIS_EVENT_HANDLER_H
#define IRIS_IRIS_EVENT_HANDLER_H

namespace agora {
namespace iris {
class IrisEventHandler {
 public:
  virtual ~IrisEventHandler() = default;

 public:
  virtual void OnEvent(const char *event, const char *data) = 0;

  virtual void OnEvent(const char *event, const char *data, const void *buffer,
                       unsigned int length) = 0;
};
}// namespace iris
}// namespace agora

#endif// IRIS_IRIS_EVENT_HANDLER_H
