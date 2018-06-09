/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBDate : PBCodable <NSCopying> {
    struct { 
        unsigned int timeIntervalSince1970 : 1; 
    }  _has;
    double  _timeIntervalSince1970;
}

@property (nonatomic) bool hasTimeIntervalSince1970;
@property (nonatomic) double timeIntervalSince1970;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimeIntervalSince1970;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeIntervalSince1970:(bool)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
- (double)timeIntervalSince1970;
- (void)writeTo:(id)arg1;

@end
