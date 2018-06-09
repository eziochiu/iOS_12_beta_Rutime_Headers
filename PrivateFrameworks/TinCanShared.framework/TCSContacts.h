/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

@interface TCSContacts : NSObject {
    NSUserDefaults * _defaults;
    NSArray * _destinations;
    NPSManager * _npsManager;
    NSHashTable * _observers;
    bool  _shouldObserveWhitelistDefaultChanges;
    NSMutableDictionary * _whitelist;
    CNCoalescingTimer * _whitelistSaveTimer;
}

@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) NSArray *destinations;
@property (nonatomic) bool shouldObserveWhitelistDefaultChanges;
@property (nonatomic, retain) NSMutableDictionary *whitelist;

+ (id)_canonicalDestinationForString:(id)arg1;
+ (id)_canonicalDestinationsForContact:(id)arg1;
+ (id)_canonicalPhoneNumberFromCNPhoneNumber:(id)arg1;
+ (id)_canonicalPhoneNumberFromPhoneNumberString:(id)arg1;
+ (bool)_contact:(id)arg1 hasKeysForFormatterStye:(long long)arg2;
+ (id)_destinationsFromWhitelistDictionary:(id)arg1;
+ (bool)_isContact:(id)arg1 similarToContact:(id)arg2;
+ (bool)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (bool)_isUnknownContact:(id)arg1 equalToUnknownContact:(id)arg2;
+ (id)_safeContactDetailStringForLogging:(id)arg1;
+ (id)_safeContactNameStringForLogging:(id)arg1 handle:(id)arg2;
+ (id)_unifiedContactWithIdentifier:(id)arg1 orDestination:(id)arg2 usingContactStore:(id)arg3 keysToFetch:(id)arg4;
+ (id)_unifiedMeContactFromContactStore:(id)arg1 keysToFetch:(id)arg2;
+ (id)_unknownContactWithDestination:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteWhitelist;
- (void)_notifyObserversDestinationsChanged;
- (void)_notifyObserversRecencyChanged;
- (void)_saveWhitelist;
- (void)addDestinations:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)dateAddedForDestination:(id)arg1;
- (void)dealloc;
- (id)defaults;
- (id)destinations;
- (void)didInitiateCallToDestination:(id)arg1 date:(id)arg2;
- (void)didReceiveCallFromDestination:(id)arg1 date:(id)arg2;
- (id)init;
- (bool)isContactAccepted:(id)arg1;
- (bool)isDestinationAccepted:(id)arg1;
- (id)mostRecentCallDateForDestination:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeDestinations:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setShouldObserveWhitelistDefaultChanges:(bool)arg1;
- (void)setWhitelist:(id)arg1;
- (bool)shouldObserveWhitelistDefaultChanges;
- (id)whitelist;

@end
