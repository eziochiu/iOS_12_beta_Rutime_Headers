/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUMFiSession : NSObject <NSStreamDelegate> {
    EAAccessory * _device;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSInputStream * _eaInputStream;
    NSOutputStream * _eaOutputStream;
    EASession * _eaSession;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSString * _protocolString;
    char * _readBuffer;
    unsigned long long  _readLen;
    CUMFiReadRequest * _readRequestCurr;
    CUMFiReadRequest * _readRequestList;
    id * _readRequestNext;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    const char * _writeBase;
    const char * _writeEnd;
    const char * _writePtr;
    CUMFiWriteRequest * _writeRequestCurr;
    CUMFiWriteRequest * _writeRequestList;
    id * _writeRequestNext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EAAccessory *device;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *protocolString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_handleError:(id)arg1;
- (void)_invalidate;
- (void)_processReadRequests;
- (void)_processWriteRequests;
- (void)activate;
- (void)dealloc;
- (id)device;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)protocolString;
- (void)readMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setProtocolString:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeData:(id)arg1 completion:(id /* block */)arg2;

@end
