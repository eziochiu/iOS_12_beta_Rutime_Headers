/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying> {
    int  _cellularDataState;
    NSString * _deviceCarrierName;
    NSString * _deviceCountryCode;
    int  _deviceNetworkConnectivity;
    struct { 
        unsigned int cellularDataState : 1; 
        unsigned int deviceNetworkConnectivity : 1; 
    }  _has;
}

@property (nonatomic) int cellularDataState;
@property (nonatomic, retain) NSString *deviceCarrierName;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic) int deviceNetworkConnectivity;
@property (nonatomic) bool hasCellularDataState;
@property (nonatomic, readonly) bool hasDeviceCarrierName;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic) bool hasDeviceNetworkConnectivity;

- (void).cxx_destruct;
- (int)StringAsCellularDataState:(id)arg1;
- (int)StringAsDeviceNetworkConnectivity:(id)arg1;
- (int)cellularDataState;
- (id)cellularDataStateAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCarrierName;
- (id)deviceCountryCode;
- (int)deviceNetworkConnectivity;
- (id)deviceNetworkConnectivityAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasCellularDataState;
- (bool)hasDeviceCarrierName;
- (bool)hasDeviceCountryCode;
- (bool)hasDeviceNetworkConnectivity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCellularDataState:(int)arg1;
- (void)setDeviceCarrierName:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceNetworkConnectivity:(int)arg1;
- (void)setHasCellularDataState:(bool)arg1;
- (void)setHasDeviceNetworkConnectivity:(bool)arg1;
- (void)writeTo:(id)arg1;

@end