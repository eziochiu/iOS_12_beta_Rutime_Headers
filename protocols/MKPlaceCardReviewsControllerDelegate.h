/* made by EzioChiu.
 */

@protocol MKPlaceCardReviewsControllerDelegate <NSObject>

@optional

- (void)placeCardReviewsController:(MKPlaceReviewsViewController *)arg1 didSelectViewReview:(id <MKMapItemProviderRatingSnippet>)arg2;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(MKPlaceReviewsViewController *)arg1;

@end
