/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCDatabaseMetadata : NSObject {
    NSPersistentStoreCoordinator * _coordinator;
    bool  _dirty;
    NSMutableDictionary * _metadata;
    NSPersistentStore * _store;
}

@property (readonly) bool dirty;

+ (id)sharedMetadataForStore:(id)arg1;

- (void).cxx_destruct;
- (bool)dirty;
- (id)initWithStoreURL:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)save;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
