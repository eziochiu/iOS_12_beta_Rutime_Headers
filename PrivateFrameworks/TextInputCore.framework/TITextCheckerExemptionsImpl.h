/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TITextCheckerExemptionsImpl : NSObject {
    NSSet * _addressBookTokens;
    id /* block */  _contactObserver;
    unsigned long long  _observerAssertionCount;
    id  _userDictionaryObserver;
    NSSet * _userDictionaryTokens;
    NSUUID * _userDictionaryUUID;
}

@property (nonatomic, retain) NSSet *addressBookTokens;
@property (nonatomic, retain) NSSet *userDictionaryTokens;
@property (nonatomic, copy) NSUUID *userDictionaryUUID;

+ (id)sharedTextCheckerExemptionsImpl;

- (void).cxx_destruct;
- (void)addObserverAssertion;
- (id)addressBookTokens;
- (void)dealloc;
- (void)removeObserverAssertion;
- (void)setAddressBookTokens:(id)arg1;
- (void)setUserDictionaryTokens:(id)arg1;
- (void)setUserDictionaryUUID:(id)arg1;
- (bool)stringIsExemptFromChecker:(id)arg1;
- (id)userDictionaryTokens;
- (id)userDictionaryUUID;

@end
