/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPersonalizationViewController : UITableViewController <PKPassPersonalizationCellDelegate, PKPassPersonalizationFooterViewDelegate, PKPassPersonalizationTermsViewControllerDelegate, PKPaymentSetupViewControllerDelegate> {
    NSArray * _cellContexts;
    PKContact * _contact;
    <PKPassPersonalizationViewControllerDelegate> * _delegate;
    PKPassPersonalizationFooterView * _footerView;
    bool  _hasScrolledToCells;
    PKPassPersonalizationHeaderView * _headerView;
    PKPass * _pass;
    unsigned long long  _personalizationSource;
    NSString * _personalizationToken;
    UIButton * _personalizeLaterButton;
    UIBarButtonItem * _personalizeNowButton;
    bool  _termsAndConditionsAccepted;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPersonalizationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureFooterView;
- (void)_configureHeaderViewForState:(unsigned long long)arg1;
- (bool)_contactReadyForPersonalization;
- (id)_nextCellForIndexPath:(id)arg1;
- (void)_personalizeLaterButtonPressed:(id)arg1;
- (void)_personalizeNowButtonPressed:(id)arg1;
- (void)_personalizePass;
- (void)_positionFooterView;
- (void)_presentPersonalizationErrorAlert;
- (void)_scrollToCellsIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)initWithPass:(id)arg1 personalizationToken:(id)arg2 personalizationSource:(unsigned long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)passPersonalizationFooterViewPrivacyLinkPressed:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidAcceptTerms:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidDeclineTerms:(id)arg1;
- (void)personalizationCellDidChangeValue:(id)arg1;
- (bool)personalizationCellShouldBeginEditing:(id)arg1;
- (bool)personalizationCellShouldReturn:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
