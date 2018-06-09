/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudSubscribeToZoneOperation : CRKCloudEncapsulatedOperation {
    CKRecordZoneID * _zoneId;
}

@property (nonatomic, readonly) CKRecordZoneID *zoneId;

- (void).cxx_destruct;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2 zoneId:(id)arg3;
- (void)main;
- (void)retryableCreateSubscriptionOperationDidFinish:(id)arg1;
- (void)retryableFetchSubscriptionOperationDidFinish:(id)arg1;
- (void)retryableFetchZoneOperationDidFinish:(id)arg1;
- (void)retryableModifyRecordZonesOperationDidFinish:(id)arg1;
- (void)subscribeToZone:(id)arg1;
- (id)zoneId;

@end
