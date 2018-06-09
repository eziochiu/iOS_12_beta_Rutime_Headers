/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFSetupAssistantOnBoarding : PBCodable <NSCopying> {
    unsigned long long  _durationPlaceholder;
    unsigned long long  _durationVideo;
    unsigned int  _feature;
    struct { 
        unsigned int durationPlaceholder : 1; 
        unsigned int durationVideo : 1; 
        unsigned int timestamp : 1; 
        unsigned int feature : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long durationPlaceholder;
@property (nonatomic) unsigned long long durationVideo;
@property (nonatomic) unsigned int feature;
@property (nonatomic) bool hasDurationPlaceholder;
@property (nonatomic) bool hasDurationVideo;
@property (nonatomic) bool hasFeature;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durationPlaceholder;
- (unsigned long long)durationVideo;
- (unsigned int)feature;
- (bool)hasDurationPlaceholder;
- (bool)hasDurationVideo;
- (bool)hasFeature;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationPlaceholder:(unsigned long long)arg1;
- (void)setDurationVideo:(unsigned long long)arg1;
- (void)setFeature:(unsigned int)arg1;
- (void)setHasDurationPlaceholder:(bool)arg1;
- (void)setHasDurationVideo:(bool)arg1;
- (void)setHasFeature:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
