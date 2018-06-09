/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMessageLink : PBCodable <NSCopying> {
    struct { 
        unsigned int responseTime : 1; 
        unsigned int isVerified : 1; 
    }  _has;
    NSMutableArray * _hoursOfOperations;
    bool  _isVerified;
    NSString * _messageId;
    NSString * _messageUrl;
    NSString * _navBackgroundColor;
    NSString * _navTintColor;
    int  _responseTime;
    GEOTimezone * _timezone;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsVerified;
@property (nonatomic, readonly) bool hasMessageId;
@property (nonatomic, readonly) bool hasMessageUrl;
@property (nonatomic, readonly) bool hasNavBackgroundColor;
@property (nonatomic, readonly) bool hasNavTintColor;
@property (nonatomic) bool hasResponseTime;
@property (nonatomic, readonly) bool hasTimezone;
@property (nonatomic, retain) NSMutableArray *hoursOfOperations;
@property (nonatomic) bool isVerified;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic, retain) NSString *messageUrl;
@property (nonatomic, retain) NSString *navBackgroundColor;
@property (nonatomic, retain) NSString *navTintColor;
@property (nonatomic) int responseTime;
@property (nonatomic, retain) GEOTimezone *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)hoursOfOperationType;
+ (id)messageLinkForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsResponseTime:(id)arg1;
- (void)addHoursOfOperation:(id)arg1;
- (void)clearHoursOfOperations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsVerified;
- (bool)hasMessageId;
- (bool)hasMessageUrl;
- (bool)hasNavBackgroundColor;
- (bool)hasNavTintColor;
- (bool)hasResponseTime;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (id)hoursOfOperationAtIndex:(unsigned long long)arg1;
- (id)hoursOfOperations;
- (unsigned long long)hoursOfOperationsCount;
- (bool)isEqual:(id)arg1;
- (bool)isVerified;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (id)messageUrl;
- (id)navBackgroundColor;
- (id)navTintColor;
- (bool)readFrom:(id)arg1;
- (int)responseTime;
- (id)responseTimeAsString:(int)arg1;
- (void)setHasIsVerified:(bool)arg1;
- (void)setHasResponseTime:(bool)arg1;
- (void)setHoursOfOperations:(id)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageUrl:(id)arg1;
- (void)setNavBackgroundColor:(id)arg1;
- (void)setNavTintColor:(id)arg1;
- (void)setResponseTime:(int)arg1;
- (void)setTimezone:(id)arg1;
- (id)timezone;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
