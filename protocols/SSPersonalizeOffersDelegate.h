/* made by EzioChiu.
 */

@protocol SSPersonalizeOffersDelegate <SSRequestDelegate>

@optional

- (void)personalizeOffersRequest:(SSPersonalizeOffersRequest *)arg1 didReceiveResponse:(SSPersonalizeOffersResponse *)arg2;

@end
