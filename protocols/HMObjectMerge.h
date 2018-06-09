/* made by EzioChiu.
 */

@protocol HMObjectMerge <NSObject>

@required

- (bool)_mergeWithNewObject:(id <HMObjectMerge>)arg1 operations:(HMObjectMergeOperations *)arg2;
- (NSUUID *)uniqueIdentifier;

@optional

- (void)mergeWithNewObjectNoMergeCount:(id <HMObjectMerge>)arg1;

@end
