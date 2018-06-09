/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocationEvent : HMDEvent <HMDLocationDelegate, NSSecureCoding> {
    CLRegion * _region;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLRegion *region;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) CLRegion *uniqueRegion;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_activate:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleLocationEventOccured:(id)arg1;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (void)_registerForMessages;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)checkFMFStatus:(id)arg1;
- (id)createPayload;
- (id)description;
- (void)didEnterRegion:(id)arg1;
- (void)didExitRegion:(id)arg1;
- (id)dumpState;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (void)fmfStatusUpdateNotification:(id)arg1;
- (void)informLocationEventOccuranceToResident;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (bool)isActive;
- (void)locationEventOccured;
- (id)metricData;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)region;
- (void)setRegion:(id)arg1;
- (id)uniqueRegion;

@end
