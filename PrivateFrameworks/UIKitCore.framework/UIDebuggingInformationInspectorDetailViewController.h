/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingInformationInspectorDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _data;
    UIView * _inspectedView;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inspectedView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_flush;
- (void)_forceViewLayout;
- (void)_sliderValueChanged:(id)arg1;
- (void)_visibleSwitchValueChanged:(id)arg1;
- (void)createDataItems;
- (id)data;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inspectView:(id)arg1;
- (id)inspectedView;
- (void)setData:(id)arg1;
- (void)setInspectedView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
