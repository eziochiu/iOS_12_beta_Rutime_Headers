/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoDemoWirelessCredentials : PBCodable <NSCopying> {
    NSString * _password;
    NSString * _ssid;
}

@property (nonatomic, readonly) bool hasPassword;
@property (nonatomic, readonly) bool hasSsid;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *ssid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassword;
- (bool)hasSsid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)password;
- (bool)readFrom:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;
- (void)writeTo:(id)arg1;

@end
