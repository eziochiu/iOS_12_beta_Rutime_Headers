/* made by EzioChiu.
 */

@protocol VKPolylineObserver <NSObject>

@required

- (void)polyline:(VKPolylineOverlay *)arg1 selectedSections:(NSArray *)arg2 deselectedSections:(NSArray *)arg3;
- (void)setNeedsLayoutForPolyline:(VKPolylineOverlay *)arg1;

@end
