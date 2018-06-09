/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudModifyRecordZonesOperation : CRKCloudOperation <CRKCloudResetable> {
    NSSet * _zoneIdsToDelete;
    NSSet * _zonesToSave;
}

@property (nonatomic, readonly) NSSet *zoneIdsToDelete;
@property (nonatomic, readonly) NSSet *zonesToSave;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 zonesToSave:(id)arg2 zoneIdsToDelete:(id)arg3;
- (void)main;
- (id)resetOperation;
- (id)zoneIdsToDelete;
- (id)zonesToSave;

@end
