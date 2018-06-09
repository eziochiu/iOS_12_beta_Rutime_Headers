/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSWifiAvailabilityDidChangeMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
        unsigned int wifiAvailable : 1; 
    }  _has;
    int  _sessionIdentifier;
    bool  _wifiAvailable;
}

@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) bool hasWifiAvailable;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic) bool wifiAvailable;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionIdentifier;
- (bool)hasWifiAvailable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setHasWifiAvailable:(bool)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)setWifiAvailable:(bool)arg1;
- (bool)wifiAvailable;
- (void)writeTo:(id)arg1;

@end
