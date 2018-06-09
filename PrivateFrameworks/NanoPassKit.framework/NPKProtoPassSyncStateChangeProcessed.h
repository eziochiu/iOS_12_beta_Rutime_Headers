/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoPassSyncStateChangeProcessed : PBCodable <NSCopying> {
    NSData * _acceptedChangeUUID;
    bool  _changeAccepted;
    struct { 
        unsigned int changeAccepted : 1; 
    }  _has;
}

@property (nonatomic, retain) NSData *acceptedChangeUUID;
@property (nonatomic) bool changeAccepted;
@property (nonatomic) bool hasChangeAccepted;

- (void).cxx_destruct;
- (id)acceptedChangeUUID;
- (bool)changeAccepted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeAccepted;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAcceptedChangeUUID:(id)arg1;
- (void)setChangeAccepted:(bool)arg1;
- (void)setHasChangeAccepted:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
