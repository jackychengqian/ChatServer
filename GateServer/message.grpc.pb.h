// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: message.proto
#ifndef GRPC_message_2eproto__INCLUDED
#define GRPC_message_2eproto__INCLUDED

#include "message.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace message {

class VarifyService final {
 public:
  static constexpr char const* service_full_name() {
    return "message.VarifyService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::message::GetVarifyRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::message::GetVarifyRsp>> AsyncGetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::message::GetVarifyRsp>>(AsyncGetVarifyCodeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::message::GetVarifyRsp>> PrepareAsyncGetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::message::GetVarifyRsp>>(PrepareAsyncGetVarifyCodeRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq* request, ::message::GetVarifyRsp* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq* request, ::message::GetVarifyRsp* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq* request, ::message::GetVarifyRsp* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::message::GetVarifyRsp>* AsyncGetVarifyCodeRaw(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::message::GetVarifyRsp>* PrepareAsyncGetVarifyCodeRaw(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::message::GetVarifyRsp* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::message::GetVarifyRsp>> AsyncGetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::message::GetVarifyRsp>>(AsyncGetVarifyCodeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::message::GetVarifyRsp>> PrepareAsyncGetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::message::GetVarifyRsp>>(PrepareAsyncGetVarifyCodeRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq* request, ::message::GetVarifyRsp* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq* request, ::message::GetVarifyRsp* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetVarifyCode(::grpc::ClientContext* context, const ::message::GetVarifyReq* request, ::message::GetVarifyRsp* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::message::GetVarifyRsp>* AsyncGetVarifyCodeRaw(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::message::GetVarifyRsp>* PrepareAsyncGetVarifyCodeRaw(::grpc::ClientContext* context, const ::message::GetVarifyReq& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetVarifyCode_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetVarifyCode(::grpc::ServerContext* context, const ::message::GetVarifyReq* request, ::message::GetVarifyRsp* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetVarifyCode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetVarifyCode() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetVarifyCode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetVarifyCode(::grpc::ServerContext* /*context*/, const ::message::GetVarifyReq* /*request*/, ::message::GetVarifyRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetVarifyCode(::grpc::ServerContext* context, ::message::GetVarifyReq* request, ::grpc::ServerAsyncResponseWriter< ::message::GetVarifyRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetVarifyCode<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetVarifyCode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetVarifyCode() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::message::GetVarifyReq, ::message::GetVarifyRsp>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::message::GetVarifyReq* request, ::message::GetVarifyRsp* response) { return this->GetVarifyCode(context, request, response); }));}
    void SetMessageAllocatorFor_GetVarifyCode(
        ::grpc::experimental::MessageAllocator< ::message::GetVarifyReq, ::message::GetVarifyRsp>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::message::GetVarifyReq, ::message::GetVarifyRsp>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetVarifyCode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetVarifyCode(::grpc::ServerContext* /*context*/, const ::message::GetVarifyReq* /*request*/, ::message::GetVarifyRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetVarifyCode(
      ::grpc::CallbackServerContext* /*context*/, const ::message::GetVarifyReq* /*request*/, ::message::GetVarifyRsp* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetVarifyCode(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::message::GetVarifyReq* /*request*/, ::message::GetVarifyRsp* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetVarifyCode<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetVarifyCode<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetVarifyCode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetVarifyCode() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetVarifyCode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetVarifyCode(::grpc::ServerContext* /*context*/, const ::message::GetVarifyReq* /*request*/, ::message::GetVarifyRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetVarifyCode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetVarifyCode() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetVarifyCode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetVarifyCode(::grpc::ServerContext* /*context*/, const ::message::GetVarifyReq* /*request*/, ::message::GetVarifyRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetVarifyCode(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetVarifyCode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetVarifyCode() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetVarifyCode(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetVarifyCode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetVarifyCode(::grpc::ServerContext* /*context*/, const ::message::GetVarifyReq* /*request*/, ::message::GetVarifyRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetVarifyCode(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetVarifyCode(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetVarifyCode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetVarifyCode() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::message::GetVarifyReq, ::message::GetVarifyRsp>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::message::GetVarifyReq, ::message::GetVarifyRsp>* streamer) {
                       return this->StreamedGetVarifyCode(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetVarifyCode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetVarifyCode(::grpc::ServerContext* /*context*/, const ::message::GetVarifyReq* /*request*/, ::message::GetVarifyRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetVarifyCode(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::message::GetVarifyReq,::message::GetVarifyRsp>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetVarifyCode<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetVarifyCode<Service > StreamedService;
};

class StatusService final {
 public:
  static constexpr char const* service_full_name() {
    return "message.StatusService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::message::GetChatServerRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::message::GetChatServerRsp>> AsyncGetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::message::GetChatServerRsp>>(AsyncGetChatServerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::message::GetChatServerRsp>> PrepareAsyncGetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::message::GetChatServerRsp>>(PrepareAsyncGetChatServerRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq* request, ::message::GetChatServerRsp* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq* request, ::message::GetChatServerRsp* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq* request, ::message::GetChatServerRsp* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::message::GetChatServerRsp>* AsyncGetChatServerRaw(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::message::GetChatServerRsp>* PrepareAsyncGetChatServerRaw(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::message::GetChatServerRsp* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::message::GetChatServerRsp>> AsyncGetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::message::GetChatServerRsp>>(AsyncGetChatServerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::message::GetChatServerRsp>> PrepareAsyncGetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::message::GetChatServerRsp>>(PrepareAsyncGetChatServerRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq* request, ::message::GetChatServerRsp* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq* request, ::message::GetChatServerRsp* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetChatServer(::grpc::ClientContext* context, const ::message::GetChatServerReq* request, ::message::GetChatServerRsp* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::message::GetChatServerRsp>* AsyncGetChatServerRaw(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::message::GetChatServerRsp>* PrepareAsyncGetChatServerRaw(::grpc::ClientContext* context, const ::message::GetChatServerReq& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetChatServer_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetChatServer(::grpc::ServerContext* context, const ::message::GetChatServerReq* request, ::message::GetChatServerRsp* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetChatServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetChatServer() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetChatServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetChatServer(::grpc::ServerContext* /*context*/, const ::message::GetChatServerReq* /*request*/, ::message::GetChatServerRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetChatServer(::grpc::ServerContext* context, ::message::GetChatServerReq* request, ::grpc::ServerAsyncResponseWriter< ::message::GetChatServerRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetChatServer<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetChatServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetChatServer() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::message::GetChatServerReq, ::message::GetChatServerRsp>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::message::GetChatServerReq* request, ::message::GetChatServerRsp* response) { return this->GetChatServer(context, request, response); }));}
    void SetMessageAllocatorFor_GetChatServer(
        ::grpc::experimental::MessageAllocator< ::message::GetChatServerReq, ::message::GetChatServerRsp>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::message::GetChatServerReq, ::message::GetChatServerRsp>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetChatServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetChatServer(::grpc::ServerContext* /*context*/, const ::message::GetChatServerReq* /*request*/, ::message::GetChatServerRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetChatServer(
      ::grpc::CallbackServerContext* /*context*/, const ::message::GetChatServerReq* /*request*/, ::message::GetChatServerRsp* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetChatServer(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::message::GetChatServerReq* /*request*/, ::message::GetChatServerRsp* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetChatServer<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetChatServer<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetChatServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetChatServer() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetChatServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetChatServer(::grpc::ServerContext* /*context*/, const ::message::GetChatServerReq* /*request*/, ::message::GetChatServerRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetChatServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetChatServer() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetChatServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetChatServer(::grpc::ServerContext* /*context*/, const ::message::GetChatServerReq* /*request*/, ::message::GetChatServerRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetChatServer(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetChatServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetChatServer() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetChatServer(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetChatServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetChatServer(::grpc::ServerContext* /*context*/, const ::message::GetChatServerReq* /*request*/, ::message::GetChatServerRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetChatServer(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetChatServer(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetChatServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetChatServer() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::message::GetChatServerReq, ::message::GetChatServerRsp>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::message::GetChatServerReq, ::message::GetChatServerRsp>* streamer) {
                       return this->StreamedGetChatServer(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetChatServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetChatServer(::grpc::ServerContext* /*context*/, const ::message::GetChatServerReq* /*request*/, ::message::GetChatServerRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetChatServer(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::message::GetChatServerReq,::message::GetChatServerRsp>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetChatServer<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetChatServer<Service > StreamedService;
};

}  // namespace message


#endif  // GRPC_message_2eproto__INCLUDED
