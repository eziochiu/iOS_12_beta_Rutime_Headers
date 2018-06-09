/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReader : NSObject {
    AVAssetReaderInternal * _priv;
}

@property (nonatomic, readonly, retain) AVAsset *asset;
@property (readonly) NSError *error;
@property (getter=_figAssetReader, nonatomic, readonly) struct OpaqueFigAssetReader { }*figAssetReader;
@property (nonatomic, readonly) NSArray *outputs;
@property (getter=_readSingleSample, setter=_setReadSingleSample:, nonatomic) bool readSingleSample;
@property (readonly) long long status;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (id)_errorForOSStatus:(int)arg1;
+ (id)assetReaderWithAsset:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (bool)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2;
- (void)_failWithError:(id)arg1;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_handleServerDiedNotification;
- (void)_outputDidFinish:(id)arg1;
- (bool)_readSingleSample;
- (void)_setReadSingleSample:(bool)arg1;
- (void)_tearDownFigAssetReader;
- (void)_transitionToStatus:(long long)arg1 failureError:(id)arg2;
- (void)addOutput:(id)arg1;
- (id)asset;
- (bool)canAddOutput:(id)arg1;
- (void)cancelReading;
- (void)dealloc;
- (id)description;
- (id)error;
- (void)finalize;
- (id)init;
- (id)initWithAsset:(id)arg1 error:(id*)arg2;
- (id)outputs;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)startReading;
- (long long)status;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
