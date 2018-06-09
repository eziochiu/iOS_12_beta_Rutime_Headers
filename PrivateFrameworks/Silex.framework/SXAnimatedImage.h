/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAnimatedImage : NSObject <SXAnimatedImageViewCacheDelegate> {
    SXAnimatedImageViewCache * _cache;
    <SXAnimatedImageDelegate> * _delegate;
    double  _duration;
    NSArray * _frames;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct CGImageSource { } * _imageSource;
    long long  _imageType;
    bool  _invalidFile;
    unsigned long long  _loopCount;
    unsigned long long  _numberOfFrames;
    long long  _preloadType;
    double  _scale;
    unsigned long long  _uncompressedByteSizePerFrame;
}

@property (nonatomic, readonly) SXAnimatedImageViewCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXAnimatedImageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) struct CGImageSource { }*imageSource;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) bool invalidFile;
@property (nonatomic, readonly) unsigned long long loopCount;
@property (nonatomic, readonly) unsigned long long numberOfFrames;
@property (nonatomic, readonly) long long preloadType;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long uncompressedByteSizePerFrame;

+ (id)animatedImageWithData:(id)arg1;
+ (id)animatedImageWithData:(id)arg1 scale:(double)arg2;
+ (id)animatedImageWithURL:(id)arg1 scale:(double)arg2 type:(long long)arg3;
+ (id)animatedImageWithURL:(id)arg1 type:(long long)arg2;

- (void).cxx_destruct;
- (void)animatedImageViewCache:(id)arg1 didCacheImageForFrameIndex:(unsigned long long)arg2;
- (id)cache;
- (void)capturePropertiesForType:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (double)duration;
- (id)frameAtIndex:(unsigned long long)arg1;
- (id)frameAtIndex:(unsigned long long)arg1 returnNearestPreloaded:(bool)arg2;
- (id)frames;
- (void)generateFrames;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGImageSource { }*)imageSource;
- (long long)imageType;
- (id)initWithDataProvider:(struct CGDataProvider { }*)arg1 scale:(double)arg2 type:(long long)arg3;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 scale:(double)arg2 type:(long long)arg3;
- (bool)invalidFile;
- (unsigned long long)loopCount;
- (unsigned long long)numberOfFrames;
- (long long)preloadType;
- (double)scale;
- (void)setDelegate:(id)arg1;
- (void)setPreloadType:(long long)arg1 currentFrameIndex:(unsigned long long)arg2;
- (unsigned long long)uncompressedByteSizePerFrame;

@end
