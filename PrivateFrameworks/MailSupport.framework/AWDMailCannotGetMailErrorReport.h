/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailCannotGetMailErrorReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int protocol : 1; 
        unsigned int provider : 1; 
    }  _has;
    NSString * _hostname;
    AWDMailError * _mailError;
    int  _protocol;
    int  _provider;
    NSString * _serverInfo;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasHostname;
@property (nonatomic, readonly) bool hasMailError;
@property (nonatomic) bool hasProtocol;
@property (nonatomic) bool hasProvider;
@property (nonatomic, readonly) bool hasServerInfo;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *hostname;
@property (nonatomic, retain) AWDMailError *mailError;
@property (nonatomic) int protocol;
@property (nonatomic) int provider;
@property (nonatomic, retain) NSString *serverInfo;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsProtocol:(id)arg1;
- (int)StringAsProvider:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHostname;
- (bool)hasMailError;
- (bool)hasProtocol;
- (bool)hasProvider;
- (bool)hasServerInfo;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)hostname;
- (bool)isEqual:(id)arg1;
- (id)mailError;
- (void)mergeFrom:(id)arg1;
- (int)protocol;
- (id)protocolAsString:(int)arg1;
- (int)provider;
- (id)providerAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverInfo;
- (void)setHasProtocol:(bool)arg1;
- (void)setHasProvider:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHostname:(id)arg1;
- (void)setMailError:(id)arg1;
- (void)setProtocol:(int)arg1;
- (void)setProvider:(int)arg1;
- (void)setServerInfo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end