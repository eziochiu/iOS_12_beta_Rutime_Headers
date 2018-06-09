/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKTimeZoneViewController : UITableViewController <UISearchControllerDelegate> {
    int  _chooserStyle;
    NSArray * _cities;
    <EKTimeZoneViewControllerDelegate> * _delegate;
    UISearchController * _searchController;
    int  _style;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) int chooserStyle;
@property (nonatomic, retain) NSArray *cities;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKTimeZoneViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (int)chooserStyle;
- (id)cities;
- (id)delegate;
- (id)initWithChooserStyle:(int)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setCities:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)timeZone;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;

@end
