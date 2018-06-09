/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCalendarEvent : HMDTimeEvent <HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    NSDateComponents * _fireDateComponents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDateComponents *fireDateComponents;
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
- (bool)areMonthDayNotMatching:(id)arg1;
- (id)createPayload;
- (id)description;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDateComponents;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)metricData;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)setFireDateComponents:(id)arg1;

@end
