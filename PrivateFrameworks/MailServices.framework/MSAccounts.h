/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSAccounts : MSMailDefaultService

+ (void)accountValuesForKeys:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)accountValuesForKeys:(id)arg1 launchMobileMail:(bool)arg2 completionBlock:(id /* block */)arg3;
+ (void)accountValuesForKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 launchMobileMail:(bool)arg4 completionBlock:(id /* block */)arg5;
+ (id)attachmentCapabilities;
+ (bool)canSendMail;
+ (bool)canSendMailSourceAccountManagement:(int)arg1;
+ (id)customSignatureForSendingEmailAddress:(id)arg1;
+ (bool)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2;
+ (bool)hasActiveAccounts;
+ (void)mailboxListingForAccountWithUniqueIdentifier:(id)arg1 keys:(id)arg2 completionBlock:(id /* block */)arg3;
+ (bool)setPushStateForMailboxWithPath:(id)arg1 account:(id)arg2 pushState:(bool)arg3 error:(id*)arg4;

- (void)_listAccountKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 handler:(id /* block */)arg4;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id /* block */)arg3;

@end