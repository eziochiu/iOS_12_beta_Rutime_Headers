/* made by EzioChiu.
 */

@protocol CMKZoomSliderDelegate <NSObject>

@required

- (void)didHideZoomSlider:(CMKZoomSlider *)arg1;
- (void)didShowZoomSlider:(CMKZoomSlider *)arg1;
- (void)zoomSliderDidBeginAutozooming:(CMKZoomSlider *)arg1;
- (void)zoomSliderDidEndAutozooming:(CMKZoomSlider *)arg1;

@end
