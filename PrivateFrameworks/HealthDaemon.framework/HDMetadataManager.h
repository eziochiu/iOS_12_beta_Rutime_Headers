/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMetadataManager : NSObject {
    HDDatabaseValueCache * _keyCache;
    HDDatabaseValueCache * _keyEntityCache;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)_externalSyncMetadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(id /* block */)arg3 error:(id*)arg4;
- (id)_ignoredInsertedMetadataKeys;
- (bool)_insertExternalSyncMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(bool)arg5 error:(id*)arg6;
- (bool)_insertMetadata:(id)arg1 forObjectID:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (id)_keyEntityForKey:(id)arg1 createIfNecessary:(bool)arg2 database:(id)arg3 error:(id*)arg4;
- (id)_keyForKeyID:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)_metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(id /* block */)arg3 statement:(id)arg4 error:(id*)arg5;
- (bool)_useExternalSyncIdentifierPredicateForKey:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)insertMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(bool)arg5 error:(id*)arg6;
- (id)metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(id /* block */)arg3 statement:(id)arg4 error:(id*)arg5;
- (id)metadataForObjectID:(long long)arg1 keyFilter:(id /* block */)arg2 error:(id*)arg3;
- (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
- (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;

@end
