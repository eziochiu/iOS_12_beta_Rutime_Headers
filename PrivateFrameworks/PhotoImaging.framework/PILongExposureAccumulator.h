/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PILongExposureAccumulator : NSObject {
    NSError * __accumError;
    NSObject<OS_dispatch_queue> * _accumQueue;
    NSObject<OS_dispatch_semaphore> * _accumSemaphore;
    <NUSurfaceStorage> * _averageAccumulationStorage;
    NSObject<OS_dispatch_group> * _doneGroup;
    bool  _finished;
    long long  _frameCount;
    NSDictionary * _imageOptions;
    NSMutableArray * _inputFrames;
    <NUSurfaceStorage> * _maximumAccumulationStorage;
    <NUSurfaceStorage> * _minimumAccumulationStorage;
    struct { 
        long long width; 
        long long height; 
    }  _pixelSize;
    NSObject<OS_dispatch_semaphore> * _readySemaphore;
    <NURenderer> * _renderer;
    NSObject<OS_dispatch_queue> * _stateQueue;
    <NUSurfaceStorage> * _temporaryDestinationStorage;
}

@property (retain) NSError *_accumError;
@property (readonly) bool isReadyForMoreData;

- (void).cxx_destruct;
- (id)_accumError;
- (void)_accumulate:(id)arg1;
- (bool)_accumulate:(id)arg1 error:(out id*)arg2;
- (void)_appendInputFrame:(id)arg1;
- (id)_dynamismMapWithMinImage:(id)arg1 maxImage:(id)arg2 extent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3;
- (bool)_exportOutputImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 toURL:(id)arg4 uti:(id)arg5 error:(out id*)arg6;
- (void)_initializeAccumulation;
- (bool)_initializeAccumulation:(out id*)arg1;
- (bool)_initializeStorage:(id)arg1 image:(id)arg2 error:(out id*)arg3;
- (bool)_isReadyForMoreData;
- (void)_markAsFinished;
- (id)_nextInputFrame;
- (void)_start;
- (bool)accumulate:(id)arg1 error:(out id*)arg2;
- (void)cancel;
- (void)dealloc;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 renderer:(id)arg2;
- (bool)isReadyForMoreData;
- (void)markAsFinished;
- (id)nextInputFrame;
- (void)set_accumError:(id)arg1;
- (bool)start:(out id*)arg1;
- (void)waitUntilDone;
- (id)workingColorSpace;
- (bool)writeLongExposureImage:(id)arg1 UTI:(id)arg2 colorSpace:(id)arg3 error:(out id*)arg4;
- (bool)writeMaskImage:(id)arg1 UTI:(id)arg2 error:(out id*)arg3;

@end
