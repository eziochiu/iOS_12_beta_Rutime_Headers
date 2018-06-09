/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAAddFamilyMemberViewController : UINavigationController <FAPickInviteeDelegate, RemoteUIControllerDelegate> {
    ACAccountStore * _accountStore;
    ACAccount * _appleAccount;
    NSString * _continuationData;
    AAGrandSlamSigner * _grandSlamSigner;
    SSAccount * _iTunesAccount;
    bool  _isShowingSpinner;
    RUIObjectModel * _lastObjectModel;
    UINavigationItem * _navigationItemShowingSpinner;
    NSOperationQueue * _networkingQueue;
    UIBarButtonItem * _originalRightBarButtonItem;
    FAFamilyPickInviteeViewController * _pickInviteeVC;
    NSData * _pushToken;
    AAUIRemoteUIController * _remoteUIController;
    UIActivityIndicatorView * _spinnerView;
    NSMutableURLRequest * _startRemoteUIRequest;
}

@property (nonatomic, copy) NSString *addFamilyMemberInstructions;
@property (nonatomic, copy) NSString *continuationData;
@property (nonatomic, copy) NSString *createChildAccountButtonTitle;
@property (nonatomic, copy) NSString *createChildAccountInstructions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAAddFamilyMemberDelegate><UINavigationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_itunesAccount;
- (id)_pushToken;
- (id)addFamilyMemberInstructions;
- (id)continuationData;
- (id)createChildAccountButtonTitle;
- (id)createChildAccountInstructions;
- (void)dealloc;
- (void)harvestDataFromServerHTTPResponse:(id)arg1;
- (void)hideActivitySpinnerInNavigationBar;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (void)pickInviteeViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (void)pickInviteeViewControllerWantsChildAccountFlow:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)setAddFamilyMemberInstructions:(id)arg1;
- (void)setContinuationData:(id)arg1;
- (void)setCreateChildAccountButtonTitle:(id)arg1;
- (void)setCreateChildAccountInstructions:(id)arg1;
- (bool)shouldAutorotate;
- (void)showActivitySpinnerInNavigationBar;

@end
