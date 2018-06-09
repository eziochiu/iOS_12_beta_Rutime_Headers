/* made by EzioChiu.
 */

@protocol MusicSwitcherButtonContainerViewDelegate <NSObject>

@optional

- (void)leadingButtonWasSelectedInContainerView:(MusicSwitcherButtonContainerView *)arg1;
- (void)switcherButtonWasSelectedInContainerView:(MusicSwitcherButtonContainerView *)arg1;
- (void)trailingButtonWasSelectedInContainerView:(MusicSwitcherButtonContainerView *)arg1;

@end
