/* made by EzioChiu.
 */

@protocol CalContactsProviderProtocol

@required

- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2;

@end
