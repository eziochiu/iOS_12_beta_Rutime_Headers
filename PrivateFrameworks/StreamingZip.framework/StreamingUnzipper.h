/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol> {
    int  _activeDelegateMethods;
    StreamingUnzipState * _currentState;
    void * _decompressionOutputBuffer;
    double  _lastExtractionProgressSent;
    long long  _sandboxToken;
    NSObject<OS_dispatch_queue> * inProcessDelegateQueue;
    <StreamingUnzipDelegateProtocol> * inProcessExtractorDelegate;
    NSXPCConnection * xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *inProcessDelegateQueue;
@property (nonatomic) <StreamingUnzipDelegateProtocol> *inProcessExtractorDelegate;
@property (nonatomic) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_beginNonStreamablePassthroughWithRemainingBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)_extractionEnteredPassThroughMode;
- (void)_sendExtractionCompleteAtArchivePath:(id)arg1;
- (void)_sendExtractionProgress:(double)arg1;
- (void)_setErrorState;
- (void)_supplyBytes:(const char *)arg1 length:(unsigned long long)arg2 withReply:(id /* block */)arg3;
- (void)dealloc;
- (void)finishStreamWithReply:(id /* block */)arg1;
- (id)inProcessDelegateQueue;
- (id)inProcessExtractorDelegate;
- (id)init;
- (void)setActiveDelegateMethods:(int)arg1;
- (void)setInProcessDelegateQueue:(id)arg1;
- (void)setInProcessExtractorDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char *)arg2 options:(id)arg3 withReply:(id /* block */)arg4;
- (void)supplyBytes:(id)arg1 withReply:(id /* block */)arg2;
- (void)suspendStreamWithReply:(id /* block */)arg1;
- (void)terminateStreamWithReply:(id /* block */)arg1;
- (id)xpcConnection;

@end
