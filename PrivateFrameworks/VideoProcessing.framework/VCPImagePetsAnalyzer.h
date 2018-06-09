/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer {
    int  _maxNumRegions;
}

- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (id)initWithMaxNumRegions:(int)arg1;

@end
