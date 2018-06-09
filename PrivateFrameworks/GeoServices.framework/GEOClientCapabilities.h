/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientCapabilities : PBCodable <NSCopying> {
    GEOAbAssignInfo * _abAssignInfo;
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    bool  _clusteredTransitRoutesSupported;
    NSString * _deviceCountryCode;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    GEOFormattedStringClientCapabilities * _formattedStringClientCapabilities;
    NSString * _hardwareModel;
    struct { 
        unsigned int maxFormatterSupported : 1; 
        unsigned int maxManeuverTypeSupported : 1; 
        unsigned int maxRouteIncidentSupported : 1; 
        unsigned int maxTrafficSpeedSupported : 1; 
        unsigned int transitMarketSupport : 1; 
        unsigned int clusteredTransitRoutesSupported : 1; 
        unsigned int includeCrossLanguagePhonetics : 1; 
        unsigned int internalInstall : 1; 
        unsigned int internalTool : 1; 
        unsigned int routeOptionsSupported : 1; 
        unsigned int snapToClosestStopSupported : 1; 
        unsigned int supportsGuidanceEvents : 1; 
        unsigned int supportsGuidanceEventsInlineShields : 1; 
        unsigned int supportsLongShieldStrings : 1; 
    }  _has;
    bool  _includeCrossLanguagePhonetics;
    bool  _internalInstall;
    bool  _internalTool;
    int  _maxFormatterSupported;
    int  _maxManeuverTypeSupported;
    int  _maxRouteIncidentSupported;
    unsigned int  _maxTrafficSpeedSupported;
    GEOLocalTime * _requestTime;
    bool  _routeOptionsSupported;
    bool  _snapToClosestStopSupported;
    bool  _supportsGuidanceEvents;
    bool  _supportsGuidanceEventsInlineShields;
    bool  _supportsLongShieldStrings;
    int  _transitMarketSupport;
    PBUnknownFields * _unknownFields;
    NSString * _userCurrentTimezone;
}

@property (nonatomic, retain) GEOAbAssignInfo *abAssignInfo;
@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic) bool clusteredTransitRoutesSupported;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, retain) GEOFormattedStringClientCapabilities *formattedStringClientCapabilities;
@property (nonatomic, retain) NSString *hardwareModel;
@property (nonatomic, readonly) bool hasAbAssignInfo;
@property (nonatomic, readonly) bool hasAppMajorVersion;
@property (nonatomic, readonly) bool hasAppMinorVersion;
@property (nonatomic) bool hasClusteredTransitRoutesSupported;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic, readonly) bool hasFormattedStringClientCapabilities;
@property (nonatomic, readonly) bool hasHardwareModel;
@property (nonatomic) bool hasIncludeCrossLanguagePhonetics;
@property (nonatomic) bool hasInternalInstall;
@property (nonatomic) bool hasInternalTool;
@property (nonatomic) bool hasMaxFormatterSupported;
@property (nonatomic) bool hasMaxManeuverTypeSupported;
@property (nonatomic) bool hasMaxRouteIncidentSupported;
@property (nonatomic) bool hasMaxTrafficSpeedSupported;
@property (nonatomic, readonly) bool hasRequestTime;
@property (nonatomic) bool hasRouteOptionsSupported;
@property (nonatomic) bool hasSnapToClosestStopSupported;
@property (nonatomic) bool hasSupportsGuidanceEvents;
@property (nonatomic) bool hasSupportsGuidanceEventsInlineShields;
@property (nonatomic) bool hasSupportsLongShieldStrings;
@property (nonatomic) bool hasTransitMarketSupport;
@property (nonatomic, readonly) bool hasUserCurrentTimezone;
@property (nonatomic) bool includeCrossLanguagePhonetics;
@property (nonatomic) bool internalInstall;
@property (nonatomic) bool internalTool;
@property (nonatomic) int maxFormatterSupported;
@property (nonatomic) int maxManeuverTypeSupported;
@property (nonatomic) int maxRouteIncidentSupported;
@property (nonatomic) unsigned int maxTrafficSpeedSupported;
@property (nonatomic, retain) GEOLocalTime *requestTime;
@property (nonatomic) bool routeOptionsSupported;
@property (nonatomic) bool snapToClosestStopSupported;
@property (nonatomic) bool supportsGuidanceEvents;
@property (nonatomic) bool supportsGuidanceEventsInlineShields;
@property (nonatomic) bool supportsLongShieldStrings;
@property (nonatomic) int transitMarketSupport;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *userCurrentTimezone;

+ (Class)displayLanguagesType;

- (void).cxx_destruct;
- (int)StringAsMaxManeuverTypeSupported:(id)arg1;
- (int)StringAsTransitMarketSupport:(id)arg1;
- (id)abAssignInfo;
- (void)addDisplayLanguages:(id)arg1;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (void)clearDisplayLanguages;
- (bool)clusteredTransitRoutesSupported;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCountryCode;
- (id)dictionaryRepresentation;
- (id)displayLanguages;
- (id)displayLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (id)displayRegion;
- (id)formattedStringClientCapabilities;
- (id)hardwareModel;
- (bool)hasAbAssignInfo;
- (bool)hasAppMajorVersion;
- (bool)hasAppMinorVersion;
- (bool)hasClusteredTransitRoutesSupported;
- (bool)hasDeviceCountryCode;
- (bool)hasDisplayRegion;
- (bool)hasFormattedStringClientCapabilities;
- (bool)hasHardwareModel;
- (bool)hasIncludeCrossLanguagePhonetics;
- (bool)hasInternalInstall;
- (bool)hasInternalTool;
- (bool)hasMaxFormatterSupported;
- (bool)hasMaxManeuverTypeSupported;
- (bool)hasMaxRouteIncidentSupported;
- (bool)hasMaxTrafficSpeedSupported;
- (bool)hasRequestTime;
- (bool)hasRouteOptionsSupported;
- (bool)hasSnapToClosestStopSupported;
- (bool)hasSupportsGuidanceEvents;
- (bool)hasSupportsGuidanceEventsInlineShields;
- (bool)hasSupportsLongShieldStrings;
- (bool)hasTransitMarketSupport;
- (bool)hasUserCurrentTimezone;
- (unsigned long long)hash;
- (bool)includeCrossLanguagePhonetics;
- (bool)internalInstall;
- (bool)internalTool;
- (bool)isEqual:(id)arg1;
- (int)maxFormatterSupported;
- (int)maxManeuverTypeSupported;
- (id)maxManeuverTypeSupportedAsString:(int)arg1;
- (int)maxRouteIncidentSupported;
- (unsigned int)maxTrafficSpeedSupported;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestTime;
- (bool)routeOptionsSupported;
- (void)setAbAssignInfo:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setClusteredTransitRoutesSupported:(bool)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setFormattedStringClientCapabilities:(id)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setHasClusteredTransitRoutesSupported:(bool)arg1;
- (void)setHasIncludeCrossLanguagePhonetics:(bool)arg1;
- (void)setHasInternalInstall:(bool)arg1;
- (void)setHasInternalTool:(bool)arg1;
- (void)setHasMaxFormatterSupported:(bool)arg1;
- (void)setHasMaxManeuverTypeSupported:(bool)arg1;
- (void)setHasMaxRouteIncidentSupported:(bool)arg1;
- (void)setHasMaxTrafficSpeedSupported:(bool)arg1;
- (void)setHasRouteOptionsSupported:(bool)arg1;
- (void)setHasSnapToClosestStopSupported:(bool)arg1;
- (void)setHasSupportsGuidanceEvents:(bool)arg1;
- (void)setHasSupportsGuidanceEventsInlineShields:(bool)arg1;
- (void)setHasSupportsLongShieldStrings:(bool)arg1;
- (void)setHasTransitMarketSupport:(bool)arg1;
- (void)setIncludeCrossLanguagePhonetics:(bool)arg1;
- (void)setInternalInstall:(bool)arg1;
- (void)setInternalTool:(bool)arg1;
- (void)setMaxFormatterSupported:(int)arg1;
- (void)setMaxManeuverTypeSupported:(int)arg1;
- (void)setMaxRouteIncidentSupported:(int)arg1;
- (void)setMaxTrafficSpeedSupported:(unsigned int)arg1;
- (void)setRequestTime:(id)arg1;
- (void)setRouteOptionsSupported:(bool)arg1;
- (void)setSnapToClosestStopSupported:(bool)arg1;
- (void)setSupportsGuidanceEvents:(bool)arg1;
- (void)setSupportsGuidanceEventsInlineShields:(bool)arg1;
- (void)setSupportsLongShieldStrings:(bool)arg1;
- (void)setTransitMarketSupport:(int)arg1;
- (void)setUserCurrentTimezone:(id)arg1;
- (bool)snapToClosestStopSupported;
- (bool)supportsGuidanceEvents;
- (bool)supportsGuidanceEventsInlineShields;
- (bool)supportsLongShieldStrings;
- (int)transitMarketSupport;
- (id)transitMarketSupportAsString:(int)arg1;
- (id)unknownFields;
- (id)userCurrentTimezone;
- (void)writeTo:(id)arg1;

@end
