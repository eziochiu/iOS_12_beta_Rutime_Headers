/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXNotificationManager : NSObject {
    PEXNotificationHandler * _contactsHandler;
    <NSObject> * _contactsToken;
    PEXEventKitNotificationHandler * _eventKitHandler;
    <NSObject> * _eventKitToken;
    PEXNotificationHandler * _healthHandler;
    <NSObject> * _healthToken;
    <NSObject> * _meCardDonationToken;
    PEXNotificationHandler * _meCardHandler;
    <NSObject> * _meCardToken;
    PEXNotificationHandler * _portraitChangeHandler;
    int  _portraitChangeToken;
    PEXNotificationHandler * _portraitInvalidationHandler;
    int  _portraitInvalidationToken;
    PEXNotificationHandler * _suggestionsHandler;
    <SGSuggestionsServiceContactsProtocol> * _suggestionsService;
    id  _suggestionsToken;
}

+ (void)_registerForContactsChangeHistory;
+ (void)addContactsObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addEventKitObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addHealthObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addMeCardObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addPortraitChangeObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addSuggestionsObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (id)contactsChangeHistoryIdentifier;
+ (id)createNewSharedManager;
+ (id)sharedInstance;
+ (void)unsetSharedManager;

- (void).cxx_destruct;
- (void)addContactsChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addEventKitChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addHealthChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addMeCardChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addPortraitChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addPortraitInvalidationBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addSuggestionsChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)dealloc;
- (void)fireEventKitHandler:(id)arg1 events:(id)arg2;
- (void)fireHandler:(id)arg1;
- (id)init;
- (void)simulateContactsChange;
- (void)simulateEventKitChange;
- (void)simulateHealthChange;
- (void)simulateMeCardChange;
- (void)simulatePortraitChange;
- (void)simulatePortraitInvalidation;
- (void)simulateSuggestionsChange;
- (void)startListening;
- (void)stopListening;

@end
