/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {
    NSString * _addressIdentifier;
    int  _addressType;
    struct { 
        unsigned int addressType : 1; 
        unsigned int isMe : 1; 
    }  _has;
    bool  _isMe;
    NSString * _name;
    NSString * _spokenName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *addressIdentifier;
@property (nonatomic) int addressType;
@property (nonatomic, readonly) bool hasAddressIdentifier;
@property (nonatomic) bool hasAddressType;
@property (nonatomic) bool hasIsMe;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasSpokenName;
@property (nonatomic) bool isMe;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *spokenName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsAddressType:(id)arg1;
- (id)addressIdentifier;
- (int)addressType;
- (id)addressTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressIdentifier;
- (bool)hasAddressType;
- (bool)hasIsMe;
- (bool)hasName;
- (bool)hasSpokenName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setAddressIdentifier:(id)arg1;
- (void)setAddressType:(int)arg1;
- (void)setHasAddressType:(bool)arg1;
- (void)setHasIsMe:(bool)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSpokenName:(id)arg1;
- (id)spokenName;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
