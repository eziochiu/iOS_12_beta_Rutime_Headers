/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFPersistentHistoryModel : NSObject <_PFAncillaryModelFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_hasTombstonesInUserInfo:(id)arg1;
+ (int)_maxCountOfTombstonesInModel:(id)arg1;
+ (id)_tombstonesColumnsForEntity:(id)arg1;
+ (id)_tombstonesForEntity:(id)arg1;
+ (unsigned long long)ancillaryEntityCount;
+ (unsigned long long)ancillaryEntityOffset;
+ (id)ancillaryModelNamespace;
+ (void)createModelsWithTombstoneCount:(int)arg1 andOptions:(id)arg2;
+ (id)newPersistentHistoryManagedObjectModelForSQLModel:(id)arg1 options:(id)arg2;
+ (id)newPersistentHistorySQLModelForSQLModel:(id)arg1 options:(id)arg2;
+ (void)resetCaches;

@end
