/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoAudioFilePlayerItemSetCurrentTime : PBCodable <NSCopying> {
    double  _currentTime;
    struct { 
        unsigned int currentTime : 1; 
    }  _has;
    NSString * _identifier;
}

@property (nonatomic) double currentTime;
@property (nonatomic) bool hasCurrentTime;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTime;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setHasCurrentTime:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (id)sockPuppetMessage;
- (void)writeTo:(id)arg1;

@end
