/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareVettingInitiateResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int vettingError : 1; 
    }  _has;
    int  _vettingError;
}

@property (nonatomic) bool hasVettingError;
@property (nonatomic) int vettingError;

- (int)StringAsVettingError:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVettingError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasVettingError:(bool)arg1;
- (void)setVettingError:(int)arg1;
- (int)vettingError;
- (id)vettingErrorAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
