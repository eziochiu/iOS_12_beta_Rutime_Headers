/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

@interface KCPairingChannel : NSObject {
    bool  _acceptorWillSendInitialSyncCredentials;
    NSXPCConnection * _connection;
    unsigned int  _counter;
    bool  _initator;
    bool  _needInitialSync;
    id /* block */  _nextState;
    KCPairingChannelContext * _peerVersionContext;
}

@property bool acceptorWillSendInitialSyncCredentials;
@property (retain) NSXPCConnection *connection;
@property unsigned int counter;
@property bool initator;
@property (readonly) bool needInitialSync;
@property (copy) id /* block */ nextState;
@property KCPairingChannelContext *peerVersionContext;

+ (bool)isSupportedPlatform;
+ (id)pairingChannelAcceptor:(id)arg1;
+ (id)pairingChannelInitiator:(id)arg1;

- (void).cxx_destruct;
- (void)acceptorFirstPacket:(id)arg1 complete:(id /* block */)arg2;
- (void)acceptorSecondPacket:(id)arg1 complete:(id /* block */)arg2;
- (void)acceptorThirdPacket:(id)arg1 complete:(id /* block */)arg2;
- (bool)acceptorWillSendInitialSyncCredentials;
- (id)compressData:(id)arg1;
- (id)connection;
- (unsigned int)counter;
- (id)decompressData:(id)arg1;
- (bool)ensureControlChannel;
- (void)exchangePacket:(id)arg1 complete:(id /* block */)arg2;
- (id)exchangePacket:(id)arg1 complete:(bool*)arg2 error:(id*)arg3;
- (id)initAsInitiator:(bool)arg1 version:(id)arg2;
- (bool)initator;
- (void)initatorCompleteSecondPacket:(id /* block */)arg1;
- (void)initatorFirstPacket:(id)arg1 complete:(id /* block */)arg2;
- (void)initatorFourthPacket:(id)arg1 complete:(id /* block */)arg2;
- (void)initatorSecondPacket:(id)arg1 complete:(id /* block */)arg2;
- (void)initatorThirdPacket:(id)arg1 complete:(id /* block */)arg2;
- (bool)needInitialSync;
- (id /* block */)nextState;
- (void)oneStepTooMany:(id)arg1 complete:(id /* block */)arg2;
- (id)peerVersionContext;
- (void)setAcceptorWillSendInitialSyncCredentials:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setCounter:(unsigned int)arg1;
- (void)setInitator:(bool)arg1;
- (void)setNextState:(id /* block */)arg1;
- (void)setNextStateError:(id)arg1 complete:(id /* block */)arg2;
- (void)setPeerVersionContext:(id)arg1;
- (void)setXPCConnectionObject:(id)arg1;
- (void)validateStart:(id /* block */)arg1;

@end
