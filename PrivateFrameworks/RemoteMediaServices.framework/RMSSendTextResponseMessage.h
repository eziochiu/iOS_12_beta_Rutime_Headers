/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSSendTextResponseMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int responseCode : 1; 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    int  _responseCode;
    int  _sessionIdentifier;
}

@property (nonatomic) bool hasResponseCode;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) int responseCode;
@property (nonatomic) int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResponseCode;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)responseCode;
- (int)sessionIdentifier;
- (void)setHasResponseCode:(bool)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setResponseCode:(int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
