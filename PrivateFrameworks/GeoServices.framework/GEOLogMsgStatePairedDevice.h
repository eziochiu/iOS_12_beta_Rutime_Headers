/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
        unsigned int isConnected : 1; 
    }  _has;
    bool  _isConnected;
    GEOLogMsgStateDeviceIdentifier * _pairedDeviceIdentifier;
    int  _type;
}

@property (nonatomic) bool hasIsConnected;
@property (nonatomic, readonly) bool hasPairedDeviceIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic) bool isConnected;
@property (nonatomic, retain) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsConnected;
- (bool)hasPairedDeviceIdentifier;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairedDeviceIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setHasIsConnected:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)setPairedDeviceIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end