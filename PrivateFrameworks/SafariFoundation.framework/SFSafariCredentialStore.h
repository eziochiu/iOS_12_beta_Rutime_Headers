/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFSafariCredentialStore : NSObject

+ (void)_approvedAndValidSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_bestDomainFromApprovedDomainsForWebCredentials:(id)arg1 appLinks:(id)arg2 continuity:(id)arg3 appID:(id)arg4;
+ (id)_credentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 savedPasswords:(id)arg3;
+ (void)_getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 shouldAnalyzeExistingCredentials:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)_getExternalCredentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 completion:(id /* block */)arg2;
+ (bool)_savedPasswordIsRelated:(id)arg1 toEntry:(id)arg2 andWebsiteURL:(id)arg3;
+ (void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_sortCredentials:(id)arg1 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg2;
+ (void)bestDomainForAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getAllApprovedSharedWebCredentialsEntries:(id /* block */)arg1;
+ (void)getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)getApprovedSharedWebCredentialsEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getCanSaveCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)getCredentialsForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)getCredentialsForAppWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)isAppAutoFillAvailable;
+ (bool)isRemoteAutoFillAvailable;
+ (id)textSuggestionHeaderForExternalCredential:(id)arg1;
+ (id)titleForPasswordCredentialIdentity:(id)arg1 formURL:(id)arg2;

@end
