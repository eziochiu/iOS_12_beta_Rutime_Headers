/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSPairingSessionDidPairMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    NSString * _pairingGUID;
    NSString * _serviceNetworkName;
    int  _sessionIdentifier;
}

@property (nonatomic, readonly) bool hasPairingGUID;
@property (nonatomic, readonly) bool hasServiceNetworkName;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic, retain) NSString *pairingGUID;
@property (nonatomic, retain) NSString *serviceNetworkName;
@property (nonatomic) int sessionIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPairingGUID;
- (bool)hasServiceNetworkName;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairingGUID;
- (bool)readFrom:(id)arg1;
- (id)serviceNetworkName;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setPairingGUID:(id)arg1;
- (void)setServiceNetworkName:(id)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
