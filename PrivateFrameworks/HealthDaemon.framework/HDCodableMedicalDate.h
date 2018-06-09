/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMedicalDate : PBCodable <NSCopying> {
    long long  _form;
    struct { 
        unsigned int form : 1; 
        unsigned int underlyingDate : 1; 
    }  _has;
    NSString * _originalTimeZoneString;
    double  _underlyingDate;
}

@property (nonatomic) long long form;
@property (nonatomic) bool hasForm;
@property (nonatomic, readonly) bool hasOriginalTimeZoneString;
@property (nonatomic) bool hasUnderlyingDate;
@property (nonatomic, retain) NSString *originalTimeZoneString;
@property (nonatomic) double underlyingDate;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)form;
- (bool)hasForm;
- (bool)hasOriginalTimeZoneString;
- (bool)hasUnderlyingDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalTimeZoneString;
- (bool)readFrom:(id)arg1;
- (void)setForm:(long long)arg1;
- (void)setHasForm:(bool)arg1;
- (void)setHasUnderlyingDate:(bool)arg1;
- (void)setOriginalTimeZoneString:(id)arg1;
- (void)setUnderlyingDate:(double)arg1;
- (double)underlyingDate;
- (void)writeTo:(id)arg1;

@end
