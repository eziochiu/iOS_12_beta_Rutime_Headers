/* made by EzioChiu.
 */

@protocol CPTemplateDelegate <NSObject>

@required

- (void)handleActionForControlIdentifier:(NSUUID *)arg1;

@optional

- (void)templateDidAppear:(CPTemplate *)arg1 animated:(bool)arg2;
- (void)templateDidDisappear:(CPTemplate *)arg1 animated:(bool)arg2;
- (void)templateWillAppear:(CPTemplate *)arg1 animated:(bool)arg2;
- (void)templateWillDisappear:(CPTemplate *)arg1 animated:(bool)arg2;

@end
