/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedClientSideListener;

- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1;

@end
