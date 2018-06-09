/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCPBChange : PBCodable <NSCopying, SYChange> {
    int  _changeType;
    NSData * _message;
    int  _messageType;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic) int changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *message;
@property (nonatomic) int messageType;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (int)StringAsMessageType:(id)arg1;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithVoiceShortcutChange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (id)objectIdentifier;
- (bool)readFrom:(id)arg1;
- (id)sequencer;
- (void)setChangeType:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageType:(int)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
