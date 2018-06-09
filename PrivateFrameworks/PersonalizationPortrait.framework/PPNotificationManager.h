/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNotificationManager : NSObject {
    CNContactStore * _cnStore;
    PPNotificationHandler * _contactsHandler;
    <NSObject> * _contactsToken;
    EKEventStore * _ekStore;
    PPEventKitNotificationHandler * _eventKitHandler;
    <NSObject> * _eventKitToken;
    <NSObject> * _meCardDonationToken;
    PPNotificationHandler * _meCardHandler;
    <NSObject> * _meCardToken;
    PPNotificationHandler * _portraitChangeHandler;
    int  _portraitChangeToken;
    PPNotificationHandler * _portraitInvalidationHandler;
    int  _portraitInvalidationToken;
    PPNotificationHandler * _suggestionsHandler;
    <SGSuggestionsServiceContactsProtocol> * _suggestionsService;
    id  _suggestionsToken;
}

+ (void)addContactsObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addEventKitObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addMeCardObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addPortraitChangeObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addSuggestionsObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (id)createNewSharedManager;
+ (id)sharedInstance;
+ (void)unsetSharedManager;

- (void).cxx_destruct;
- (void)addContactsChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addEventKitChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
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
- (void)simulateMeCardChange;
- (void)simulatePortraitChange;
- (void)simulatePortraitInvalidation;
- (void)simulateSuggestionsChange;
- (void)stopListening;

@end
