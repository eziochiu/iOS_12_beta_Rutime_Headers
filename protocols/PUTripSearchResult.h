/* made by EzioChiu.
 */

@protocol PUTripSearchResult <NSObject>

@required

- (NSString *)collectionSubtitle;
- (NSString *)collectionTitle;
- (NSArray *)tripMomentUUIDs;

@end
