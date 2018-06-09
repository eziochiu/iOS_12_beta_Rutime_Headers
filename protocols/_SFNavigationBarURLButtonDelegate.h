/* made by EzioChiu.
 */

@protocol _SFNavigationBarURLButtonDelegate <NSObject>

@required

- (bool)navigationBarURLButton:(_SFNavigationBarURLButton *)arg1 shouldShowMenuForGestureWithRecognizer:(UIGestureRecognizer *)arg2;
- (void)navigationBarURLButtonDidReceiveCopyCommand:(_SFNavigationBarURLButton *)arg1;
- (void)navigationBarURLButtonDidReceivePasteCommand:(_SFNavigationBarURLButton *)arg1;
- (bool)navigationBarURLButtonShouldCopy:(_SFNavigationBarURLButton *)arg1;
- (bool)navigationBarURLButtonShouldPaste:(_SFNavigationBarURLButton *)arg1;
- (NSString *)textForNavigationBarURLButton:(_SFNavigationBarURLButton *)arg1;

@end
