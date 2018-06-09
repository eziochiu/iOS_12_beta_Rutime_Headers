/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCDProtoUserInfoTransfer : PBCodable <NSCopying> {
    NSData * _clientData;
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSString * _transferIdentifier;
    unsigned int  _version;
}

@property (nonatomic, retain) NSData *clientData;
@property (nonatomic, readonly) bool hasClientData;
@property (nonatomic, readonly) bool hasTransferIdentifier;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *transferIdentifier;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (id)clientData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientData;
- (bool)hasTransferIdentifier;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientData:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setTransferIdentifier:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)transferIdentifier;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
