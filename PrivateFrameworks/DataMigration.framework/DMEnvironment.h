/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMEnvironment : NSObject {
    bool  _testMigrationInfrastructureOnly;
}

@property (nonatomic) bool testMigrationInfrastructureOnly;

+ (bool)isBuildVersion:(id)arg1 equalToBuildVersion:(id)arg2;
+ (id)sharedInstance;

- (id)buildVersion;
- (void)clearContext;
- (id)context;
- (id)continuousIntegrationMarkerPref;
- (id)lastBuildVersionPref;
- (id)lastMigrationResultsPref;
- (void)setContext:(id)arg1;
- (void)setLastBuildVersionPref:(id)arg1;
- (void)setLastMigrationResultsPref:(id)arg1;
- (void)setTestMigrationInfrastructureOnly:(bool)arg1;
- (void)setUserDataDispositionPref:(id)arg1;
- (bool)suppressMigrationPluginWrapperExitMarkerPref;
- (bool)testMigrationInfrastructureOnly;
- (id)userDataDispositionPref;
- (bool)waitForExecutePluginsSignalMarkerPref;

@end
