/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableBinarySample : PBCodable <HDDecoding, NSCopying> {
    NSData * _payload;
    HDCodableSample * _sample;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, readonly) bool hasSample;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPayload;
- (bool)hasSample;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)payload;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setPayload:(id)arg1;
- (void)setSample:(id)arg1;
- (void)writeTo:(id)arg1;

@end
