/* made by EzioChiu.
 */

@protocol UIKeyboardSplitControlMenuItem <NSObject>

@required

- (void)actionForMenu:(UIKeyboardSplitControlMenu *)arg1;
- (NSString *)label;
- (bool)visible;

@end
