/* made by EzioChiu.
 */

@protocol _UIStatusBarDisplayable <NSObject>

@optional

- (UIAccessibilityHUDItem *)accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(_UIStatusBarStyleAttributes *)arg1;
- (bool)wantsCrossfade;

@end
