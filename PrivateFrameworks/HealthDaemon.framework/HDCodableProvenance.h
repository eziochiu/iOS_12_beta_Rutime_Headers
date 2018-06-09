/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableProvenance : PBCodable <NSCopying> {
    NSData * _deviceUUID;
    struct { 
        unsigned int originMajorVersion : 1; 
        unsigned int originMinorVersion : 1; 
        unsigned int originPatchVersion : 1; 
    }  _has;
    NSString * _originBuild;
    int  _originMajorVersion;
    int  _originMinorVersion;
    int  _originPatchVersion;
    NSString * _originProductType;
    NSData * _sourceUUID;
    NSString * _sourceVersion;
    NSString * _timeZoneName;
}

@property (nonatomic, retain) NSData *deviceUUID;
@property (nonatomic, readonly) bool hasDeviceUUID;
@property (nonatomic, readonly) bool hasOriginBuild;
@property (nonatomic) bool hasOriginMajorVersion;
@property (nonatomic) bool hasOriginMinorVersion;
@property (nonatomic) bool hasOriginPatchVersion;
@property (nonatomic, readonly) bool hasOriginProductType;
@property (nonatomic, readonly) bool hasSourceUUID;
@property (nonatomic, readonly) bool hasSourceVersion;
@property (nonatomic, readonly) bool hasTimeZoneName;
@property (nonatomic, retain) NSString *originBuild;
@property (nonatomic) int originMajorVersion;
@property (nonatomic) int originMinorVersion;
@property (nonatomic) int originPatchVersion;
@property (nonatomic, retain) NSString *originProductType;
@property (nonatomic, retain) NSData *sourceUUID;
@property (nonatomic, retain) NSString *sourceVersion;
@property (nonatomic, retain) NSString *timeZoneName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedDeviceUUID;
- (id)decodedSourceUUID;
- (id)description;
- (id)deviceUUID;
- (id)dictionaryRepresentation;
- (bool)hasDeviceUUID;
- (bool)hasOriginBuild;
- (bool)hasOriginMajorVersion;
- (bool)hasOriginMinorVersion;
- (bool)hasOriginPatchVersion;
- (bool)hasOriginProductType;
- (bool)hasSourceUUID;
- (bool)hasSourceVersion;
- (bool)hasTimeZoneName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originBuild;
- (int)originMajorVersion;
- (int)originMinorVersion;
- (int)originPatchVersion;
- (id)originProductType;
- (bool)readFrom:(id)arg1;
- (void)setDeviceUUID:(id)arg1;
- (void)setHasOriginMajorVersion:(bool)arg1;
- (void)setHasOriginMinorVersion:(bool)arg1;
- (void)setHasOriginPatchVersion:(bool)arg1;
- (void)setOriginBuild:(id)arg1;
- (void)setOriginMajorVersion:(int)arg1;
- (void)setOriginMinorVersion:(int)arg1;
- (void)setOriginPatchVersion:(int)arg1;
- (void)setOriginProductType:(id)arg1;
- (void)setSourceUUID:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setTimeZoneName:(id)arg1;
- (id)sourceUUID;
- (id)sourceVersion;
- (id)timeZoneName;
- (void)writeTo:(id)arg1;

@end
