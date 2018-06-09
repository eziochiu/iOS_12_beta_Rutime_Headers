/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSecureElementGetPairingInfoRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int setAuthRandomIfNotPaired : 1; 
    }  _has;
    bool  _setAuthRandomIfNotPaired;
}

@property (nonatomic) bool hasSetAuthRandomIfNotPaired;
@property (nonatomic) bool setAuthRandomIfNotPaired;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSetAuthRandomIfNotPaired;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)setAuthRandomIfNotPaired;
- (void)setHasSetAuthRandomIfNotPaired:(bool)arg1;
- (void)setSetAuthRandomIfNotPaired:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
