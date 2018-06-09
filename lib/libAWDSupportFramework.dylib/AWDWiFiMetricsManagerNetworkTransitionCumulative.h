/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerNetworkTransitionCumulative : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _channelScanCounts;
    unsigned int  _colocatedNetworksFoundCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int colocatedNetworksFoundCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) unsigned int*channelScanCounts;
@property (nonatomic, readonly) unsigned long long channelScanCountsCount;
@property (nonatomic) unsigned int colocatedNetworksFoundCount;
@property (nonatomic) bool hasColocatedNetworksFoundCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)addChannelScanCount:(unsigned int)arg1;
- (unsigned int)channelScanCountAtIndex:(unsigned long long)arg1;
- (unsigned int*)channelScanCounts;
- (unsigned long long)channelScanCountsCount;
- (void)clearChannelScanCounts;
- (unsigned int)colocatedNetworksFoundCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasColocatedNetworksFoundCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannelScanCounts:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setColocatedNetworksFoundCount:(unsigned int)arg1;
- (void)setHasColocatedNetworksFoundCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
