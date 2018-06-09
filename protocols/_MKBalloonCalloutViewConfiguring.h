/* made by EzioChiu.
 */

@protocol _MKBalloonCalloutViewConfiguring <NSObject>

@required

- (long long)_balloonCalloutStyle;
- (UIImage *)_balloonImage;
- (UIColor *)_balloonStrokeColor;
- (UIColor *)_balloonTintColor;

@optional

- (bool)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1;
- (UIView *)_balloonContentView;
- (UIColor *)_balloonInnerStrokeColor;

@end
