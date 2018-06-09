/* made by EzioChiu.
 */

@protocol RUITableViewRowDelegate

@required

- (void)rowDidChange:(RUITableViewRow *)arg1 action:(int)arg2;
- (void)rowDidEndEditing:(RUITableViewRow *)arg1;
- (void)rowIsFirstResponder:(RUITableViewRow *)arg1;
- (NSURL *)sourceURLForRUITableViewRow;
- (Class)tableCellClassForTableViewRow:(RUITableViewRow *)arg1;
- (id)textFieldRow:(RUITableViewRow *)arg1 changeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(NSString *)arg3;

@end
