/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CKFilteringListController : PSListController {
    bool  _addCheckmark;
    id  _beginMappingID;
    CKNSExtension * _ckExtension;
    NSString * _currentExtensionID;
    NSArray * _extensionIDArray;
    NSDictionary * _extensionNameMapping;
    PSSpecifier * _selectedSpecifier;
    bool  _showingParentViewController;
    long long  _spamFilterState;
    NSMutableArray * _specifierListArray;
}

@property (nonatomic) bool addCheckmark;
@property (nonatomic, retain) id beginMappingID;
@property (nonatomic, retain) CKNSExtension *ckExtension;
@property (nonatomic, retain) NSString *currentExtensionID;
@property (nonatomic, retain) NSArray *extensionIDArray;
@property (nonatomic, retain) NSDictionary *extensionNameMapping;
@property (nonatomic, retain) PSSpecifier *selectedSpecifier;
@property (nonatomic) bool showingParentViewController;
@property (nonatomic) long long spamFilterState;
@property (nonatomic, retain) NSMutableArray *specifierListArray;

- (void).cxx_destruct;
- (id)_syncManager;
- (bool)addCheckmark;
- (void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)beginMappingID;
- (id)ckExtension;
- (id)currentExtensionID;
- (void)dealloc;
- (void)disableSpamFiltering;
- (void)enableSpamFiltering:(id)arg1;
- (unsigned char)enableSpamForExtensionID:(id)arg1 withName:(id)arg2;
- (void)endMatchingExtensions;
- (id)extensionIDArray;
- (id)extensionNameMapping;
- (void)findSpamExtensions;
- (id)getDefaultExtension;
- (id)getExtensionNameAndWarning:(id)arg1;
- (id)getSpamSpecifiers;
- (id)init;
- (id)isConversationListFilteringEnabled:(id)arg1;
- (id)isSpamFilteringEnabled:(id)arg1;
- (id)selectedSpecifier;
- (void)setAddCheckmark:(bool)arg1;
- (void)setBeginMappingID:(id)arg1;
- (void)setCkExtension:(id)arg1;
- (void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2;
- (void)setCurrentExtensionID:(id)arg1;
- (void)setExtensionIDArray:(id)arg1;
- (void)setExtensionNameMapping:(id)arg1;
- (void)setIsSpamFilteringDefaultEnabled;
- (void)setSelectedSpecifier:(id)arg1;
- (void)setShowingParentViewController:(bool)arg1;
- (void)setSpamFilterState:(long long)arg1;
- (void)setSpamFilteringEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSpecifierListArray:(id)arg1;
- (void)showPrivacyAccessWarning:(id)arg1 isToggle:(bool)arg2;
- (void)showPrivacyLegalVC;
- (bool)showingParentViewController;
- (long long)spamFilterState;
- (id)specifierListArray;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tappedSpamAppCell:(id)arg1;
- (bool)verifyCurrentExtensionIDValidity;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
