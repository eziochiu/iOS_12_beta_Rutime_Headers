/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable <NSCopying> {
    NSString * _contentHeaderName;
    NSString * _contentHeaderValue;
    NSString * _endpointURLString;
    unsigned long long  _groupingTag;
    struct { 
        unsigned int groupingTag : 1; 
        unsigned int seedTime : 1; 
        unsigned int samplingCeiling : 1; 
        unsigned int samplingFloor : 1; 
    }  _has;
    unsigned int  _samplingCeiling;
    unsigned int  _samplingFloor;
    unsigned long long  _seedTime;
}

@property (nonatomic, retain) NSString *contentHeaderName;
@property (nonatomic, retain) NSString *contentHeaderValue;
@property (nonatomic, retain) NSString *endpointURLString;
@property (nonatomic) unsigned long long groupingTag;
@property (nonatomic, readonly) bool hasContentHeaderName;
@property (nonatomic, readonly) bool hasContentHeaderValue;
@property (nonatomic, readonly) bool hasEndpointURLString;
@property (nonatomic) bool hasGroupingTag;
@property (nonatomic) bool hasSamplingCeiling;
@property (nonatomic) bool hasSamplingFloor;
@property (nonatomic) bool hasSeedTime;
@property (nonatomic) unsigned int samplingCeiling;
@property (nonatomic) unsigned int samplingFloor;
@property (nonatomic) unsigned long long seedTime;

- (id)contentHeaderName;
- (id)contentHeaderValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpointURLString;
- (unsigned long long)groupingTag;
- (bool)hasContentHeaderName;
- (bool)hasContentHeaderValue;
- (bool)hasEndpointURLString;
- (bool)hasGroupingTag;
- (bool)hasSamplingCeiling;
- (bool)hasSamplingFloor;
- (bool)hasSeedTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)samplingCeiling;
- (unsigned int)samplingFloor;
- (unsigned long long)seedTime;
- (void)setContentHeaderName:(id)arg1;
- (void)setContentHeaderValue:(id)arg1;
- (void)setEndpointURLString:(id)arg1;
- (void)setGroupingTag:(unsigned long long)arg1;
- (void)setHasGroupingTag:(bool)arg1;
- (void)setHasSamplingCeiling:(bool)arg1;
- (void)setHasSamplingFloor:(bool)arg1;
- (void)setHasSeedTime:(bool)arg1;
- (void)setSamplingCeiling:(unsigned int)arg1;
- (void)setSamplingFloor:(unsigned int)arg1;
- (void)setSeedTime:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
