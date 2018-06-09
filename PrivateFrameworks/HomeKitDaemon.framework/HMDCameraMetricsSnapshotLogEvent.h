/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraMetricsSnapshotLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent> {
    NSNumber * _referenceTimestamp;
    bool  _snapshotForNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *referenceTimestamp;
@property (nonatomic, readonly) bool snapshotForNotification;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (void)addIDSSession:(id)arg1;
- (void)addIDSTransfer:(id)arg1;
- (void)addSnapshotMessaging:(id)arg1;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(bool)arg3 snapshotForNotification:(bool)arg4;
- (id)metricForAWD;
- (id)referenceTimestamp;
- (void)setReferenceTimestamp:(id)arg1;
- (bool)snapshotForNotification;
- (unsigned int)timeSinceReference:(id)arg1;

@end
