/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPhotoAnalyzer : NSObject {
    NSMutableDictionary * _analysis;
    VCPAsset * _asset;
    NSData * _featureData;
    unsigned long long  _irisAnalyses;
    unsigned long long  _phFaceFlags;
    NSDictionary * _phFaceResults;
    unsigned long long  _requestedAnalyses;
    NSMutableDictionary * _results;
    long long  _status;
}

@property (readonly) long long status;

+ (id)analyzerWithTypes:(unsigned long long)arg1 forAsset:(id)arg2;
+ (bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (id)resourceForAsset:(id)arg1 withResources:(id)arg2;

- (void).cxx_destruct;
- (id)analyzeAsset:(id /* block */)arg1;
- (int)analyzeImage:(unsigned long long*)arg1 performedAnalyses:(unsigned long long*)arg2 movingObjectResults:(id)arg3 cancel:(id /* block */)arg4;
- (int)downscaleImage:(struct __CVBuffer { }*)arg1 scaledImage:(struct __CVBuffer {}**)arg2 majorDimension:(int)arg3;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
- (id)initWithTypes:(unsigned long long)arg1 forAsset:(id)arg2;
- (long long)status;
- (void)updateDegradedFlagForMajorDimension:(unsigned long long)arg1;

@end
