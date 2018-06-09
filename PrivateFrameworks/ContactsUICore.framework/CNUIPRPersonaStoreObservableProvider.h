/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPRPersonaStoreObservableProvider : NSObject {
    CNContactStore * _contactStore;
    NSNumberFormatter * _numberFormatter;
    PRPersonaStore * _personaStore;
    <CNScheduler> * _scheduler;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (nonatomic, retain) PRPersonaStore *personaStore;
@property (nonatomic, retain) <CNScheduler> *scheduler;

+ (id)_normalizedStringForPhoneNumberString:(id)arg1;

- (void).cxx_destruct;
- (id)contactStore;
- (id)disambiguationObservableForLikenessObservables:(id)arg1;
- (id)initWithPersonaStore:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;
- (bool)isMeContact:(id)arg1;
- (id)likenessObservableForContact:(id)arg1;
- (id)likenessObservableForContactFuture:(id)arg1;
- (id)likenessObservableForMe;
- (id)numberFormatter;
- (id)observableForEmail:(id)arg1;
- (id)observableForPhoneNumber:(id)arg1;
- (id)personaStore;
- (id)scheduler;
- (void)setContactStore:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setPersonaStore:(id)arg1;
- (void)setScheduler:(id)arg1;

@end
