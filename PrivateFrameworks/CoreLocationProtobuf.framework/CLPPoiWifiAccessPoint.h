/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPPoiWifiAccessPoint : PBCodable <NSCopying> {
    double  _age;
    int  _channel;
    struct { 
        unsigned int age : 1; 
        unsigned int scanTimestamp : 1; 
    }  _has;
    NSString * _mac;
    int  _rssi;
    double  _scanTimestamp;
}

@property (nonatomic) double age;
@property (nonatomic) int channel;
@property (nonatomic) bool hasAge;
@property (nonatomic) bool hasScanTimestamp;
@property (nonatomic, retain) NSString *mac;
@property (nonatomic) int rssi;
@property (nonatomic) double scanTimestamp;

- (void).cxx_destruct;
- (double)age;
- (int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAge;
- (bool)hasScanTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mac;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (double)scanTimestamp;
- (void)setAge:(double)arg1;
- (void)setChannel:(int)arg1;
- (void)setHasAge:(bool)arg1;
- (void)setHasScanTimestamp:(bool)arg1;
- (void)setMac:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setScanTimestamp:(double)arg1;
- (void)writeTo:(id)arg1;

@end
