/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventLogFramework : PBCodable <NSCopying> {
    struct { 
        unsigned int messageSize : 1; 
        unsigned int messageCount : 1; 
        unsigned int messageType : 1; 
        unsigned int metricState : 1; 
        unsigned int metricType : 1; 
        unsigned int purgeReason : 1; 
    }  _has;
    NSMutableArray * _logFrameworkItems;
    unsigned int  _messageCount;
    unsigned long long  _messageSize;
    int  _messageType;
    int  _metricState;
    int  _metricType;
    int  _purgeReason;
}

@property (nonatomic) bool hasMessageCount;
@property (nonatomic) bool hasMessageSize;
@property (nonatomic) bool hasMessageType;
@property (nonatomic) bool hasMetricState;
@property (nonatomic) bool hasMetricType;
@property (nonatomic) bool hasPurgeReason;
@property (nonatomic, retain) NSMutableArray *logFrameworkItems;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) int messageType;
@property (nonatomic) int metricState;
@property (nonatomic) int metricType;
@property (nonatomic) int purgeReason;

+ (Class)logFrameworkItemType;

- (void).cxx_destruct;
- (int)StringAsMessageType:(id)arg1;
- (int)StringAsMetricState:(id)arg1;
- (int)StringAsMetricType:(id)arg1;
- (int)StringAsPurgeReason:(id)arg1;
- (void)addLogFrameworkItem:(id)arg1;
- (void)clearLogFrameworkItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageCount;
- (bool)hasMessageSize;
- (bool)hasMessageType;
- (bool)hasMetricState;
- (bool)hasMetricType;
- (bool)hasPurgeReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logFrameworkItemAtIndex:(unsigned long long)arg1;
- (id)logFrameworkItems;
- (unsigned long long)logFrameworkItemsCount;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageCount;
- (unsigned long long)messageSize;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (int)metricState;
- (id)metricStateAsString:(int)arg1;
- (int)metricType;
- (id)metricTypeAsString:(int)arg1;
- (int)purgeReason;
- (id)purgeReasonAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageCount:(bool)arg1;
- (void)setHasMessageSize:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setHasMetricState:(bool)arg1;
- (void)setHasMetricType:(bool)arg1;
- (void)setHasPurgeReason:(bool)arg1;
- (void)setLogFrameworkItems:(id)arg1;
- (void)setMessageCount:(unsigned int)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setMessageType:(int)arg1;
- (void)setMetricState:(int)arg1;
- (void)setMetricType:(int)arg1;
- (void)setPurgeReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end
