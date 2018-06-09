/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDurationEvent : HMDTimeEvent <HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    NSNumber * _duration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleUpdateRequest:(id)arg1;
- (id)_nextTimerDate;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)createPayload;
- (id)description;
- (id)duration;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)metricData;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)setDuration:(id)arg1;

@end
