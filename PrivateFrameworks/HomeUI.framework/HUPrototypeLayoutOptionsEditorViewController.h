/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPrototypeLayoutOptionsEditorViewController : UITableViewController <HUSliderValueTableViewCellDelegate> {
    <HUPrototypeLayoutOptionsEditorViewControllerDelegate> * _delegate;
    HUGridLayoutOptions * _layoutOptions;
    NSArray * _layoutOptionsKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUPrototypeLayoutOptionsEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, retain) NSArray *layoutOptionsKeys;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (id)_viewSizeSubclassDescription;
- (id)delegate;
- (id)layoutOptions;
- (id)layoutOptionsKeys;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setLayoutOptionsKeys:(id)arg1;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
