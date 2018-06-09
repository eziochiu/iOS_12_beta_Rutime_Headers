/* made by EzioChiu.
 */

@protocol PKPassGroupStackViewDelegate <NSObject>

@required

- (void)groupStackView:(PKPassGroupStackView *)arg1 deleteConfirmedForPass:(PKPass *)arg2;
- (void)groupStackViewDidBeginReordering:(PKPassGroupStackView *)arg1;
- (void)groupStackViewDidEndReordering:(PKPassGroupStackView *)arg1;
- (void)reloadGroupsForGroupStackView:(PKPassGroupStackView *)arg1;
- (unsigned long long)suppressedContent;

@optional

- (void)groupStackView:(PKPassGroupStackView *)arg1 didTransitionToState:(long long)arg2 animated:(bool)arg3;
- (void)groupStackView:(PKPassGroupStackView *)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)groupStackView:(PKPassGroupStackView *)arg1 transitioningToState:(long long)arg2 animated:(bool)arg3;
- (void)groupStackView:(PKPassGroupStackView *)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(bool)arg3;
- (void)groupStackView:(PKPassGroupStackView *)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(bool)arg3;
- (bool)groupStackViewShouldAllowReordering:(PKPassGroupStackView *)arg1;

@end
