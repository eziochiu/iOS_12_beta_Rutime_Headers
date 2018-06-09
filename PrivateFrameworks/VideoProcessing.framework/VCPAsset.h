/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPAsset : NSObject

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDictionary *exif;
@property (nonatomic, readonly) float exposureTimeSeconds;
@property (nonatomic, readonly) VCPFingerprint *fingerprint;
@property (nonatomic, readonly) bool hadFlash;
@property (nonatomic, readonly) bool isHDR;
@property (nonatomic, readonly) bool isImage;
@property (nonatomic, readonly) bool isLivePhoto;
@property (nonatomic, readonly) bool isMovie;
@property (nonatomic, readonly) bool isPano;
@property (nonatomic, readonly) bool isSDOF;
@property (nonatomic, readonly) bool isScreenshot;
@property (nonatomic, readonly) bool isSlowmo;
@property (nonatomic, readonly) bool isTimelapse;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSURL *mainFileURL;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) float photoOffsetSeconds;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) float slowmoRate;

+ (void)unimplementedExceptionForMethodName:(id)arg1;

- (double)duration;
- (id)exif;
- (float)exposureTimeSeconds;
- (id)fingerprint;
- (bool)hadFlash;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1;
- (bool)isHDR;
- (bool)isImage;
- (bool)isLivePhoto;
- (bool)isMovie;
- (bool)isPano;
- (bool)isSDOF;
- (bool)isScreenshot;
- (bool)isSlowmo;
- (bool)isTimelapse;
- (id)localIdentifier;
- (id)mainFileURL;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)modificationDate;
- (id)movie;
- (id)originalMovie;
- (float)photoOffsetSeconds;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (float)slowmoRate;

@end
