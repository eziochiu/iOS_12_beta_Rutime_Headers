/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface _HMFCFHTTPServerConnection : HMFObject <HMFLogging> {
    HMFNetAddress * _address;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <_HMFCFHTTPServerConnectionDelegate> * _delegate;
    struct _CFHTTPServerConnection { } * _internal;
    NSMutableArray * _pendingRequests;
    NSMutableArray * _pendingRespones;
}

@property (nonatomic, readonly) HMFNetAddress *address;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <_HMFCFHTTPServerConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _CFHTTPServerConnection { }*internal;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (nonatomic, readonly) NSMutableArray *pendingRespones;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleCompletedReceivedRequest:(id)arg1 error:(id)arg2;
- (void)_handleCompletedResponse:(struct _CFHTTPServerResponse { }*)arg1 error:(id)arg2;
- (void)_handleRecievedRequestRef:(struct _CFHTTPServerRequest { }*)arg1;
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2;
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2 bodyData:(id)arg3;
- (void)_stopReadBody:(id)arg1;
- (id)address;
- (id)clientQueue;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (void)handleRequest:(id)arg1 bodyReadStream:(struct __CFReadStream { }*)arg2 eventType:(unsigned long long)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConnectionRef:(struct _CFHTTPServerConnection { }*)arg1;
- (struct _CFHTTPServerConnection { }*)internal;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)logIdentifier;
- (bool)open;
- (id)pendingRequests;
- (id)pendingRespones;
- (void)sendResponse:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
