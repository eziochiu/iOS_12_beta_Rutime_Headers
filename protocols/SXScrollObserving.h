/* made by EzioChiu.
 */

@protocol SXScrollObserving <NSObject>

@required

- (void)didScroll;
- (void)scrollingDidStop;
- (void)scrollingWillStart;

@end
