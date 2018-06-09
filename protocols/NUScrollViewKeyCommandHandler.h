/* made by EzioChiu.
 */

@protocol NUScrollViewKeyCommandHandler <NSObject>

@required

- (void)configureWithViewController:(UIViewController *)arg1 selector:(SEL)arg2;
- (void)handleKeyCommand:(UIKeyCommand *)arg1 forScrollView:(UIScrollView *)arg2;

@end
