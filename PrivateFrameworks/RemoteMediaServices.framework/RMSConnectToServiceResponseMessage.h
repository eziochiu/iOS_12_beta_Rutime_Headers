/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSConnectToServiceResponseMessage : PBCodable <NSCopying> {
    RMSControlInterfaceMessage * _controlInterface;
    struct { 
        unsigned int responseCode : 1; 
        unsigned int responseData : 1; 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    int  _responseCode;
    int  _responseData;
    int  _sessionIdentifier;
}

@property (nonatomic, retain) RMSControlInterfaceMessage *controlInterface;
@property (nonatomic, readonly) bool hasControlInterface;
@property (nonatomic) bool hasResponseCode;
@property (nonatomic) bool hasResponseData;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) int responseCode;
@property (nonatomic) int responseData;
@property (nonatomic) int sessionIdentifier;

- (void).cxx_destruct;
- (id)controlInterface;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasControlInterface;
- (bool)hasResponseCode;
- (bool)hasResponseData;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)responseCode;
- (int)responseData;
- (int)sessionIdentifier;
- (void)setControlInterface:(id)arg1;
- (void)setHasResponseCode:(bool)arg1;
- (void)setHasResponseData:(bool)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setResponseCode:(int)arg1;
- (void)setResponseData:(int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
