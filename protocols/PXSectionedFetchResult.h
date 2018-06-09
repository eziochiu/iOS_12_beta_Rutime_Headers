/* made by EzioChiu.
 */

@protocol PXSectionedFetchResult <NSObject>

@required

- (bool)containsObject:(id <NSObject><NSCopying>)arg1;
- (long long)count;
- (<NSObject><NSCopying> *)objectAtIndex:(unsigned long long)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;

@end
