/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPRLikenessLookup : NSObject <CNUIPRLikenessResolver> {
    CNContactStore * _contactStore;
    CNUIMeContactMonitor * _meMonitor;
    PRPersonaStore * _personaStore;
    CNUIPRPersonaStoreObservableProvider * _personaStoreProvider;
    <CNUIPlaceholderProviderFactory> * _placeholderProviderFactory;
    long long  _prohibitedSources;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNUIMeContactMonitor *meMonitor;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic, retain) CNUIPRPersonaStoreObservableProvider *personaStoreProvider;
@property (nonatomic, retain) <CNUIPlaceholderProviderFactory> *placeholderProviderFactory;
@property (nonatomic) long long prohibitedSources;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (id)basicMonogramObservableForContactFuture:(id)arg1;
+ (id)basicMonogramObservableFromString:(id)arg1;
+ (id)contactFuture:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;
+ (id)descriptorForRequiredKeys;
+ (id)observableFromLikenessProviderBlock:(id /* block */)arg1 withScheduler:(id)arg2;
+ (id)photoObservableWithPhotoFuture:(id)arg1 scheduler:(id)arg2;

- (void).cxx_destruct;
- (id)basicMonogramObservableFromString:(id)arg1;
- (id)basicMonogramObservableWithContactFuture:(id)arg1;
- (id)blessedPhotoObservableWithFuture:(id)arg1 contact:(id)arg2;
- (id)contactStore;
- (id)contentObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3 meMonitor:(id)arg4;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 schedulerProvider:(id)arg3 meMonitor:(id)arg4;
- (bool)isMeContact:(id)arg1;
- (id)likenessObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2;
- (id)likenessesForContact:(id)arg1;
- (id)loadingPlaceholderWithPlaceholderProviderFactory:(id)arg1;
- (bool)mayIncludeSource:(long long)arg1;
- (id)meMonitor;
- (id)personaLikenessObservableWithContactFuture:(id)arg1;
- (id)personaStore;
- (id)personaStoreProvider;
- (id)photoFutureForContactFuture:(id)arg1 photoFuture:(id)arg2 allowingFallbackForMeCard:(bool)arg3;
- (id)photoFutureForContactFuture:(id)arg1 scheduler:(id)arg2;
- (id)placeholderProviderFactory;
- (long long)prohibitedSources;
- (id)remoteImagesObservableWithContactFuture:(id)arg1;
- (id)resolveLikenessesForContacts:(id)arg1 withContentHandler:(id /* block */)arg2;
- (id)schedulerProvider;
- (void)setMeMonitor:(id)arg1;
- (void)setPersonaStoreProvider:(id)arg1;
- (void)setPlaceholderProviderFactory:(id)arg1;
- (void)setProhibitedSources:(long long)arg1;
- (id)silhouetteWithPlaceholderProviderFactory:(id)arg1;

@end
