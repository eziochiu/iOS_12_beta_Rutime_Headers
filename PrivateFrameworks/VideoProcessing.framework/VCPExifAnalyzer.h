/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPExifAnalyzer : NSObject {
    NSDictionary * _properties;
    unsigned long long  _requestedAnalyses;
    NSMutableDictionary * _results;
}

- (void).cxx_destruct;
- (int)addFaceResults:(id)arg1 flags:(unsigned long long*)arg2;
- (int)analyzeAsset:(unsigned long long*)arg1 results:(id*)arg2;
- (id)initWithProperties:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformUprightAboutTopLeft:(unsigned int)arg1;

@end
