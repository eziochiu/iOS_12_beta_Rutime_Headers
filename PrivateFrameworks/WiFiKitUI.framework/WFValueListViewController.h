/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFValueListViewController : UITableViewController {
    id /* block */  _completionHandler;
    NSString * _selectedTitle;
    NSArray * _titles;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSString *selectedTitle;
@property (nonatomic, retain) NSArray *titles;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithTitles:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedTitle;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setSelectedTitle:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titles;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
