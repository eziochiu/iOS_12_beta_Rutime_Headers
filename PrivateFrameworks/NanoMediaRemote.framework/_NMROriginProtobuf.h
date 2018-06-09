/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMROriginProtobuf : PBCodable <NSCopying> {
    NSData * _deviceInfoData;
    NSString * _displayName;
    struct { 
        unsigned int uniqueIdentifier : 1; 
    }  _has;
    int  _uniqueIdentifier;
}

@property (nonatomic, retain) NSData *deviceInfoData;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDeviceInfoData;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasUniqueIdentifier;
@property (nonatomic) int uniqueIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfoData;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDeviceInfoData;
- (bool)hasDisplayName;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInfoData:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasUniqueIdentifier:(bool)arg1;
- (void)setUniqueIdentifier:(int)arg1;
- (int)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
