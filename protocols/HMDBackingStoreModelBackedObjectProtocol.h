/* made by EzioChiu.
 */

@protocol HMDBackingStoreModelBackedObjectProtocol <NSObject>

@required

- (NSArray *)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (NSArray *)modelBackedObjects;
- (NSUUID *)modelIdentifier;
- (HMDBackingStoreModelObject *)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (NSUUID *)modelParentIdentifier;

@end
