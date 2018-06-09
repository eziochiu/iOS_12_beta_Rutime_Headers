/* made by EzioChiu.
 */

@protocol MusicTableViewDelegate <UITableViewDelegate>

@optional

- (void)tableView:(MusicTableView *)arg1 didDeselectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 didSelectAddButtonForCell:(UITableViewCell *)arg2 events:(unsigned long long)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectHeaderViewForSection:(long long)arg2;
- (bool)tableView:(MusicTableView *)arg1 shouldForceBottomSeparatorVisibleForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 willDeselectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 willSelectHeaderViewForSection:(long long)arg2;
- (void)tableViewDidLayoutSubviews:(MusicTableView *)arg1;
- (void)tableViewInherritedLayoutInsetsDidChange:(MusicTableView *)arg1;
- (void)tableViewTintColorDidChange:(MusicTableView *)arg1;

@end
