/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudModifyRecordsOperation : CRKCloudOperation <CRKCloudResetable> {
    bool  _atomic;
    NSSet * _recordIdsToDelete;
    NSSet * _recordsToSave;
}

@property (getter=isAtomic, nonatomic, readonly) bool atomic;
@property (nonatomic, readonly) NSSet *recordIdsToDelete;
@property (nonatomic, readonly) NSSet *recordsToSave;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 recordsToSave:(id)arg2 recordIdsToDelete:(id)arg3 isAtomic:(bool)arg4;
- (bool)isAtomic;
- (void)main;
- (id)recordIdsToDelete;
- (id)recordsToSave;
- (id)resetOperation;

@end
