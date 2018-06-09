/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWPBEndpoint : PBCodable <NSCopying> {
    NWPBAddressEndpoint * _address;
    NWPBHostEndpoint * _host;
    NWPBInterface * _interface;
    NWPBServiceEndpoint * _service;
    NSData * _txtRecord;
}

@property (nonatomic, retain) NWPBAddressEndpoint *address;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic, readonly) bool hasHost;
@property (nonatomic, readonly) bool hasInterface;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic, readonly) bool hasTxtRecord;
@property (nonatomic, retain) NWPBHostEndpoint *host;
@property (nonatomic, retain) NWPBInterface *interface;
@property (nonatomic, retain) NWPBServiceEndpoint *service;
@property (nonatomic, retain) NSData *txtRecord;

- (void).cxx_destruct;
- (id)address;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasHost;
- (bool)hasInterface;
- (bool)hasService;
- (bool)hasTxtRecord;
- (unsigned long long)hash;
- (id)host;
- (id)interface;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setAddress:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setService:(id)arg1;
- (void)setTxtRecord:(id)arg1;
- (id)txtRecord;
- (void)writeTo:(id)arg1;

@end
