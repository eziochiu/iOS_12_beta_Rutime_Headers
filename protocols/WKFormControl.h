/* made by EzioChiu.
 */

@protocol WKFormControl

@required

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (UIView *)controlView;

@end
