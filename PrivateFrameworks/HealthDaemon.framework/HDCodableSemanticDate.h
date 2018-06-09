/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableSemanticDate : PBCodable <NSCopying> {
    double  _date;
    struct { 
        unsigned int date : 1; 
    }  _has;
    NSString * _keyPath;
}

@property (nonatomic) double date;
@property (nonatomic) bool hasDate;
@property (nonatomic, readonly) bool hasKeyPath;
@property (nonatomic, retain) NSString *keyPath;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDate;
- (bool)hasKeyPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setKeyPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
