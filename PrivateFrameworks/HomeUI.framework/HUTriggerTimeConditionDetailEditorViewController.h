/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTriggerTimeConditionDetailEditorViewController : HUItemTableViewController <HUDatePickerCellDelegate, HUSignificantEventOffsetPickerDelegate> {
    <HUTriggerTimeConditionDetailEditorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HUTriggerTimeConditionDetailEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUTriggerTimeConditionDetailEditorItemManager *itemManager;
@property (nonatomic, readonly) HFTimeRangeCondition *rangeCondition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (id)allCellClasses;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)datePickerCell:(id)arg1 didSelectDate:(id)arg2;
- (id)delegate;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithRangeCondition:(id)arg1 delegate:(id)arg2;
- (id)rangeCondition;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)significantEventOffsetPicker:(id)arg1 didSelectOffset:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end
