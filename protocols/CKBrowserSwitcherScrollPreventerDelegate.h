/* made by EzioChiu.
 */

@protocol CKBrowserSwitcherScrollPreventerDelegate <NSObject>

@required

- (void)scrollPreventer:(CKBrowserSwitcherScrollPreventer *)arg1 didReceiveTouchAtDate:(NSDate *)arg2;
- (void)scrollPreventer:(CKBrowserSwitcherScrollPreventer *)arg1 scrolledToOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollPreventerDidEndDecelerating:(CKBrowserSwitcherScrollPreventer *)arg1;
- (void)scrollPreventerDidLayoutSubviews:(CKBrowserSwitcherScrollPreventer *)arg1;
- (void)scrollPreventerWillBeginDragging:(CKBrowserSwitcherScrollPreventer *)arg1;

@end
