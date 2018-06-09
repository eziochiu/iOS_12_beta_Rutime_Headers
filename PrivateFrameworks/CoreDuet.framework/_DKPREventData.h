/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPREventData : PBCodable <NSCopying> {
    NSData * _event;
    struct { 
        unsigned int uncompressedLength : 1; 
    }  _has;
    unsigned long long  _uncompressedLength;
    unsigned int  _version;
}

@property (nonatomic, retain) NSData *event;
@property (nonatomic) bool hasUncompressedLength;
@property (nonatomic) unsigned long long uncompressedLength;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)event;
- (bool)hasUncompressedLength;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setHasUncompressedLength:(bool)arg1;
- (void)setUncompressedLength:(unsigned long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned long long)uncompressedLength;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
