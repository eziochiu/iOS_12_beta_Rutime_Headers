/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFStrongPasswordGenerator : NSObject {
    WBSPasswordGenerationManager * _passwordGenerationManager;
}

- (void).cxx_destruct;
- (id)generatedPasswordForAppWithAppID:(id)arg1 passwordRules:(id)arg2 confirmPasswordRules:(id)arg3;
- (id)generatedPasswordForAppWithAppID:(id)arg1 passwordRules:(id)arg2 minimumLength:(unsigned long long)arg3 maximumLength:(unsigned long long)arg4;
- (id)init;

@end
