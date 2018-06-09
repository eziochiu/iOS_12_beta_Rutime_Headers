/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoHandshake : PBCodable <NSCopying> {
    unsigned int  _position;
    unsigned int  _state;
    unsigned int  _version;
}

@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)position;
- (bool)readFrom:(id)arg1;
- (void)setPosition:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)state;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
