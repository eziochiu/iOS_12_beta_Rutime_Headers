/* made by EzioChiu.
 */

@protocol FCFeedPaginating <NSObject>

@required

- (FCFeedEdition *)editionAtDate:(NSDate *)arg1;
- (FCFeedEdition *)editionFollowingEdition:(FCFeedEdition *)arg1;

@end
