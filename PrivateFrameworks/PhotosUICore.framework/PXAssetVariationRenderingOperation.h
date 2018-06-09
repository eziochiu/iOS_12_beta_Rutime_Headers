/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetVariationRenderingOperation : NSOperation {
    PLPhotoEditModel * _adjustedEditModel;
    NSDictionary * _analysisResult;
    PLPhotoEditModel * _baseEditModel;
    NSNumber * _duration;
    NSError * _error;
    NSURL * _inputImageURL;
    NSURL * _inputVideoURL;
    AVAsset * _outputAVAsset;
    UIImage * _outputImage;
    NSURL * _outputImageURL;
    AVVideoComposition * _outputVideoComposition;
    NSURL * _outputVideoURL;
    NSProgress * _progress;
    bool  _renderAllResources;
    id /* block */  _startHandler;
    bool  _succeeded;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    long long  _variationType;
}

@property (nonatomic, readonly, copy) PLPhotoEditModel *adjustedEditModel;
@property (nonatomic, readonly, copy) NSDictionary *analysisResult;
@property (nonatomic, readonly, copy) PLPhotoEditModel *baseEditModel;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURL *inputImageURL;
@property (nonatomic, readonly) NSURL *inputVideoURL;
@property (nonatomic, readonly) AVAsset *outputAVAsset;
@property (nonatomic, readonly) UIImage *outputImage;
@property (nonatomic, readonly) NSURL *outputImageURL;
@property (nonatomic, readonly) AVVideoComposition *outputVideoComposition;
@property (nonatomic, readonly) NSURL *outputVideoURL;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) bool renderAllResources;
@property (nonatomic, copy) id /* block */ startHandler;
@property (nonatomic, readonly) bool succeeded;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, readonly) long long variationType;

- (void).cxx_destruct;
- (void)_incrementProgressWithStartDate:(id)arg1;
- (void)_timeout;
- (id)adjustedEditModel;
- (id)analysisResult;
- (id)baseEditModel;
- (void)cancel;
- (id)duration;
- (id)error;
- (id)init;
- (id)initWithInputImageURL:(id)arg1 inputVideoURL:(id)arg2 variationType:(long long)arg3 analysisResult:(id)arg4 baseEditModel:(id)arg5 outputImageURL:(id)arg6 outputVideoURL:(id)arg7 targetSize:(struct CGSize { double x1; double x2; })arg8 renderAllResources:(bool)arg9;
- (id)inputImageURL;
- (id)inputVideoURL;
- (void)main;
- (id)outputAVAsset;
- (id)outputImage;
- (id)outputImageURL;
- (id)outputVideoComposition;
- (id)outputVideoURL;
- (id)progress;
- (bool)renderAllResources;
- (void)setStartHandler:(id /* block */)arg1;
- (id /* block */)startHandler;
- (bool)succeeded;
- (struct CGSize { double x1; double x2; })targetSize;
- (long long)variationType;

@end
