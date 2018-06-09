/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACHapticIntensityMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int intensity : 1; 
    }  _has;
    float  _intensity;
}

@property (nonatomic) bool hasIntensity;
@property (nonatomic) float intensity;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntensity;
- (unsigned long long)hash;
- (float)intensity;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIntensity:(bool)arg1;
- (void)setIntensity:(float)arg1;
- (void)writeTo:(id)arg1;

@end
