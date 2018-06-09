/* made by EzioChiu.
 */

@protocol MKUserLocationHeadingIndicator <NSObject>

@required

- (void)updateHeading:(double)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateTintColor:(UIColor *)arg1;

@end
