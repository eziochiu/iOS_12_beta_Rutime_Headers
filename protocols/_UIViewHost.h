/* made by EzioChiu.
 */

@protocol _UIViewHost <NSObject>

@required

- (void)addHostedView:(void *)arg1 withViewRemovalHandler:(void *)arg2; // needs 2 arg types, found 6: UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)hasHostedViews;
- (UIScreen *)hostingScreen;

@end
