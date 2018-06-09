/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMessageStatusUpdate : PBCodable <NSCopying> {
    struct { 
        unsigned int statusVersion : 1; 
        unsigned int updatedStatus : 1; 
    }  _has;
    NSString * _messageId;
    unsigned int  _statusVersion;
    unsigned int  _updatedStatus;
}

@property (nonatomic, readonly) bool hasMessageId;
@property (nonatomic) bool hasStatusVersion;
@property (nonatomic) bool hasUpdatedStatus;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic) unsigned int statusVersion;
@property (nonatomic) unsigned int updatedStatus;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageId;
- (bool)hasStatusVersion;
- (bool)hasUpdatedStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusVersion:(bool)arg1;
- (void)setHasUpdatedStatus:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)setStatusVersion:(unsigned int)arg1;
- (void)setUpdatedStatus:(unsigned int)arg1;
- (unsigned int)statusVersion;
- (unsigned int)updatedStatus;
- (void)writeTo:(id)arg1;

@end
