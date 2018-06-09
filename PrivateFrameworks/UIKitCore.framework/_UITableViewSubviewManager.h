/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewSubviewManager : NSObject {
    NSMapTable * _cellsReadyForReuse;
    UITableViewCell * _reorderingCell;
    NSCountedSet * _reusePreventedCells;
    UITableView<_UITableViewSubviewManagerDelegate> * _tableView;
}

@property (nonatomic, retain) NSMapTable *cellsReadyForReuse;
@property (nonatomic, retain) UITableViewCell *reorderingCell;
@property (nonatomic, retain) NSCountedSet *reusePreventedCells;
@property (nonatomic) UITableView<_UITableViewSubviewManagerDelegate> *tableView;

- (void).cxx_destruct;
- (void)cellReadyForReuse:(id)arg1 withIndexPath:(id)arg2 didEndDisplaying:(bool)arg3;
- (id)cellsReadyForReuse;
- (id)initWithTableView:(id)arg1;
- (void)preventReuseOfCell:(id)arg1;
- (id)reorderingCell;
- (void)resumeReuseOfCell:(id)arg1;
- (id)reusePreventedCells;
- (void)setCellsReadyForReuse:(id)arg1;
- (void)setReorderingCell:(id)arg1;
- (void)setReusePreventedCells:(id)arg1;
- (void)setTableView:(id)arg1;
- (bool)shouldDeferReuseOfCell:(id)arg1;
- (id)tableView;

@end
