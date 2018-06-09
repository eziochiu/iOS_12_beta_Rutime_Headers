/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INVocabularyValidator : NSObject

+ (void)initialize;

- (bool)_bundleID:(id)arg1 isWhitelistedForVocabularyType:(long long)arg2;
- (void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg1 handlingIntents:(id)arg2 completion:(id /* block */)arg3;
- (void)_determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(id /* block */)arg3;
- (id)_intentsUsingVocabularyType:(long long)arg1;
- (id)_validatedItemsFromVocabularyObject:(id)arg1 ofType:(long long)arg2 loggingWarnings:(bool)arg3 withItemFactory:(id /* block */)arg4;
- (void)determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(id /* block */)arg3;
- (unsigned long long)maximumNumberOfVocabularyStringsForType:(long long)arg1;
- (id)validatedItemsFromVocabularySpeakables:(id)arg1 ofType:(long long)arg2 loggingWarnings:(bool)arg3;
- (id)validatedItemsFromVocabularyStrings:(id)arg1 ofType:(long long)arg2 loggingWarnings:(bool)arg3;

@end
