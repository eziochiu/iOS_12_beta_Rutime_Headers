/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataMetadataDeletionSection : HKDataMetadataSection {
    UITableViewCell * _cell;
    <HKDataMetadataDeletionSectionDelegate> * _delegate;
    bool  _enabled;
}

@property (nonatomic, retain) UITableViewCell *cell;
@property (nonatomic) <HKDataMetadataDeletionSectionDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void).cxx_destruct;
- (void)_updateCellForEnabledState;
- (id)cell;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)delegate;
- (id)init;
- (bool)isEnabled;
- (unsigned long long)numberOfRowsInSection;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (void)setCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
