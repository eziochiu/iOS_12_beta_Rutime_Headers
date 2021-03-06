/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDAccount : NSObject

@property (nonatomic) bool hasDisabledKeychainExplicitly;

+ (id)sharedInstance;

- (id)_primaryAppleAccount;
- (id)authToken;
- (id)contextForPrimaryAccount;
- (id)escrowURL;
- (bool)hasDisabledKeychainExplicitly;
- (id)iCloudEnv;
- (bool)isICDPEnabledForDSID:(id)arg1;
- (bool)isICDPEnabledForDSID:(id)arg1 checkWithServer:(bool)arg2;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAccountUsername;
- (void)setHasDisabledKeychainExplicitly:(bool)arg1;
- (id)sharedAccountStore;

@end
