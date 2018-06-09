/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputConfigurationState : NSObject {
    short  _alternateGroupID;
    long long  _chunkAlignment;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _chunkDuration;
    long long  _chunkSize;
    bool  _expectsMediaDataInRealTime;
    NSString * _extendedLanguageTag;
    NSString * _languageCode;
    long long  _layer;
    bool  _marksOutputTrackAsEnabled;
    bool  _maximizePowerEfficiency;
    NSString * _mediaDataLocation;
    int  _mediaTimeScale;
    NSString * _mediaType;
    NSArray * _metadataItems;
    struct CGSize { 
        double width; 
        double height; 
    }  _naturalSize;
    AVOutputSettings * _outputSettings;
    bool  _performsMultiPassEncodingIfSupported;
    float  _preferredVolume;
    short  _provisionalAlternateGroupID;
    NSURL * _sampleReferenceBaseURL;
    struct opaqueCMFormatDescription { } * _sourceFormatHint;
    NSDictionary * _sourcePixelBufferAttributes;
    int  _trackID;
    NSDictionary * _trackReferences;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) short alternateGroupID;
@property (nonatomic) bool expectsMediaDataInRealTime;
@property (nonatomic, copy) NSString *extendedLanguageTag;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) long long layer;
@property (nonatomic) bool marksOutputTrackAsEnabled;
@property (nonatomic) bool maximizePowerEfficiency;
@property (nonatomic, copy) NSString *mediaDataLocation;
@property (nonatomic) int mediaTimeScale;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSArray *metadataItems;
@property (nonatomic) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, copy) AVOutputSettings *outputSettings;
@property (nonatomic) bool performsMultiPassEncodingIfSupported;
@property (nonatomic) long long preferredMediaChunkAlignment;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredMediaChunkDuration;
@property (nonatomic) long long preferredMediaChunkSize;
@property (nonatomic) float preferredVolume;
@property (nonatomic) short provisionalAlternateGroupID;
@property (nonatomic, copy) NSURL *sampleReferenceBaseURL;
@property (nonatomic, retain) struct opaqueCMFormatDescription { }*sourceFormatHint;
@property (nonatomic, copy) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic) int trackID;
@property (nonatomic, copy) NSDictionary *trackReferences;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (short)alternateGroupID;
- (void)dealloc;
- (bool)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (id)languageCode;
- (long long)layer;
- (bool)marksOutputTrackAsEnabled;
- (bool)maximizePowerEfficiency;
- (id)mediaDataLocation;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadataItems;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)outputSettings;
- (bool)performsMultiPassEncodingIfSupported;
- (long long)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkSize;
- (float)preferredVolume;
- (short)provisionalAlternateGroupID;
- (id)sampleReferenceBaseURL;
- (void)setAlternateGroupID:(short)arg1;
- (void)setExpectsMediaDataInRealTime:(bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (void)setMaximizePowerEfficiency:(bool)arg1;
- (void)setMediaDataLocation:(id)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMetadataItems:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(bool)arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setProvisionalAlternateGroupID:(short)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setSourceFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTrackID:(int)arg1;
- (void)setTrackReferences:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)sourcePixelBufferAttributes;
- (int)trackID;
- (id)trackReferences;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
