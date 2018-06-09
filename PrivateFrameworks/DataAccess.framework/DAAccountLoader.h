/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAAccountLoader : NSObject {
    NSMutableDictionary * _acAccountTypeToAccountDaemonBundleSubpath;
    NSMutableDictionary * _acAccountTypeToAccountFrameworkSubpath;
    NSMutableDictionary * _acAccountTypeToClassNames;
    NSMutableDictionary * _acParentAccountTypeToChildAccountTypes;
}

@property (nonatomic, retain) NSMutableDictionary *acAccountTypeToAccountDaemonBundleSubpath;
@property (nonatomic, retain) NSMutableDictionary *acAccountTypeToAccountFrameworkSubpath;
@property (nonatomic, retain) NSMutableDictionary *acAccountTypeToClassNames;
@property (nonatomic, retain) NSMutableDictionary *acParentAccountTypeToChildAccountTypes;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2;
- (bool)_loadFrameworkAtSubpath:(id)arg1;
- (id)acAccountTypeToAccountDaemonBundleSubpath;
- (id)acAccountTypeToAccountFrameworkSubpath;
- (id)acAccountTypeToClassNames;
- (id)acParentAccountTypeToChildAccountTypes;
- (Class)accountClassForACAccount:(id)arg1;
- (Class)agentClassForACAccount:(id)arg1;
- (Class)clientAccountClassForACAccount:(id)arg1;
- (Class)daemonAccountClassForACAccount:(id)arg1;
- (Class)daemonAppropriateAccountClassForACAccount:(id)arg1;
- (id)init;
- (void)loadDaemonBundleForACAccountType:(id)arg1;
- (void)loadFrameworkForACAccountType:(id)arg1;
- (void)setAcAccountTypeToAccountDaemonBundleSubpath:(id)arg1;
- (void)setAcAccountTypeToAccountFrameworkSubpath:(id)arg1;
- (void)setAcAccountTypeToClassNames:(id)arg1;
- (void)setAcParentAccountTypeToChildAccountTypes:(id)arg1;

@end