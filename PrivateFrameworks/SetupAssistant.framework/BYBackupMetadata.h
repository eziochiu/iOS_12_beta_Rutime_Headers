/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYBackupMetadata : PBCodable <NSCopying> {
    unsigned int  _appAnalyticsOptIn;
    unsigned int  _deviceAnalyticsOptIn;
    bool  _findMyiPhoneOptIn;
    struct { 
        unsigned int appAnalyticsOptIn : 1; 
        unsigned int deviceAnalyticsOptIn : 1; 
        unsigned int homeButtonHapticKind : 1; 
        unsigned int findMyiPhoneOptIn : 1; 
        unsigned int locationServicesOptIn : 1; 
        unsigned int siriOptIn : 1; 
    }  _has;
    unsigned int  _homeButtonHapticKind;
    bool  _locationServicesOptIn;
    NSData * _nanoRegistryData;
    bool  _siriOptIn;
    unsigned int  _version;
}

@property (nonatomic) unsigned int appAnalyticsOptIn;
@property (nonatomic) unsigned int deviceAnalyticsOptIn;
@property (nonatomic) bool findMyiPhoneOptIn;
@property (nonatomic) bool hasAppAnalyticsOptIn;
@property (nonatomic) bool hasDeviceAnalyticsOptIn;
@property (nonatomic) bool hasFindMyiPhoneOptIn;
@property (nonatomic) bool hasHomeButtonHapticKind;
@property (nonatomic) bool hasLocationServicesOptIn;
@property (nonatomic, readonly) bool hasNanoRegistryData;
@property (nonatomic) bool hasSiriOptIn;
@property (nonatomic) unsigned int homeButtonHapticKind;
@property (nonatomic) bool locationServicesOptIn;
@property (nonatomic, retain) NSData *nanoRegistryData;
@property (nonatomic) bool siriOptIn;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (unsigned int)appAnalyticsOptIn;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceAnalyticsOptIn;
- (id)dictionaryRepresentation;
- (bool)findMyiPhoneOptIn;
- (bool)hasAppAnalyticsOptIn;
- (bool)hasDeviceAnalyticsOptIn;
- (bool)hasFindMyiPhoneOptIn;
- (bool)hasHomeButtonHapticKind;
- (bool)hasLocationServicesOptIn;
- (bool)hasNanoRegistryData;
- (bool)hasSiriOptIn;
- (unsigned long long)hash;
- (unsigned int)homeButtonHapticKind;
- (bool)isEqual:(id)arg1;
- (bool)locationServicesOptIn;
- (void)mergeFrom:(id)arg1;
- (id)nanoRegistryData;
- (bool)readFrom:(id)arg1;
- (void)setAppAnalyticsOptIn:(unsigned int)arg1;
- (void)setDeviceAnalyticsOptIn:(unsigned int)arg1;
- (void)setFindMyiPhoneOptIn:(bool)arg1;
- (void)setHasAppAnalyticsOptIn:(bool)arg1;
- (void)setHasDeviceAnalyticsOptIn:(bool)arg1;
- (void)setHasFindMyiPhoneOptIn:(bool)arg1;
- (void)setHasHomeButtonHapticKind:(bool)arg1;
- (void)setHasLocationServicesOptIn:(bool)arg1;
- (void)setHasSiriOptIn:(bool)arg1;
- (void)setHomeButtonHapticKind:(unsigned int)arg1;
- (void)setLocationServicesOptIn:(bool)arg1;
- (void)setNanoRegistryData:(id)arg1;
- (void)setSiriOptIn:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (bool)siriOptIn;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
