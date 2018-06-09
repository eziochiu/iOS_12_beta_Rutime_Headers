/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSiriSession : NSObject <HMFLogging> {
    <HMDSiriSessionDelegate> * _delegate;
    NSString * _identifier;
    bool  _isStreaming;
    HMDSiriRemoteInputServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDSiriSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isStreaming;
@property (nonatomic, readonly) HMDSiriRemoteInputServer *server;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleResetStream;
- (void)handleStartStream;
- (void)handleStopStream;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 server:(id)arg2;
- (void)invalidate;
- (bool)isStreaming;
- (void)publish;
- (void)sendAudioFrame:(id)arg1 sequenceNumber:(long long)arg2 gain:(double)arg3;
- (void)sendMsg:(const char *)arg1 args:(id)arg2;
- (id)server;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsStreaming:(bool)arg1;
- (void)startStream:(id /* block */)arg1;
- (void)stopStream:(id /* block */)arg1;

@end
