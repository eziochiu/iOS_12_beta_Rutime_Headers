/* made by EzioChiu.
 */

@protocol SXComponentStyleRenderer <NSObject>

@required

- (void)applyComponentStyle;
- (void)componentVisiblityStateDidChange:(long long)arg1;
- (void)prepareForComponentView:(SXComponentView *)arg1;

@end
