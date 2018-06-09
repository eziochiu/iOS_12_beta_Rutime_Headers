/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCVoiceShortcutChange : NSObject {
    VCPBIntentDefinition * _intentDefinition;
    NSData * _syncMetadata;
    VCVoiceShortcut * _voiceShortcut;
    unsigned long long  _voiceShortcutChangeType;
    NSString * _voiceShortcutIdentifier;
}

@property (nonatomic, readonly) VCPBIntentDefinition *intentDefinition;
@property (nonatomic, retain) NSData *syncMetadata;
@property (nonatomic, readonly) VCVoiceShortcut *voiceShortcut;
@property (nonatomic, readonly) unsigned long long voiceShortcutChangeType;
@property (nonatomic, readonly) NSString *voiceShortcutIdentifier;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initFromProtobufObject:(id)arg1;
- (id)initWithDeletedVoiceShortcutIdentifier:(id)arg1 syncMetadata:(id)arg2;
- (id)initWithVoiceShortcut:(id)arg1 changeType:(unsigned long long)arg2 syncMetadata:(id)arg3;
- (id)initWithVoiceShortcut:(id)arg1 voiceShortcutIdentifier:(id)arg2 changeType:(unsigned long long)arg3 syncMetadata:(id)arg4;
- (id)initWithVoiceShortcutManagedObject:(id)arg1 syncServiceIdentifier:(id)arg2 error:(id*)arg3;
- (id)intentDefinition;
- (bool)isEqual:(id)arg1;
- (id)protobufObject;
- (void)setSyncMetadata:(id)arg1;
- (id)syncMetadata;
- (id)syncMetadataForSyncServiceWithIdentifier:(id)arg1 forManagedObject:(id)arg2;
- (id)voiceShortcut;
- (unsigned long long)voiceShortcutChangeType;
- (id)voiceShortcutIdentifier;

@end
