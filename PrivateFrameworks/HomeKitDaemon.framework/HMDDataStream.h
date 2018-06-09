/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStream : NSObject <HMFLogging> {
    <HMDDataStreamDelegate> * _delegate;
    NSPointerArray * _protocols;
    HAPSecuritySessionEncryption * _sessionEncryption;
    <HMDDataStreamTransport> * _transport;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDDataStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSPointerArray *protocols;
@property (nonatomic, retain) HAPSecuritySessionEncryption *sessionEncryption;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HMDDataStreamTransport> *transport;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addProtocol:(id)arg1;
- (void)close;
- (void)connect;
- (id)delegate;
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2;
- (id)protocols;
- (void)sendMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionEncryption;
- (void)setDelegate:(id)arg1;
- (void)setProtocols:(id)arg1;
- (void)setSessionEncryption:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)transport;
- (void)transport:(id)arg1 didFailWithError:(id)arg2;
- (void)transport:(id)arg1 didReceiveRawFrame:(id)arg2;
- (void)transportDidClose:(id)arg1;
- (void)transportDidOpen:(id)arg1;

@end
