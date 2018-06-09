/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRepairZonePCSOperation : CKDatabaseOperation {
    NSArray * _zoneIDs;
    id /* block */  _zoneRepairedBlock;
}

@property (nonatomic, retain) NSArray *zoneIDs;
@property (nonatomic, copy) id /* block */ zoneRepairedBlock;

- (void).cxx_destruct;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithZoneIDsToRepair:(id)arg1;
- (void)performCKOperation;
- (void)setZoneIDs:(id)arg1;
- (void)setZoneRepairedBlock:(id /* block */)arg1;
- (id)zoneIDs;
- (id /* block */)zoneRepairedBlock;

@end
