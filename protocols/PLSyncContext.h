/* made by EzioChiu.
 */

@protocol PLSyncContext <NSObject>

@required

- (NSDictionary *)assetAdjustmentStateForCloudIdentifier:(NSString *)arg1;
- (void)deleteFaces:(id <NSFastEnumeration>)arg1;
- (<PLSyncableDetectedFace> *)makeFace;
- (<PLSyncablePerson> *)personForUUID:(NSString *)arg1;
- (bool)personUUIDIsDeleted:(NSString *)arg1;
- (NSArray *)personUUIDsToDedupe;
- (bool)serverSupportsGraphHome;
- (bool)serverSupportsSuggestion;
- (bool)serverSupportsVision;
- (void)setPersonUUIDsToDedupe:(NSArray *)arg1;

@end
