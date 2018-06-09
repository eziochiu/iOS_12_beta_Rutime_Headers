/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLogConfig : NSObject <NSCopying, NSMutableCopying> {
    SSLogFileOptions * _backingLogFileOptions;
    NSObject<OS_os_log> * _backingOSLogObject;
    NSString * _category;
    unsigned long long  _environment;
    NSString * _outputDirectory;
    NSString * _outputFilename;
    NSObject<OS_dispatch_queue> * _propertyAccessQueue;
    NSString * _subsystem;
    bool  _writeToDisk;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *OSLogObject;
@property (nonatomic, retain) SSLogFileOptions *backingLogFileOptions;
@property (nonatomic, retain) NSObject<OS_os_log> *backingOSLogObject;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, readonly) bool debugLogsEnabled;
@property (nonatomic) unsigned long long environment;
@property (nonatomic, readonly) SSLogFileOptions *logFileOptions;
@property (nonatomic, copy) NSString *outputDirectory;
@property (nonatomic, copy) NSString *outputFilename;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (nonatomic, readonly) bool shouldLog;
@property (nonatomic, readonly) bool shouldLogToDisk;
@property (nonatomic, copy) NSString *subsystem;
@property (nonatomic) bool writeToDisk;

+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;
+ (bool)_debugLogsEnabled:(id)arg1;
+ (bool)_deviceIsRunningInternalBuild;
+ (bool)_deviceIsRunningInternalOrSeedBuild;
+ (bool)_deviceIsRunningSeedBuild;
+ (id)_logFileDirectoryPathForSubsystem:(id)arg1 category:(id)arg2;
+ (id)_logFilenameForSubsystem:(id)arg1 category:(id)arg2;
+ (id)sharedAccountsAuthenticationConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedBagConfig;
+ (id)sharedConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharedFairPlayAnisetteConfig;
+ (id)sharedFeatureEnablerMigrationConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedStoreServicesConfig;
+ (id)sharedStoreServicesConfigOversize;
+ (id)sharedWriteToDiskConfig;
+ (id)sharediTunesStoreConfig;
+ (id)sharediTunesStoreConfigOversize;

- (void).cxx_destruct;
- (id)OSLogObject;
- (id)backingLogFileOptions;
- (id)backingOSLogObject;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)debugLogsEnabled;
- (id)description;
- (unsigned long long)environment;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)logFileOptions;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)outputDirectory;
- (id)outputFilename;
- (id)propertyAccessQueue;
- (void)setBackingLogFileOptions:(id)arg1;
- (void)setBackingOSLogObject:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setEnvironment:(unsigned long long)arg1;
- (void)setOutputDirectory:(id)arg1;
- (void)setOutputFilename:(id)arg1;
- (void)setPropertyAccessQueue:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (void)setWriteToDisk:(bool)arg1;
- (bool)shouldLog;
- (bool)shouldLogToDisk;
- (id)subsystem;
- (bool)writeToDisk;

@end
