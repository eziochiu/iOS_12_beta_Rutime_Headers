/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRemoteAdminAvailabilityResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int isAvailable : 1; 
    }  _has;
    bool  _isAvailable;
}

@property (nonatomic) bool hasIsAvailable;
@property (nonatomic) bool isAvailable;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsAvailable;
- (unsigned long long)hash;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsAvailable:(bool)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
