/* made by EzioChiu.
 */

@protocol SBUIBannerView <NSObject>

@required

- (SBUIBannerContext *)bannerContext;

@optional

- (bool)shouldBorrowScreen;

@end
