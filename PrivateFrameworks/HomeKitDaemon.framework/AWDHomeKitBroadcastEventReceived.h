/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitBroadcastEventReceived : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isExpectedGSN : 1; 
    }  _has;
    bool  _isExpectedGSN;
    unsigned long long  _timestamp;
    AWDHomeKitVendorInformation * _vendorDetails;
}

@property (nonatomic) bool hasIsExpectedGSN;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasVendorDetails;
@property (nonatomic) bool isExpectedGSN;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorDetails;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsExpectedGSN;
- (bool)hasTimestamp;
- (bool)hasVendorDetails;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isExpectedGSN;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsExpectedGSN:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsExpectedGSN:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVendorDetails:(id)arg1;
- (unsigned long long)timestamp;
- (id)vendorDetails;
- (void)writeTo:(id)arg1;

@end
