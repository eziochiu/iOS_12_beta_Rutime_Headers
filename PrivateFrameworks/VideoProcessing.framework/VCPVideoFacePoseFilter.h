/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoFacePoseFilter : NSObject {
    struct Matrix<float, 12, 12> { 
        float m_data[144]; 
    }  _previousCovar;
    struct Matrix<float, 12, 1> { 
        float m_data[12]; 
    }  _previousState;
    bool  _previousStateIsValid;
}

- (id).cxx_construct;
- (int)eulerAnglesToRotation:(float)arg1 R:(float)arg2;
- (int)filteringPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1;
- (int)kalmanFiltering:(float)arg1 T:(float)arg2;
- (void)reset;
- (int)rotationToEulerAngles:(float)arg1 angles:(float)arg2;

@end
