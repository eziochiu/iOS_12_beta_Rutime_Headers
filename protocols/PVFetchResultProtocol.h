/* made by EzioChiu.
 */

@protocol PVFetchResultProtocol <NSFastEnumeration>

@required

- (unsigned long long)count;
- (NSArray *)fetchedObjects;

@end
