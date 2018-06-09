/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWPBHostEndpoint : PBCodable <NSCopying> {
    NSString * _hostname;
    NSString * _port;
}

@property (nonatomic, readonly) bool hasHostname;
@property (nonatomic, readonly) bool hasPort;
@property (nonatomic, retain) NSString *hostname;
@property (nonatomic, retain) NSString *port;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHostname;
- (bool)hasPort;
- (unsigned long long)hash;
- (id)hostname;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)port;
- (bool)readFrom:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setPort:(id)arg1;
- (void)writeTo:(id)arg1;

@end
