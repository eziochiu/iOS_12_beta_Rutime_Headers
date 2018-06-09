/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIAlternativeTranscriptionsView : UIView <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _alternativeTranscriptions;
    <VCUIAlternativeTranscriptionsViewDelegate> * _delegate;
    NSIndexPath * _selectedIndexPath;
    UITableView * _tableView;
}

@property (nonatomic, readonly, copy) NSArray *alternativeTranscriptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUIAlternativeTranscriptionsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (id)alternativeTranscriptions;
- (id)delegate;
- (id)initWithAlternativeTranscriptions:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)selectedIndexPath;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
