/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLDeviceDiscoverySocketHandler : WLSocketHandler <NSXMLParserDelegate> {
    <WLDeviceDiscoverySocketHandlerDelegate> * _delegate;
    bool  _handshakeDataSent;
    NSObject<OS_dispatch_source> * _readSource;
    int  _sockfd;
    WLSourceDevice * _sourceDevice;
    NSString * _srpPassword;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WLDeviceDiscoverySocketHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int sockfd;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_commandStringWithData:(id)arg1;
- (bool)_generateSourceDeviceFromHandshakeData:(id)arg1;
- (void)_handleHandshakeData:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_handshakeCommandData;
- (id)_handshakeResponseData;
- (void)_observeDataReadEvent;
- (id)_okResponseData;
- (void)_performSRPAuthenticationAndHandshake;
- (void)close;
- (id)delegate;
- (void)handleDataReadEventWithSocket:(int)arg1;
- (void)handleReceivedData:(id)arg1;
- (id)initWithSocket:(int)arg1 srpPassword:(id)arg2 delegate:(id)arg3;
- (void)invalidateWithError:(id)arg1;
- (void)resume;
- (void)sendData:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (int)sockfd;
- (void)suspend;

@end
