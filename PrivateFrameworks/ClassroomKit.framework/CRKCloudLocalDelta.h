/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudLocalDelta : NSObject <NSSecureCoding> {
    bool  _atomic;
    NSString * _identifier;
    NSMutableSet * _mutableAssetIdentifiers;
    NSMutableSet * _mutableCreateRecords;
    NSMutableSet * _mutableDeleteRecordIds;
    NSMutableSet * _mutableUpdateRecords;
}

@property (nonatomic, readonly) NSSet *assetIdentifiers;
@property (getter=isAtomic, nonatomic) bool atomic;
@property (nonatomic, readonly) NSSet *createRecordIds;
@property (nonatomic, readonly, copy) NSSet *createRecords;
@property (nonatomic, readonly, copy) NSSet *deleteRecordIds;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableSet *mutableAssetIdentifiers;
@property (nonatomic, retain) NSMutableSet *mutableCreateRecords;
@property (nonatomic, retain) NSMutableSet *mutableDeleteRecordIds;
@property (nonatomic, retain) NSMutableSet *mutableUpdateRecords;
@property (nonatomic, readonly) NSSet *updateRecordIds;
@property (nonatomic, readonly, copy) NSSet *updateRecords;

+ (id)instanceWithCreateRecords:(id)arg1 updateRecords:(id)arg2 deleteRecordIds:(id)arg3 isAtomic:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAssetIdentifiers:(id)arg1;
- (void)addCreateRecord:(id)arg1;
- (void)addDeleteRecordId:(id)arg1;
- (void)addUpdateRecord:(id)arg1;
- (id)assetIdentifiers;
- (id)createRecordIds;
- (id)createRecords;
- (id)createRecordsMatchingIds:(id)arg1;
- (id)deleteRecordIds;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAtomic;
- (bool)isEmpty;
- (void)mergeDelta:(id)arg1;
- (id)mutableAssetIdentifiers;
- (id)mutableCreateRecords;
- (id)mutableDeleteRecordIds;
- (id)mutableUpdateRecords;
- (id)recordsInSet:(id)arg1 matchingIds:(id)arg2;
- (void)removeCreatesMatchingIds:(id)arg1;
- (void)removeDeleteIdsMatchingIds:(id)arg1;
- (void)removeUpdatesMatchingIds:(id)arg1;
- (void)setAtomic:(bool)arg1;
- (void)setCreateRecords:(id)arg1;
- (void)setDeleteRecordIds:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMutableAssetIdentifiers:(id)arg1;
- (void)setMutableCreateRecords:(id)arg1;
- (void)setMutableDeleteRecordIds:(id)arg1;
- (void)setMutableUpdateRecords:(id)arg1;
- (void)setUpdateRecords:(id)arg1;
- (id)updateRecordIds;
- (id)updateRecords;
- (id)updateRecordsMatchingIds:(id)arg1;

@end
