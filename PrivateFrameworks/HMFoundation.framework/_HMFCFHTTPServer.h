/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface _HMFCFHTTPServer : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _connections;
    <_HMFCFHTTPServerDelegate> * _delegate;
    struct _CFHTTPServer { } * _internal;
    unsigned long long  _port;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property double connectionIdleTimeout;
@property (nonatomic, readonly) NSMutableArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property <_HMFCFHTTPServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _CFHTTPServer { }*internal;
@property (nonatomic, readonly) unsigned long long port;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)clientQueue;
- (double)connectionIdleTimeout;
- (id)connections;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithPort:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct _CFHTTPServer { }*)internal;
- (void)invalidate;
- (bool)isValid;
- (id)logIdentifier;
- (unsigned long long)port;
- (void)setConnectionIdleTimeout:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWatchdogTimeout:(double)arg1;
- (double)watchdogTimeout;

@end
