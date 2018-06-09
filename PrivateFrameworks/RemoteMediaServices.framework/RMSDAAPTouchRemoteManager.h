/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSDAAPTouchRemoteManager : NSObject <RMSTouchRemoteSocketDelegate> {
    long long  _controlPromptRevision;
    <RMSDAAPTouchRemoteManagerDelegate> * _delegate;
    int  _encryptionKey;
    int  _port;
    int  _portSecret;
    RMSDAAPRequestManager * _requestManager;
    bool  _shouldWriteTimestampsForPPT;
    RMSTouchRemoteSocket * _socket;
    float  _touchDistanceMax;
    float  _touchDistanceMin;
    unsigned int  _touchTimeMax;
    unsigned int  _touchTimeMin;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSDAAPTouchRemoteManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSocket;
- (struct CGPoint { double x1; double x2; })_locationForDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)_parsePortInfoItems:(id)arg1;
- (void)_requestPortInfo;
- (void)_requestPromptUpdate:(id /* block */)arg1;
- (unsigned int)_timeForDirection:(long long)arg1 repeatCount:(int)arg2;
- (id)delegate;
- (id)initWithRequestManager:(id)arg1;
- (void)initiateControlWithCompletionHandler:(id /* block */)arg1;
- (void)sendNavigationCommand:(long long)arg1;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)touchRemoteSocketDidConnect:(id)arg1;
- (void)touchRemoteSocketDidDisconnect:(id)arg1;

@end
