/* made by EzioChiu.
 */

@protocol HDSyncChange <NSObject>

@required

- (NSArray *)decodedObjectsForProfile:(HDProfile *)arg1 error:(id*)arg2;
- (bool)done;
- (bool)isSpeculative;
- (<HDSyncAnchorMap> *)requiredAnchorMapWithProfile:(HDProfile *)arg1 error:(id*)arg2;
- (NSNumber *)sequenceNumber;
- (void)setObjects:(NSArray *)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 requiredAnchorMap:(id <HDSyncAnchorMap>)arg3;
- (void)setSequenceNumber:(long long)arg1 done:(bool)arg2;
- (struct HDSyncAnchorRange { long long x1; long long x2; })syncAnchorRange;
- (Class)syncEntityClassForProfile:(HDProfile *)arg1;
- (HDSyncEntityIdentifier *)syncEntityIdentifier;

@end
