/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {
    NSString * _hardwareIdentifier;
    NSString * _osBuild;
    NSString * _osVersion;
}

@property (nonatomic, retain) NSString *hardwareIdentifier;
@property (nonatomic, readonly) bool hasHardwareIdentifier;
@property (nonatomic, readonly) bool hasOsBuild;
@property (nonatomic, readonly) bool hasOsVersion;
@property (nonatomic, retain) NSString *osBuild;
@property (nonatomic, retain) NSString *osVersion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hardwareIdentifier;
- (bool)hasHardwareIdentifier;
- (bool)hasOsBuild;
- (bool)hasOsVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)osBuild;
- (id)osVersion;
- (bool)readFrom:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
