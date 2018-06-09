/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNaturalLanguageDissector : SGPipelineDissector {
    NSMutableDictionary * _conversations;
}

+ (bool)allowNaturalLanguageDissector;
+ (id)ipsosMessageWithEntity:(id)arg1 store:(id)arg2;

- (void).cxx_destruct;
- (void)addEnrichmentForEvents:(id)arg1 forMessage:(id)arg2 toEntity:(id)arg3;
- (id)conversationWithIdentifier:(id)arg1;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)init;
- (id)initWithoutSharedInstance;

@end
