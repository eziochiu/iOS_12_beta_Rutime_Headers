/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudFetchZoneOperation : CRKCloudOperation <CRKCloudResetable> {
    CKRecordZoneID * _zoneId;
}

@property (nonatomic, readonly) CKRecordZoneID *zoneId;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2;
- (void)main;
- (id)resetOperation;
- (id)zoneId;

@end
