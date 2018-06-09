/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGameControllerPropertiesProtobuf : PBCodable <NSCopying> {
    int  _buttonAUpDelay;
    struct { 
        unsigned int buttonAUpDelay : 1; 
        unsigned int playerIndex : 1; 
        unsigned int profile : 1; 
        unsigned int supportsExtendedMotion : 1; 
    }  _has;
    unsigned int  _playerIndex;
    int  _profile;
    bool  _supportsExtendedMotion;
    NSString * _vendorName;
}

@property (nonatomic) int buttonAUpDelay;
@property (nonatomic) bool hasButtonAUpDelay;
@property (nonatomic) bool hasPlayerIndex;
@property (nonatomic) bool hasProfile;
@property (nonatomic) bool hasSupportsExtendedMotion;
@property (nonatomic, readonly) bool hasVendorName;
@property (nonatomic) unsigned int playerIndex;
@property (nonatomic) int profile;
@property (nonatomic) bool supportsExtendedMotion;
@property (nonatomic, retain) NSString *vendorName;

- (void).cxx_destruct;
- (int)StringAsProfile:(id)arg1;
- (int)buttonAUpDelay;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasButtonAUpDelay;
- (bool)hasPlayerIndex;
- (bool)hasProfile;
- (bool)hasSupportsExtendedMotion;
- (bool)hasVendorName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)playerIndex;
- (int)profile;
- (id)profileAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtonAUpDelay:(int)arg1;
- (void)setHasButtonAUpDelay:(bool)arg1;
- (void)setHasPlayerIndex:(bool)arg1;
- (void)setHasProfile:(bool)arg1;
- (void)setHasSupportsExtendedMotion:(bool)arg1;
- (void)setPlayerIndex:(unsigned int)arg1;
- (void)setProfile:(int)arg1;
- (void)setSupportsExtendedMotion:(bool)arg1;
- (void)setVendorName:(id)arg1;
- (bool)supportsExtendedMotion;
- (id)vendorName;
- (void)writeTo:(id)arg1;

@end
