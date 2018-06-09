/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogFrameworkMetricItem : PBCodable <NSCopying> {
    struct { 
        unsigned int metricItemSize : 1; 
        unsigned int metricItemCount : 1; 
        unsigned int metricItemIdHash : 1; 
        unsigned int metricItemQueueTime : 1; 
        unsigned int metricItemRetryCount : 1; 
        unsigned int metricItemType : 1; 
    }  _has;
    unsigned int  _metricItemCount;
    unsigned int  _metricItemIdHash;
    unsigned int  _metricItemQueueTime;
    unsigned int  _metricItemRetryCount;
    unsigned long long  _metricItemSize;
    int  _metricItemType;
}

@property (nonatomic) bool hasMetricItemCount;
@property (nonatomic) bool hasMetricItemIdHash;
@property (nonatomic) bool hasMetricItemQueueTime;
@property (nonatomic) bool hasMetricItemRetryCount;
@property (nonatomic) bool hasMetricItemSize;
@property (nonatomic) bool hasMetricItemType;
@property (nonatomic) unsigned int metricItemCount;
@property (nonatomic) unsigned int metricItemIdHash;
@property (nonatomic) unsigned int metricItemQueueTime;
@property (nonatomic) unsigned int metricItemRetryCount;
@property (nonatomic) unsigned long long metricItemSize;
@property (nonatomic) int metricItemType;

- (int)StringAsMetricItemType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetricItemCount;
- (bool)hasMetricItemIdHash;
- (bool)hasMetricItemQueueTime;
- (bool)hasMetricItemRetryCount;
- (bool)hasMetricItemSize;
- (bool)hasMetricItemType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)metricItemCount;
- (unsigned int)metricItemIdHash;
- (unsigned int)metricItemQueueTime;
- (unsigned int)metricItemRetryCount;
- (unsigned long long)metricItemSize;
- (int)metricItemType;
- (id)metricItemTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMetricItemCount:(bool)arg1;
- (void)setHasMetricItemIdHash:(bool)arg1;
- (void)setHasMetricItemQueueTime:(bool)arg1;
- (void)setHasMetricItemRetryCount:(bool)arg1;
- (void)setHasMetricItemSize:(bool)arg1;
- (void)setHasMetricItemType:(bool)arg1;
- (void)setMetricItemCount:(unsigned int)arg1;
- (void)setMetricItemIdHash:(unsigned int)arg1;
- (void)setMetricItemQueueTime:(unsigned int)arg1;
- (void)setMetricItemRetryCount:(unsigned int)arg1;
- (void)setMetricItemSize:(unsigned long long)arg1;
- (void)setMetricItemType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
