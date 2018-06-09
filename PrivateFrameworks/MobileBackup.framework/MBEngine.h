/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBEngine : NSObject {
    MBAppManager * _appManager;
    MBDebugContext * _debugContext;
    MBDomainManager * _domainManager;
    NSMutableDictionary * _domainRestoreBehaviors;
    bool  _encrypted;
    MBProperties * _properties;
    MBSettingsContext * _settingsContext;
}

@property (nonatomic, readonly) MBAppManager *appManager;
@property (getter=isBackgroundRestore, nonatomic, readonly) bool backgroundRestore;
@property (getter=isBackupEngine, nonatomic, readonly) bool backupEngine;
@property (getter=isCloudKitEngine, nonatomic, readonly) bool cloudKitEngine;
@property (getter=shouldCommitIfPossible, nonatomic, readonly) bool commitIfPossible;
@property (nonatomic, readonly) MBDebugContext *debugContext;
@property (nonatomic, readonly) MBDomainManager *domainManager;
@property (nonatomic, retain) NSMutableDictionary *domainRestoreBehaviors;
@property (getter=isDriveEngine, nonatomic, readonly) bool driveEngine;
@property (nonatomic) bool encrypted;
@property (nonatomic, readonly) int engineMode;
@property (nonatomic, readonly) NSString *engineModeString;
@property (nonatomic, readonly) int engineType;
@property (nonatomic, readonly) NSString *engineTypeString;
@property (getter=isForegroundRestore, nonatomic, readonly) bool foregroundRestore;
@property (getter=isMigrate, nonatomic, readonly) bool migrate;
@property (nonatomic, readonly) MBProperties *properties;
@property (getter=isRestoreEngine, nonatomic, readonly) bool restoreEngine;
@property (nonatomic, readonly) int restoreType;
@property (nonatomic, readonly) NSString *restoreTypeString;
@property (getter=isServiceEngine, nonatomic, readonly) bool serviceEngine;
@property (nonatomic, readonly) MBSettingsContext *settingsContext;

+ (id)aggregateDictionaryForFullRestoreWithKey:(id)arg1 engineType:(int)arg2;
+ (id)aggregateDictionaryKey:(id)arg1 forEngineType:(int)arg2 engineMode:(int)arg3;
+ (id)aggregateDictionaryKey:(id)arg1 forEngineType:(int)arg2 restoreType:(int)arg3;
+ (id)stringForEngineMode:(int)arg1;
+ (id)stringForEngineType:(int)arg1;
+ (id)stringForRestoreType:(int)arg1;

- (id)aggregateDictionaryKey:(id)arg1;
- (id)appManager;
- (void)dealloc;
- (id)debugContext;
- (id)domainManager;
- (id)domainRestoreBehaviors;
- (bool)encrypted;
- (int)engineMode;
- (id)engineModeString;
- (int)engineType;
- (id)engineTypeString;
- (id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 domainManager:(id)arg3;
- (bool)isBackgroundRestore;
- (bool)isBackupEngine;
- (bool)isCloudKitEngine;
- (bool)isDriveEngine;
- (bool)isForegroundRestore;
- (bool)isMigrate;
- (bool)isRestoreEngine;
- (bool)isServiceEngine;
- (id)localRootPathForDomain:(id)arg1;
- (id)properties;
- (void)pushAggregateDictionaryTotalFileCount:(long long)arg1 totalFileSize:(long long)arg2 duration:(double)arg3;
- (long long)restoreBehaviorForDomain:(id)arg1 error:(id*)arg2;
- (long long)restoreBehaviorForFile:(id)arg1 error:(id*)arg2;
- (long long)restoreBehaviorForFile:(id)arg1 withValidation:(bool)arg2 error:(id*)arg3;
- (int)restoreType;
- (id)restoreTypeString;
- (id)restoringBundleID;
- (void)setDomainRestoreBehaviors:(id)arg1;
- (void)setEncrypted:(bool)arg1;
- (id)settingsContext;
- (bool)shouldAlwaysRestoreSystemSharedContainerDomain:(id)arg1;
- (bool)shouldCommitIfPossible;
- (id)validateFile:(id)arg1;
- (id)validateRestoreDomain:(id)arg1 relativePath:(id)arg2;

@end
