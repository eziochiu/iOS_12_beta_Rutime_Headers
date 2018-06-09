/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTelemetricEntity : PBCodable <NSCopying> {
    NSString * _eventDetail;
    int  _eventKey;
    unsigned long long  _eventValue;
    struct { 
        unsigned int eventValue : 1; 
        unsigned int eventKey : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *eventDetail;
@property (nonatomic) int eventKey;
@property (nonatomic) unsigned long long eventValue;
@property (nonatomic, readonly) bool hasEventDetail;
@property (nonatomic) bool hasEventKey;
@property (nonatomic) bool hasEventValue;

- (void).cxx_destruct;
- (int)StringAsEventKey:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventDetail;
- (int)eventKey;
- (id)eventKeyAsString:(int)arg1;
- (unsigned long long)eventValue;
- (bool)hasEventDetail;
- (bool)hasEventKey;
- (bool)hasEventValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventDetail:(id)arg1;
- (void)setEventKey:(int)arg1;
- (void)setEventValue:(unsigned long long)arg1;
- (void)setHasEventKey:(bool)arg1;
- (void)setHasEventValue:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
