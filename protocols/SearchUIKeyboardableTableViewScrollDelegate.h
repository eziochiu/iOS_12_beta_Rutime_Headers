/* made by EzioChiu.
 */

@protocol SearchUIKeyboardableTableViewScrollDelegate <NSObject>

@required

- (void)didBeginScrolling;
- (void)didScrollPastBottomOfContent;
- (void)setShouldMonitorScrollingPastBottomOfContent:(bool)arg1;
- (bool)shouldMonitorScrollingPastBottomOfContent;

@end
