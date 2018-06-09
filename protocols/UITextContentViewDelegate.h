/* made by EzioChiu.
 */

@protocol UITextContentViewDelegate <NSObject>

@optional

- (void)textContentView:(UITextContentView *)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(UITextContentView *)arg1 shouldChangeSizeForContentSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(UITextContentView *)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(NSString *)arg3;
- (bool)textContentView:(UITextContentView *)arg1 shouldScrollForPendingContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)textContentViewDidBeginEditing:(UITextContentView *)arg1;
- (void)textContentViewDidChange:(UITextContentView *)arg1;
- (void)textContentViewDidChangeSelection:(UITextContentView *)arg1;
- (void)textContentViewDidEndEditing:(UITextContentView *)arg1;
- (bool)textContentViewShouldBeginEditing:(UITextContentView *)arg1;
- (bool)textContentViewShouldEndEditing:(UITextContentView *)arg1;

@end
