/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingColorAuditViewController : UIViewController <UIDebuggingInformationViewController, UITableViewDataSource, UITableViewDelegate> {
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)calledSelectorForSymbol:(id)arg1;
- (id)colorForSymbol:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)sortedSymbols;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
