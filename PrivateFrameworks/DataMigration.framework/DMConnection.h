/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMConnection : NSObject {
    DMXPCConnection * _connection;
}

+ (id)connection;

- (void).cxx_destruct;
- (void)changeVisibility:(bool)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)forceMigrationOnNextRebootWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)isMigrationNeeded:(id /* block */)arg1;
- (void)migrateCheckingNecessity:(bool)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(bool)arg3 completion:(id /* block */)arg4;
- (void)migrationPhaseDescription:(id /* block */)arg1;
- (void)orderedPluginIdentifiersWithCompletion:(id /* block */)arg1;
- (void)previousBuildVersion:(id /* block */)arg1;
- (void)reportMigrationFailure;
- (void)testMigrationUIWithProgress:(bool)arg1 forceInvert:(bool)arg2 completion:(id /* block */)arg3;
- (void)userDataDisposition:(id /* block */)arg1;

@end
