/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {
    NSString * _countryCode;
    NSData * _devicePushToken;
    NSString * _hwMachine;
    NSString * _inputLanguage;
    NSString * _osRelease;
    NSMutableArray * _requestElements;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
    GEOLocation * _userLocation;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSData *devicePushToken;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasDevicePushToken;
@property (nonatomic, readonly) bool hasHwMachine;
@property (nonatomic, readonly) bool hasInputLanguage;
@property (nonatomic, readonly) bool hasOsRelease;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, readonly) bool hasUserEmail;
@property (nonatomic, readonly) bool hasUserLocation;
@property (nonatomic, retain) NSString *hwMachine;
@property (nonatomic, retain) NSString *inputLanguage;
@property (nonatomic, retain) NSString *osRelease;
@property (nonatomic, retain) NSMutableArray *requestElements;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;
@property (nonatomic, retain) NSString *userEmail;
@property (nonatomic, retain) GEOLocation *userLocation;

+ (Class)requestElementType;

- (void).cxx_destruct;
- (void)addRequestElement:(id)arg1;
- (void)clearRequestElements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasDevicePushToken;
- (bool)hasHwMachine;
- (bool)hasInputLanguage;
- (bool)hasOsRelease;
- (bool)hasUserCredentials;
- (bool)hasUserEmail;
- (bool)hasUserLocation;
- (unsigned long long)hash;
- (id)hwMachine;
- (id)inputLanguage;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)osRelease;
- (bool)readFrom:(id)arg1;
- (id)requestElementAtIndex:(unsigned long long)arg1;
- (id)requestElements;
- (unsigned long long)requestElementsCount;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setCountryCode:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setHwMachine:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setOsRelease:(id)arg1;
- (void)setRequestElements:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (void)setUserLocation:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
- (id)userLocation;
- (void)writeTo:(id)arg1;

@end
