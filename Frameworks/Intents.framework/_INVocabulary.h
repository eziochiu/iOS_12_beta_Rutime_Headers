/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INVocabulary : NSObject {
    _INVocabularyValidator * _validator;
    INVocabularyUpdater * _vocabularyUpdater;
}

+ (void)enumerateVocabularyUsingBlock:(id /* block */)arg1;
+ (id)sharedVocabulary;
+ (id)supportedVocabularyStringTypes;

- (void).cxx_destruct;
- (void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)arg1;
- (void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;
- (void)_THROW_EXCEPTION_FOR_WATCH_OS_AND_TV_OS_UNAVAILABLE_;
- (id)_validator;
- (id)init;
- (void)removeAllVocabularyStrings;
- (void)setValidatedVocabulary:(id)arg1 ofType:(long long)arg2;
- (void)setVocabulary:(id)arg1 ofType:(long long)arg2;
- (void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2;
- (void)validateVocabularyType:(long long)arg1;

@end
