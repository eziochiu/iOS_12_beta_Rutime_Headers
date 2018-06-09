/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraStreamConfigure : PBCodable <NSCopying> {
    int  _audioCodec;
    int  _cryptoSuite;
    unsigned int  _framerate;
    struct { 
        unsigned int audioCodec : 1; 
        unsigned int cryptoSuite : 1; 
        unsigned int framerate : 1; 
        unsigned int resolution : 1; 
        unsigned int sampleRate : 1; 
    }  _has;
    int  _resolution;
    int  _sampleRate;
}

@property (nonatomic) int audioCodec;
@property (nonatomic) int cryptoSuite;
@property (nonatomic) unsigned int framerate;
@property (nonatomic) bool hasAudioCodec;
@property (nonatomic) bool hasCryptoSuite;
@property (nonatomic) bool hasFramerate;
@property (nonatomic) bool hasResolution;
@property (nonatomic) bool hasSampleRate;
@property (nonatomic) int resolution;
@property (nonatomic) int sampleRate;

- (int)StringAsAudioCodec:(id)arg1;
- (int)StringAsCryptoSuite:(id)arg1;
- (int)StringAsResolution:(id)arg1;
- (int)StringAsSampleRate:(id)arg1;
- (int)audioCodec;
- (id)audioCodecAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)cryptoSuite;
- (id)cryptoSuiteAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)framerate;
- (bool)hasAudioCodec;
- (bool)hasCryptoSuite;
- (bool)hasFramerate;
- (bool)hasResolution;
- (bool)hasSampleRate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resolution;
- (id)resolutionAsString:(int)arg1;
- (int)sampleRate;
- (id)sampleRateAsString:(int)arg1;
- (void)setAudioCodec:(int)arg1;
- (void)setCryptoSuite:(int)arg1;
- (void)setFramerate:(unsigned int)arg1;
- (void)setHasAudioCodec:(bool)arg1;
- (void)setHasCryptoSuite:(bool)arg1;
- (void)setHasFramerate:(bool)arg1;
- (void)setHasResolution:(bool)arg1;
- (void)setHasSampleRate:(bool)arg1;
- (void)setResolution:(int)arg1;
- (void)setSampleRate:(int)arg1;
- (void)writeTo:(id)arg1;

@end
