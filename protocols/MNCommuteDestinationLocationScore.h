/* made by EzioChiu.
 */

@protocol MNCommuteDestinationLocationScore

@required

- (void)updateForLocation:(MNLocation *)arg1;

@optional

- (void)updateForRerouteWithLocation:(MNLocation *)arg1;

@end
