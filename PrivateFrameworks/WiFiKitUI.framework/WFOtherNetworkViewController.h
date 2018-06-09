/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFOtherNetworkViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, WFAccessoryViewController> {
    NSArray * _TLSIdentities;
    struct __SecIdentity { } * _TLSIdentity;
    bool  _WAPIEnabled;
    NSArray * _WAPIIdentities;
    id  _WAPIIdentity;
    id  _WAPIRootCertificate;
    NSArray * _WAPIRootCertificates;
    UIColor * _backgroundColor;
    <WFOtherNetworkViewControllerDelegate> * _delegate;
    NSString * _details;
    long long  _firstResponder;
    long long  _firstResponderCell;
    bool  _joinable;
    bool  _joining;
    WFTextFieldCell * _mostRecentFirstResponder;
    WFTextFieldCell * _nameCell;
    NSString * _networkName;
    NSString * _password;
    WFTextFieldCell * _passwordCell;
    bool  _passwordRequired;
    long long  _profileMode;
    NSOrderedSet * _sections;
    long long  _securityMode;
    NSOrderedSet * _securityRows;
    NSString * _sharedPassword;
    long long  _style;
    bool  _supportsWiFiPasswordSharing;
    NSString * _username;
    WFTextFieldCell * _usernameCell;
}

@property (nonatomic, retain) NSArray *TLSIdentities;
@property (nonatomic) struct __SecIdentity { }*TLSIdentity;
@property (nonatomic) bool WAPIEnabled;
@property (nonatomic, retain) NSArray *WAPIIdentities;
@property (nonatomic) id WAPIIdentity;
@property (nonatomic) id WAPIRootCertificate;
@property (nonatomic, retain) NSArray *WAPIRootCertificates;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFOtherNetworkViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *details;
@property (nonatomic) long long firstResponderCell;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool joinable;
@property (nonatomic) bool joining;
@property (nonatomic) WFTextFieldCell *mostRecentFirstResponder;
@property (nonatomic, retain) WFTextFieldCell *nameCell;
@property (nonatomic, copy) NSString *networkName;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) WFTextFieldCell *passwordCell;
@property (nonatomic) bool passwordRequired;
@property (nonatomic) long long profileMode;
@property (nonatomic, retain) NSOrderedSet *sections;
@property (nonatomic) long long securityMode;
@property (nonatomic, retain) NSOrderedSet *securityRows;
@property (nonatomic, copy) NSString *sharedPassword;
@property long long style;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsWiFiPasswordSharing;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, retain) WFTextFieldCell *usernameCell;

- (void).cxx_destruct;
- (id)TLSIdentities;
- (struct __SecIdentity { }*)TLSIdentity;
- (bool)WAPIEnabled;
- (id)WAPIIdentities;
- (id)WAPIIdentity;
- (id)WAPIRootCertificate;
- (id)WAPIRootCertificates;
- (id)_TLSIdentityDescription;
- (id)_WAPIIdentityDescription;
- (id)_WAPIRootCertificateDescription;
- (id)_availableProfileModeTitles;
- (id)_availableProfileModes;
- (id)_availableSecurityModes;
- (id)_availableSecurityTitles;
- (bool)_canShowModes;
- (void)_dismiss:(id)arg1;
- (id)_getTLSIdentity:(id)arg1;
- (id)_getWAPIIdentity:(id)arg1;
- (id)_getWAPIRootCertificate:(id)arg1;
- (bool)_isValidPassword:(id)arg1;
- (void)_join:(id)arg1;
- (long long)_profileModeFromTitle:(id)arg1;
- (id)_profileModeStringFromType:(long long)arg1;
- (long long)_returnKeyType;
- (void)_scrollToCellAndBecomeFirstResponder:(id)arg1;
- (id)_sectionsForStyle:(long long)arg1;
- (long long)_securityModeFromTitle:(id)arg1;
- (id)_securityRowsForStyle:(long long)arg1;
- (id)_securityStringFromType:(long long)arg1;
- (void)_setFirstResponderAfterCell:(id)arg1;
- (void)_setTLSIdentity:(id)arg1 specifier:(id)arg2;
- (void)_setWAPIIdentity:(id)arg1 specifier:(id)arg2;
- (void)_setWAPIRootCertificate:(id)arg1 specifier:(id)arg2;
- (void)_updateJoinable;
- (void)_updateSections;
- (id)backgroundColor;
- (void)dealloc;
- (id)delegate;
- (id)details;
- (void)enterPassword:(id)arg1 joinAfterDelay:(double)arg2;
- (long long)firstResponderCell;
- (id)initWithOtherNetworkStyle:(long long)arg1;
- (bool)joinable;
- (bool)joining;
- (void)keyboardShown:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)mostRecentFirstResponder;
- (id)nameCell;
- (id)networkName;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (id)password;
- (void)passwordBecomeFirstResponder;
- (id)passwordCell;
- (bool)passwordRequired;
- (long long)profileMode;
- (id)sections;
- (long long)securityMode;
- (id)securityRows;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setFirstResponderCell:(long long)arg1;
- (void)setJoinable:(bool)arg1;
- (void)setJoining:(bool)arg1;
- (void)setMostRecentFirstResponder:(id)arg1;
- (void)setNameCell:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordCell:(id)arg1;
- (void)setPasswordRequired:(bool)arg1;
- (void)setProfileMode:(long long)arg1;
- (void)setSections:(id)arg1;
- (void)setSecurityMode:(long long)arg1;
- (void)setSecurityRows:(id)arg1;
- (void)setSharedPassword:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSupportsWiFiPasswordSharing:(bool)arg1;
- (void)setTLSIdentities:(id)arg1;
- (void)setTLSIdentity:(struct __SecIdentity { }*)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsernameCell:(id)arg1;
- (void)setWAPIEnabled:(bool)arg1;
- (void)setWAPIIdentities:(id)arg1;
- (void)setWAPIIdentity:(id)arg1;
- (void)setWAPIRootCertificate:(id)arg1;
- (void)setWAPIRootCertificates:(id)arg1;
- (id)sharedPassword;
- (long long)style;
- (bool)supportsWiFiPasswordSharing;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)username;
- (id)usernameCell;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
