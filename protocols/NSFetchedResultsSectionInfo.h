/* made by EzioChiu.
 */

@protocol NSFetchedResultsSectionInfo

@required

- (NSString *)indexTitle;
- (NSString *)name;
- (unsigned long long)numberOfObjects;
- (NSArray *)objects;

@end
