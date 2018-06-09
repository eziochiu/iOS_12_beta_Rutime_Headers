/* made by EzioChiu.
 */

@protocol TPDialerKeypadProtocol <NSObject>

@required

- (void)highlightKeyAtIndex:(long long)arg1;
- (long long)indexForHighlightedKey;
- (void)setDelegate:(id <TPDialerKeypadDelegate>)arg1;
- (void)setPlaysSounds:(bool)arg1;

@optional

- (void)performTapActionCancelForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (void)replaceButton:(UIView<TPNumberPadButtonProtocol> *)arg1 atIndex:(unsigned long long)arg2;

@end
