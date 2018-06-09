/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteDuetSearch : NSObject <CNAutocompleteSearch> {
    CNContactStore * _contactStore;
    id /* block */  _peopleSuggesterFactory;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ peopleSuggesterFactory;
@property (readonly) Class superclass;

+ (void)configureContext:(id)arg1 withFetchRequest:(id)arg2;
+ (void)configureSettings:(id)arg1 withFetchRequest:(id)arg2;
+ (id)constrainMechanismsForSearchType:(unsigned long long)arg1;
+ (unsigned long long)predictedResultLimit;

- (void).cxx_destruct;
- (long long)addressTypeForCDContact:(id)arg1;
- (id)autocompleteResultsFromSuggesterResults:(id)arg1 factory:(id)arg2;
- (id)contactStore;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithPeopleSuggesterFactory:(id /* block */)arg1;
- (id)initWithPeopleSuggesterFactory:(id /* block */)arg1 contactStore:(id)arg2;
- (id)peopleSuggester;
- (id /* block */)peopleSuggesterFactory;
- (id)querySuggester:(id)arg1 withContext:(id)arg2 settings:(id)arg3;
- (id)resultValueForCDContact:(id)arg1;
- (id)suggesterContextForFetchRequest:(id)arg1;
- (id)suggesterSettingsForFetchRequest:(id)arg1;

@end
