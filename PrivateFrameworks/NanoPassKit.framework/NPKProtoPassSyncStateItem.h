/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying> {
    struct { 
        unsigned int sequenceCounter : 1; 
    }  _has;
    NSData * _manifestHash;
    NSString * _passTypeIdentifier;
    unsigned int  _sequenceCounter;
    NSString * _serialNumber;
}

@property (nonatomic) bool hasSequenceCounter;
@property (nonatomic, retain) NSData *manifestHash;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic) unsigned int sequenceCounter;
@property (nonatomic, retain) NSString *serialNumber;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSequenceCounter;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manifestHash;
- (void)mergeFrom:(id)arg1;
- (id)passTypeIdentifier;
- (bool)readFrom:(id)arg1;
- (unsigned int)sequenceCounter;
- (id)serialNumber;
- (void)setHasSequenceCounter:(bool)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setSequenceCounter:(unsigned int)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
