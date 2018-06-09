/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *hardwareType;
@property (nonatomic, retain) NSString *installError;
@property (nonatomic) unsigned long long installStatus;
@property (nonatomic) unsigned long long installType;
@property (nonatomic) long long jobID;

+ (unsigned long long)_installStatusForString:(id)arg1;
+ (unsigned long long)_installTypeForString:(id)arg1;
+ (id)_stringForInstallStatus:(unsigned long long)arg1;
+ (id)_stringForInstallType:(unsigned long long)arg1;

- (id)buildVersion;
- (id)bundleID;
- (id)description;
- (id)hardwareType;
- (id)init;
- (id)installError;
- (unsigned long long)installStatus;
- (unsigned long long)installType;
- (long long)jobID;
- (bool)requiresDiagnosticSendingPermission;
- (void)setBuildVersion:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setHardwareType:(id)arg1;
- (void)setInstallError:(id)arg1;
- (void)setInstallStatus:(unsigned long long)arg1;
- (void)setInstallType:(unsigned long long)arg1;
- (void)setJobID:(long long)arg1;

@end
