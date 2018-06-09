/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying> {
    int  _enumValue;
    struct { 
        unsigned int enumValue : 1; 
    }  _has;
    GEOFormattedString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int enumValue;
@property (nonatomic, readonly) <GEOServerFormattedString> *formattedName;
@property (nonatomic) bool hasEnumValue;
@property (nonatomic, readonly) bool hasName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOFormattedString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)enumValue;
- (id)formattedName;
- (bool)hasEnumValue;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setEnumValue:(int)arg1;
- (void)setHasEnumValue:(bool)arg1;
- (void)setName:(id)arg1;
- (int)value;
- (void)writeTo:(id)arg1;

@end
