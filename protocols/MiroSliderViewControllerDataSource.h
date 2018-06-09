/* made by EzioChiu.
 */

@protocol MiroSliderViewControllerDataSource <NSObject>

@required

- (unsigned long long)countForSliderViewController:(MiroSliderViewController *)arg1;
- (NSString *)displayNameForIndexPath:(NSIndexPath *)arg1 forSliderViewController:(MiroSliderViewController *)arg2;
- (NSIndexPath *)selectedIndexPathForSliderViewController:(MiroSliderViewController *)arg1;
- (void)sliderViewController:(MiroSliderViewController *)arg1 didEndDraggingAtIndexPath:(NSIndexPath *)arg2;
- (void)sliderViewController:(MiroSliderViewController *)arg1 setSelectedIndexPath:(NSIndexPath *)arg2;
- (void)sliderViewController:(MiroSliderViewController *)arg1 updateSliderPercentage:(float)arg2;
- (void)sliderViewControllerDidBeginDragging:(MiroSliderViewController *)arg1;

@end
