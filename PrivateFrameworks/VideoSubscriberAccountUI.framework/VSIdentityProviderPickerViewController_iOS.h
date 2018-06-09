/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <UISearchControllerDelegate, VSIdentityProviderPickerViewController, VSTableHeaderFooterViewDelegate> {
    unsigned long long  _additionalProvidersMode;
    bool  _cancellationAllowed;
    <VSIdentityProviderPickerViewControllerDelegate> * _delegate;
    bool  _dismissingSearchDueToSelection;
    VSIdentityProviderFilter * _filter;
    VSIdentityProviderTableViewDataSource * _filteredDataSource;
    VSFontCenter * _fontCenter;
    NSArray * _identityProviders;
    VSOnboardingInfoCenter * _onboardingInfoCenter;
    NSString * _requestingAppDisplayName;
    NSString * _resourceTitle;
    VSSearchBarDelegate * _searchBarDelegate;
    UISearchController * _searchController;
    VSIdentityProvider * _selectedIdentityProvider;
    VSIdentityProviderTableViewDataSource * _unfilteredDataSource;
}

@property (nonatomic) unsigned long long additionalProvidersMode;
@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSIdentityProviderPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDismissingSearchDueToSelection, nonatomic) bool dismissingSearchDueToSelection;
@property (nonatomic, retain) VSIdentityProviderFilter *filter;
@property (nonatomic, retain) VSIdentityProviderTableViewDataSource *filteredDataSource;
@property (nonatomic, retain) VSFontCenter *fontCenter;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *identityProviders;
@property (nonatomic, retain) VSOnboardingInfoCenter *onboardingInfoCenter;
@property (nonatomic, copy) NSString *requestingAppDisplayName;
@property (nonatomic, copy) NSString *resourceTitle;
@property (nonatomic, retain) VSSearchBarDelegate *searchBarDelegate;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) VSIdentityProvider *selectedIdentityProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) VSIdentityProviderTableViewDataSource *unfilteredDataSource;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_didPickAdditionalIdentityProviders;
- (void)_didPickIdentityProvider:(id)arg1;
- (void)_performSelectionForIdentityProvider:(id)arg1;
- (void)_showAboutPrivacy:(id)arg1;
- (id)_titleForTableHeaderView;
- (void)_updateTableHeaderTitle;
- (unsigned long long)additionalProvidersMode;
- (id)delegate;
- (void)deselectSelectedProviderAnimated:(bool)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)arg1;
- (id)filter;
- (id)filteredDataSource;
- (id)fontCenter;
- (id)identityProviders;
- (id)initWithStyle:(long long)arg1;
- (bool)isCancellationAllowed;
- (bool)isDismissingSearchDueToSelection;
- (id)onboardingInfoCenter;
- (id)requestingAppDisplayName;
- (id)resourceTitle;
- (id)searchBarDelegate;
- (id)searchController;
- (id)selectedIdentityProvider;
- (void)setAdditionalProvidersMode:(unsigned long long)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissingSearchDueToSelection:(bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilteredDataSource:(id)arg1;
- (void)setFontCenter:(id)arg1;
- (void)setIdentityProviders:(id)arg1;
- (void)setOnboardingInfoCenter:(id)arg1;
- (void)setRequestingAppDisplayName:(id)arg1;
- (void)setResourceTitle:(id)arg1;
- (void)setSearchBarDelegate:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSelectedIdentityProvider:(id)arg1;
- (void)setUnfilteredDataSource:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)titleForTableFooterView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unfilteredDataSource;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;

@end