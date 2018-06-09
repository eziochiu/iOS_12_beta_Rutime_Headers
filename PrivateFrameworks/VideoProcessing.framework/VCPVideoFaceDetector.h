/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoFaceDetector : VCPVideoAnalyzer {
    NSMutableDictionary * _activeFaces;
    int  _angle;
    NSDictionary * _results;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastProcess;
}

+ (id)faceDetectorWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3 tracking:(bool)arg4 cancel:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)faceRanges;
- (id)results;

@end
