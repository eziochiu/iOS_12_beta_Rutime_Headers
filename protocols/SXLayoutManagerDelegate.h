/* made by EzioChiu.
 */

@protocol SXLayoutManagerDelegate <NSObject>

@optional

- (void)layoutManager:(id <SXLayoutManager>)arg1 didLayoutBlueprint:(SXLayoutBlueprint *)arg2 layoutDataProvider:(SXLayoutDataProvider *)arg3;
- (void)layoutManager:(id <SXLayoutManager>)arg1 willLayoutForViewportSize:(struct CGSize { double x1; double x2; })arg2 layoutDataProvider:(SXLayoutDataProvider *)arg3;

@end
