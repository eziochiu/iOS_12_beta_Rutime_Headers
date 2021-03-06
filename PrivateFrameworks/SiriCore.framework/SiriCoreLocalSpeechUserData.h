/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreLocalSpeechUserData : NSObject <NSSecureCoding> {
    NSArray * _appNames;
    NSArray * _contactsWords;
    NSArray * _corrections;
    NSArray * _eventLocationNames;
    NSArray * _eventTitles;
    NSDictionary * _interactionSenderDisplayNames;
    NSDictionary * _keyboardLMDynamicVocabularyItems;
    NSString * _language;
    NSArray * _locationOfInterestNames;
    NSArray * _pexNamedEntityNames;
    NSDictionary * _searchEventValues;
    NSArray * _spatialLocationOfInterestNames;
}

@property (nonatomic, readonly, copy) NSArray *appNames;
@property (nonatomic, readonly, copy) NSArray *contactsWords;
@property (nonatomic, readonly, copy) NSArray *corrections;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSArray *eventLocationNames;
@property (nonatomic, readonly, copy) NSArray *eventTitles;
@property (nonatomic, readonly, copy) NSDictionary *interactionSenderDisplayNames;
@property (nonatomic, readonly, copy) NSDictionary *keyboardLMDynamicVocabularyItems;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) NSArray *locationOfInterestNames;
@property (nonatomic, readonly, copy) NSArray *pexNamedEntityNames;
@property (nonatomic, readonly, copy) NSDictionary *searchEventValues;
@property (nonatomic, readonly, copy) NSArray *spatialLocationOfInterestNames;

+ (void)fetchUserDataWithLanguage:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchUserDataWithLanguage:(id)arg1 keepGoing:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fetchAppsWithKeepGoing:(id /* block */)arg1;
- (void)_fetchContactsWithKeepGoing:(id /* block */)arg1;
- (void)_fetchCoreDuetInteractionsWithKeepGoing:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_fetchCoreDuetSearchEventsWithKeepGoing:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_fetchCoreRoutineWithKeepGoing:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_fetchCorrectionsWithKeepGoing:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_fetchDynamicKeyboardLanguageModelWithKeepGoing:(id /* block */)arg1;
- (void)_fetchEventKitWithKeepGoing:(id /* block */)arg1;
- (void)_fetchPEXWithKeepGoing:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_initWithLanguage:(id)arg1;
- (id)appNames;
- (id)contactsWords;
- (id)corrections;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventLocationNames;
- (id)eventTitles;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)interactionSenderDisplayNames;
- (bool)isEqual:(id)arg1;
- (id)keyboardLMDynamicVocabularyItems;
- (id)language;
- (id)locationOfInterestNames;
- (id)pexNamedEntityNames;
- (id)searchEventValues;
- (id)spatialLocationOfInterestNames;

@end
