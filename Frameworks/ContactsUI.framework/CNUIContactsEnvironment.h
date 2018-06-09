/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIContactsEnvironment : NSObject {
    CNUIAccountsFacade * _accountsFacade;
    <CNUIUserActionDiscoveringEnvironment> * _actionDiscoveringEnvironment;
    CNUIUserActivityManager * _activityManager;
    <CNLSApplicationWorkspace> * _applicationWorkspace;
    <CNUILikenessRendering> * _cachingLikenessRenderer;
    <CNUIPRLikenessResolver> * _cachingLikenessResolver;
    <CNCapabilities> * _capabilities;
    CNContactsEnvironment * _cnEnvironment;
    CNUIExternalComponentsFactory * _componentsFactory;
    CNContactChangesNotifier * _contactChangesNotifier;
    CNContactStore * _contactStore;
    CNUISchedulerProvider * _defaultSchedulerProvider;
    <CNUIDefaultUserActionFetcher> * _defaultUserActionFetcher;
    _DECConsumer * _duetConsumer;
    CNUIFMFFacade * _fmfFacade;
    CNUIIDSAvailabilityProvider * _idsAvailabilityProvider;
    CNUIMeContactMonitor * _meMonitor;
    PRPersonaStore * _personaStore;
    <CNUIPlaceholderProviderFactory> * _placeholderProviderFactory;
    CNUICoreRecentsManager * _recentsManager;
}

@property (nonatomic, retain) CNUIAccountsFacade *accountsFacade;
@property (nonatomic, retain) <CNUIUserActionDiscoveringEnvironment> *actionDiscoveringEnvironment;
@property (nonatomic, retain) CNUIUserActivityManager *activityManager;
@property (nonatomic, retain) <CNLSApplicationWorkspace> *applicationWorkspace;
@property (nonatomic, retain) <CNUILikenessRendering> *cachingLikenessRenderer;
@property (nonatomic, retain) <CNUIPRLikenessResolver> *cachingLikenessResolver;
@property (nonatomic, retain) <CNCapabilities> *capabilities;
@property (nonatomic, readonly) CNContactsEnvironment *cnEnvironment;
@property (nonatomic, retain) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic, retain) CNContactChangesNotifier *contactChangesNotifier;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNUISchedulerProvider *defaultSchedulerProvider;
@property (nonatomic, retain) <CNUIDefaultUserActionFetcher> *defaultUserActionFetcher;
@property (nonatomic, retain) _DECConsumer *duetConsumer;
@property (nonatomic, retain) CNUIFMFFacade *fmfFacade;
@property (nonatomic, retain) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;
@property (nonatomic, retain) CNUIMeContactMonitor *meMonitor;
@property (nonatomic, retain) PRPersonaStore *personaStore;
@property (nonatomic, retain) <CNUIPlaceholderProviderFactory> *placeholderProviderFactory;
@property (nonatomic, retain) CNUICoreRecentsManager *recentsManager;

+ (id)currentEnvironment;
+ (id)makeCurrentEnvironment;

- (void).cxx_destruct;
- (id)accountsFacade;
- (id)actionDiscoveringEnvironment;
- (id)activityManager;
- (id)applicationWorkspace;
- (id)cachingLikenessRenderer;
- (id)cachingLikenessResolver;
- (id)capabilities;
- (id)cnEnvironment;
- (id)componentsFactory;
- (id)contactChangesNotifier;
- (id)contactStore;
- (id)defaultSchedulerProvider;
- (id)defaultUserActionFetcher;
- (id)duetConsumer;
- (id)fmfFacade;
- (id)idsAvailabilityProvider;
- (id)init;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)meMonitor;
- (id)nts_lazyAccountsFacade;
- (id)nts_lazyActionDiscoveringEnvironment;
- (id)nts_lazyActivityManager;
- (id)nts_lazyApplicationWorkspace;
- (id)nts_lazyCachingLikenessRenderer;
- (id)nts_lazyCachingLikenessResolver;
- (id)nts_lazyCapabilities;
- (id)nts_lazyComponentsFactory;
- (id)nts_lazyContactChangesNotifier;
- (id)nts_lazyContactStore;
- (id)nts_lazyDefaultSchedulerProvider;
- (id)nts_lazyDefaultUserActionFetcher;
- (id)nts_lazyDuetConsumer;
- (id)nts_lazyFMFFacade;
- (id)nts_lazyIDSAvailabilityProvider;
- (id)nts_lazyPersonaStore;
- (id)nts_lazyPlaceholderProviderFactory;
- (id)nts_lazyRecentsManager;
- (id)nts_makeActionDiscoveringEnvironment;
- (id)nts_makeCachingLikenessResolver;
- (id)nts_makeContactChangesNotifier;
- (id)nts_makeRecentsManager;
- (id)personaStore;
- (id)placeholderProviderFactory;
- (id)recentsManager;
- (void)setAccountsFacade:(id)arg1;
- (void)setActionDiscoveringEnvironment:(id)arg1;
- (void)setActivityManager:(id)arg1;
- (void)setApplicationWorkspace:(id)arg1;
- (void)setCachingLikenessRenderer:(id)arg1;
- (void)setCachingLikenessResolver:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setComponentsFactory:(id)arg1;
- (void)setContactChangesNotifier:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDefaultSchedulerProvider:(id)arg1;
- (void)setDefaultUserActionFetcher:(id)arg1;
- (void)setDuetConsumer:(id)arg1;
- (void)setFmfFacade:(id)arg1;
- (void)setIdsAvailabilityProvider:(id)arg1;
- (void)setMeMonitor:(id)arg1;
- (void)setPersonaStore:(id)arg1;
- (void)setPlaceholderProviderFactory:(id)arg1;
- (void)setRecentsManager:(id)arg1;

@end