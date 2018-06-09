/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSPasswordGenerationManager : NSObject {
    struct _LXLexicon { } * _lexiconForEnglish;
    struct _LXLexicon { } * _lexiconForUserLocale;
    NSDictionary * _passwordRequirementsByDomain;
}

@property (nonatomic, copy) NSDictionary *passwordRequirementsByDomain;

+ (bool)passwordLooksLikePasswordManagerGeneratedPassword:(id)arg1;
+ (id)requirementsForPasswordRuleSet:(id)arg1 respectingMinLength:(id)arg2 maxLength:(id)arg3;

- (void).cxx_destruct;
- (void)_lexiconEnumerateEntries:(struct _LXLexicon { }*)arg1 forString:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_moreTypeablePassword;
- (bool)_tokensContainUnwantedWords:(id)arg1;
- (void)dealloc;
- (id)defaultRequirementsForDomain:(id)arg1;
- (id)defaultRequirementsForURL:(id)arg1;
- (id)generatedPasswordMatchingRequirements:(id)arg1;
- (id)init;
- (id)initWithPasswordRequirementsByDomain:(id)arg1;
- (bool)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1;
- (bool)passwordGenerationIsDisallowedByRequirements:(id)arg1;
- (id)passwordRequirementsByDomain;
- (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1;
- (void)setPasswordRequirementsByDomain:(id)arg1;
- (id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2;

@end
