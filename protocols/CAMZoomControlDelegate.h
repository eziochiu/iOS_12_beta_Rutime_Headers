/* made by EzioChiu.
 */

@protocol CAMZoomControlDelegate <NSObject>

@optional

- (bool)canToggleBetweenWideAndTelephotoForZoomControl:(CAMZoomControl *)arg1;
- (void)toggleBetweenWideAndTelephotoForZoomControl:(CAMZoomControl *)arg1;
- (void)zoomControl:(CAMZoomControl *)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;

@end
