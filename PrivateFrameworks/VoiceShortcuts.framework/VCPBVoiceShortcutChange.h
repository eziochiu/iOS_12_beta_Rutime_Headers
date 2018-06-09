/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCPBVoiceShortcutChange : PBCodable <NSCopying> {
    int  _changeType;
    NSData * _syncMetadata;
    VCPBVoiceShortcut * _voiceShortcut;
    NSString * _voiceShortcutIdentifier;
}

@property (nonatomic) int changeType;
@property (nonatomic, readonly) bool hasSyncMetadata;
@property (nonatomic, readonly) bool hasVoiceShortcut;
@property (nonatomic, retain) NSData *syncMetadata;
@property (nonatomic, retain) VCPBVoiceShortcut *voiceShortcut;
@property (nonatomic, retain) NSString *voiceShortcutIdentifier;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSyncMetadata;
- (bool)hasVoiceShortcut;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setSyncMetadata:(id)arg1;
- (void)setVoiceShortcut:(id)arg1;
- (void)setVoiceShortcutIdentifier:(id)arg1;
- (id)syncMetadata;
- (id)voiceShortcut;
- (id)voiceShortcutIdentifier;
- (void)writeTo:(id)arg1;

@end
