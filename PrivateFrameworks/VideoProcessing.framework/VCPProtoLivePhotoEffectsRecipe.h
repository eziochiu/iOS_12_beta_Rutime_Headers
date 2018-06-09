/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoLivePhotoEffectsRecipe : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    VCPProtoLivePhotoVariationParams * _autoloop;
    VCPProtoLivePhotoVariationParams * _bounce;
    int  _cropRectHeight;
    int  _cropRectWidth;
    int  _cropRectX;
    int  _cropRectY;
    long long  _epoch;
    int  _flags;
    NSMutableArray * _frameInstructions;
    struct { 
        unsigned int epoch : 1; 
        unsigned int flags : 1; 
    }  _has;
    VCPProtoLivePhotoVariationParams * _longexposure;
    int  _minVersion;
    long long  _outputFrameDurValue;
    VCPProtoLivePhotoVariationParams * _stabilize;
    int  _stabilizeResult;
    int  _timeScale;
    int  _version;
}

@property (nonatomic, retain) VCPProtoLivePhotoVariationParams *autoloop;
@property (nonatomic, retain) VCPProtoLivePhotoVariationParams *bounce;
@property (nonatomic) int cropRectHeight;
@property (nonatomic) int cropRectWidth;
@property (nonatomic) int cropRectX;
@property (nonatomic) int cropRectY;
@property (nonatomic) long long epoch;
@property (nonatomic) int flags;
@property (nonatomic, retain) NSMutableArray *frameInstructions;
@property (nonatomic) bool hasEpoch;
@property (nonatomic) bool hasFlags;
@property (nonatomic, retain) VCPProtoLivePhotoVariationParams *longexposure;
@property (nonatomic) int minVersion;
@property (nonatomic) long long outputFrameDurValue;
@property (nonatomic, retain) VCPProtoLivePhotoVariationParams *stabilize;
@property (nonatomic) int stabilizeResult;
@property (nonatomic) int timeScale;
@property (nonatomic) int version;

+ (Class)frameInstructionsType;
+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addFrameInstructions:(id)arg1;
- (id)autoloop;
- (id)bounce;
- (void)clearFrameInstructions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)cropRectHeight;
- (int)cropRectWidth;
- (int)cropRectX;
- (int)cropRectY;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)epoch;
- (id)exportToLegacyDictionary;
- (id)exportToLegacyDictionaryFromFrameInstruction:(id)arg1 withTimeParam:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)exportToLegacyDictionaryFromParam:(id)arg1 withLoopFlavor:(id)arg2;
- (int)flags;
- (id)frameInstructions;
- (id)frameInstructionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)frameInstructionsCount;
- (bool)hasEpoch;
- (bool)hasFlags;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)longexposure;
- (void)mergeFrom:(id)arg1;
- (int)minVersion;
- (long long)outputFrameDurValue;
- (bool)readFrom:(id)arg1;
- (void)setAutoloop:(id)arg1;
- (void)setBounce:(id)arg1;
- (void)setCropRectHeight:(int)arg1;
- (void)setCropRectWidth:(int)arg1;
- (void)setCropRectX:(int)arg1;
- (void)setCropRectY:(int)arg1;
- (void)setEpoch:(long long)arg1;
- (void)setFlags:(int)arg1;
- (void)setFrameInstructions:(id)arg1;
- (void)setHasEpoch:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setLongexposure:(id)arg1;
- (void)setMinVersion:(int)arg1;
- (void)setOutputFrameDurValue:(long long)arg1;
- (void)setStabilize:(id)arg1;
- (void)setStabilizeResult:(int)arg1;
- (void)setTimeScale:(int)arg1;
- (void)setVersion:(int)arg1;
- (id)stabilize;
- (int)stabilizeResult;
- (int)timeScale;
- (int)version;
- (void)writeTo:(id)arg1;

@end
