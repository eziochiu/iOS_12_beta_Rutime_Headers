/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCProfileViewController : UITableViewController <PSStateRestoration> {
    MCUIProfile * _UIProfile;
    bool  _profileOffersReenroll;
    bool  _profileRemovable;
    <MCProfileViewControllerDelegate> * _profileViewControllerDelegate;
    long long  _profileViewMode;
}

@property (nonatomic, retain) MCUIProfile *UIProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool profileOffersReenroll;
@property (nonatomic) bool profileRemovable;
@property (nonatomic) <MCProfileViewControllerDelegate> *profileViewControllerDelegate;
@property (nonatomic) long long profileViewMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UIProfile;
- (void)_profileChanged:(id)arg1;
- (void)_removeProfile;
- (void)_setup;
- (bool)_shouldShowRemoveButton;
- (bool)_shouldShowUpdateButton;
- (void)_updateProfile;
- (bool)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 profile:(id)arg2 profileViewMode:(long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)profileOffersReenroll;
- (bool)profileRemovable;
- (id)profileViewControllerDelegate;
- (long long)profileViewMode;
- (void)setProfile:(id)arg1;
- (void)setProfileOffersReenroll:(bool)arg1;
- (void)setProfileRemovable:(bool)arg1;
- (void)setProfileViewControllerDelegate:(id)arg1;
- (void)setProfileViewMode:(long long)arg1;
- (void)setUIProfile:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
