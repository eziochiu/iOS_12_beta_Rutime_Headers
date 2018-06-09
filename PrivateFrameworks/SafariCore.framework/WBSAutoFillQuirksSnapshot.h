/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary * _autoFillQuirks;
    NSArray * _domainsIneligibleForPasswordAuditing;
    NSArray * _domainsWithAssociatedCredentials;
    NSDictionary * _passwordRequirementsByDomain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *domainsIneligibleForPasswordAuditing;
@property (nonatomic, readonly, copy) NSArray *domainsWithAssociatedCredentials;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *passwordRequirementsByDomain;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)arg1 error:(id*)arg2;
- (id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)arg1 error:(id*)arg2;
- (id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)arg1 error:(id*)arg2;
- (id)domainsIneligibleForPasswordAuditing;
- (id)domainsWithAssociatedCredentials;
- (id)init;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;
- (id)passwordRequirementsByDomain;
- (id)plistDataWithFormat:(unsigned long long)arg1;

@end
