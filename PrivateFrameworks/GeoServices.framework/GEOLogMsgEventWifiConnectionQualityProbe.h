/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventWifiConnectionQualityProbe : PBCodable <NSCopying> {
    GEOWiFiConnectionQuality * _wifiConnectionQuality;
}

@property (nonatomic, readonly) bool hasWifiConnectionQuality;
@property (nonatomic, retain) GEOWiFiConnectionQuality *wifiConnectionQuality;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWifiConnectionQuality;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWifiConnectionQuality:(id)arg1;
- (id)wifiConnectionQuality;
- (void)writeTo:(id)arg1;

@end
