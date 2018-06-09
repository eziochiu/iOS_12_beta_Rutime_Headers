/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopAnalysisOperation : NSOperation {
    NSDictionary * _analysisResult;
    NSNumber * _duration;
    NSError * _error;
    NSURL * _inputImageURL;
    NSURL * _inputVideoURL;
    NSProgress * _progress;
    NSDictionary * _recipesByVariationType;
    bool  _succeeded;
}

@property (nonatomic, readonly) NSDictionary *analysisResult;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURL *inputImageURL;
@property (nonatomic, readonly) NSURL *inputVideoURL;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) bool succeeded;

- (void).cxx_destruct;
- (void)_timeout;
- (id)analysisResult;
- (void)cancel;
- (id)duration;
- (id)error;
- (id)init;
- (id)initWithInputImageURL:(id)arg1 inputVideoURL:(id)arg2;
- (id)inputImageURL;
- (id)inputVideoURL;
- (void)main;
- (id)progress;
- (id)recipeForVariationType:(long long)arg1;
- (bool)succeeded;

@end
