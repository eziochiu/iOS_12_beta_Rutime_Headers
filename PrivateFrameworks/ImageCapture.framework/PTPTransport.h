/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPTransport : NSObject {
    bool  _busy;
    struct __CFRunLoopSource { } * _callbackDummyMachPortRLSrc;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _callbackThread;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _callbackThreadCondition;
    bool  _callbackThreadConditionSignaled;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _callbackThreadMutex;
    struct __CFRunLoop { } * _callbackThreadRunLoop;
    unsigned int  _canceledTransactionID;
    int  _connectionStatus;
    PTPWrappedBytes * _dataForTransaction;
    id  _delegate;
    bool  _delegateNeedsResponse;
    unsigned long long  _excessReceivedDataSize;
    bool  _failedMD5;
    unsigned char  _headerBuffer;
    bool  _headerBufferFound;
    unsigned char  _md5;
    NSObject<OS_dispatch_queue> * _ptpTransportIOQ;
    PTPOperationResponsePacket * _response;
    bool  _responseReceived;
    int  _role;
    int  _status;
    bool  _timedOut;
    unsigned int  _totalBytesFilled;
    unsigned short  _type;
}

- (void)abortPendingIO;
- (void*)callbackThreadFunction;
- (struct __CFRunLoop { }*)callbackThreadRunLoop;
- (void)cancelTransaction:(id)arg1;
- (void)cleanupCallbackThread;
- (bool)connected;
- (int)connectionStatus;
- (void)dealloc;
- (void)deviceReset;
- (unsigned short)deviceStatus;
- (void)endCallbackThread;
- (unsigned long long)excessReceivedDataSize;
- (id)init;
- (int)lockCallbackThreadMutex;
- (id)md5;
- (id)response;
- (bool)responseReceived;
- (int)role;
- (void)sendData:(id)arg1;
- (bool)sendEvent:(id)arg1;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned int)arg3;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned int)arg3;
- (bool)sendResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseReceived:(bool)arg1;
- (void)setStatus:(int)arg1 withInfo:(char *)arg2;
- (void)setTimedOut:(bool)arg1;
- (int)signalCallbackThreadCondition;
- (bool)startCallbackThread;
- (bool)startInitiator;
- (bool)startResponder;
- (void)stop;
- (bool)timedOut;
- (unsigned short)type;
- (int)unlockCallbackThreadMutex;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long long)arg1;

@end
