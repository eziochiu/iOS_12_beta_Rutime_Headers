/* made by EzioChiu.
 */

@protocol PHObjectIDBackedFetchResult

@required

- (NSArray *)fetchedObjectIDs;
- (NSSet *)fetchedObjectIDsSet;
- (NSManagedObjectID *)objectIDAtIndex:(unsigned long long)arg1;

@end
