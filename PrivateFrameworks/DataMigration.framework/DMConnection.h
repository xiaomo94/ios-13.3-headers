/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMConnection : NSObject {
    DMXPCConnection * _connection;
}

+ (id)connection;

- (void).cxx_destruct;
- (void)cancelDeferredExitWithCompletion:(id /* block */)arg1;
- (void)changeVisibility:(bool)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)deferExitWithCompletion:(id /* block */)arg1;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)arg1;
- (id)init;
- (void)isMigrationNeeded:(id /* block */)arg1;
- (void)migrateCheckingNecessity:(bool)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(bool)arg3 completion:(id /* block */)arg4;
- (void)migrationPhaseDescription:(id /* block */)arg1;
- (void)migrationPluginResults:(id /* block */)arg1;
- (void)orderedPluginIdentifiersWithCompletion:(id /* block */)arg1;
- (void)previousBuildVersion:(id /* block */)arg1;
- (void)reportMigrationFailure;
- (void)testMigrationUIWithProgress:(bool)arg1 forceInvert:(bool)arg2;
- (void)userDataDisposition:(id /* block */)arg1;

@end
