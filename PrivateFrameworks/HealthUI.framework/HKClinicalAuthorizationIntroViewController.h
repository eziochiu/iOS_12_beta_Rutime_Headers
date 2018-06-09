/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKClinicalAuthorizationIntroViewController : HKViewController <HKHealthPrivacyServicePromptController, UITableViewDataSource, UITableViewDelegate> {
    HKClinicalAuthorizationSequenceContext * _context;
    <HKHealthPrivacyServicePromptControllerDelegate> * _delegate;
    HKClinicalAuthorizationHeaderView * _headerView;
    UITableView * _tableView;
}

@property (nonatomic, readonly) HKClinicalAuthorizationSequenceContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKHealthPrivacyServicePromptControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKClinicalAuthorizationHeaderView *headerView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_cellForDetailsAtIndexPath:(id)arg1;
- (id)_cellForViewHealthRecordsAtIndexPath:(id)arg1;
- (void)_configureHeaderViewWithSource:(id)arg1;
- (void)_configureNavigationItem;
- (void)_configureTableView;
- (id)_createFooterView;
- (void)_finishWithError:(id)arg1;
- (bool)_indexPathIsValidRow:(id)arg1;
- (void)_nextButtonPressed:(id)arg1;
- (long long)_rowFromIndexPath:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (void)_viewHealthRecordsCellTapped:(id)arg1;
- (id)context;
- (id)delegate;
- (id)headerView;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
