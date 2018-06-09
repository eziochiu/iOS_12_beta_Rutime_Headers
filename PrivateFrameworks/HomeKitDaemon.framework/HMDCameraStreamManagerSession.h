/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamManagerSession : HMFObject {
    HMFMessage * _currentMessage;
    NSString * _destinationID;
    HMDCameraSessionID * _sessionID;
    NSNumber * _slotIdentifier;
    <HMDCameraStreamControlManagerProtocol> * _streamControlManager;
    HMFTimer * _streamSetupTimer;
    NSString * _streamShowingAppIdentifier;
}

@property (nonatomic, retain) HMFMessage *currentMessage;
@property (nonatomic, readonly) NSString *destinationID;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic, retain) NSNumber *slotIdentifier;
@property (nonatomic, readonly) <HMDCameraStreamControlManagerProtocol> *streamControlManager;
@property (nonatomic, readonly) HMFTimer *streamSetupTimer;
@property (nonatomic, readonly) NSString *streamShowingAppIdentifier;

- (void).cxx_destruct;
- (id)currentMessage;
- (id)destinationID;
- (id)initWithSessionID:(id)arg1 destinationID:(id)arg2 streamShowingAppIdentifier:(id)arg3 controlManager:(id)arg4 setupWaitPeriod:(unsigned long long)arg5 error:(id*)arg6;
- (id)sessionID;
- (void)setCurrentMessage:(id)arg1;
- (void)setSlotIdentifier:(id)arg1;
- (id)slotIdentifier;
- (id)streamControlManager;
- (id)streamSetupTimer;
- (id)streamShowingAppIdentifier;

@end
