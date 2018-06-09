/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventNotesDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
    bool  _cellNeedsUpdate;
    UITableViewCell * _moreButtonCell;
    <EKEventDetailNotesCellDelegate> * _noteDelegate;
}

@property (nonatomic) <EKEventDetailNotesCellDelegate> *noteDelegate;

- (void).cxx_destruct;
- (void)_updateCellIfNeeded;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (unsigned long long)maximumNumberOfSubItems;
- (id)noteDelegate;
- (unsigned long long)numberOfSubitems;
- (bool)requiresLayoutForSubitemCount;
- (void)reset;
- (void)setCellPosition:(int)arg1;
- (void)setNoteDelegate:(id)arg1;

@end
