/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOrganDonationConfirmationViewController : HKViewController <HKTitledBuddyHeaderViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIFont * _bodyFont;
    NSString * _completionButtonTitle;
    HKOrganDonationConnectionManager * _connectionManager;
    NSArray * _dataEntryItems;
    UIVisualEffectView * _footerView;
    UIView * _headerView;
    UIActivityIndicatorView * _loadingIndicator;
    _HKMedicalIDData * _medicalIDData;
    HKOrganDonationRegistrant * _registrant;
    id /* block */  _registrationCompletionHandler;
    UIButton * _submitButton;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSString *completionButtonTitle;
@property (nonatomic, retain) NSArray *dataEntryItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, retain) _HKMedicalIDData *medicalIDData;
@property (nonatomic, copy) id /* block */ registrationCompletionHandler;
@property (nonatomic, retain) UIButton *submitButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)_createTableFooterView;
- (id)_createTableHeaderView;
- (id)completionButtonTitle;
- (void)confirmSubmissionIfNecessaryWithConfirmHandler:(id /* block */)arg1 andCancelHandler:(id /* block */)arg2;
- (id)dataEntryItems;
- (id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3;
- (id)loadingIndicator;
- (id)medicalIDData;
- (id /* block */)registrationCompletionHandler;
- (void)setCompletionButtonTitle:(id)arg1;
- (void)setDataEntryItems:(id)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void)setMedicalIDData:(id)arg1;
- (void)setRegistrationCompletionHandler:(id /* block */)arg1;
- (void)setSubmitButton:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)submitButton;
- (void)submitButtonTapped:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
