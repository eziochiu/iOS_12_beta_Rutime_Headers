/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface BurstActionClassifier : NSObject {
    struct __SVMParameters { struct __SVMScaleOffset { float x_1_1_1; float x_1_1_2; } x1[7]; double x2; double x3; int x4; int x5; struct BurstSupportVector {} *x6; struct BurstSupportVector {} *x7; } * _svmParameters;
    bool  hasBeenScaled;
    float  testAverageCameraTravelDistance;
    float  testAverageRegistrationErrorSkewness;
    float  testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    float  testInOutRatio;
    float  testMaxInnerDistance;
    float  testMaxPeakRegistrationError;
    float  testMaxRegistrationErrorIntegral;
    float  testMaxRegistrationErrorSkewness;
    float  testMeanPeakRegistrationError;
    float  testMinRegionOfInterestSize;
    double  testVector;
}

@property struct __SVMParameters { struct __SVMScaleOffset { float x_1_1_1; float x_1_1_2; } x1[7]; double x2; double x3; int x4; int x5; struct BurstSupportVector {} *x6; struct BurstSupportVector {} *x7; }*svmParameters;
@property float testAverageCameraTravelDistance;
@property float testAverageRegistrationErrorSkewness;
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
@property float testInOutRatio;
@property float testMaxInnerDistance;
@property float testMaxPeakRegistrationError;
@property float testMaxRegistrationErrorIntegral;
@property float testMaxRegistrationErrorSkewness;
@property float testMeanPeakRegistrationError;
@property float testMinRegionOfInterestSize;

- (double)computeKernelValueWithSupportVector:(const struct BurstSupportVector { double x1; double x2[7]; }*)arg1;
- (id)init;
- (id)initWithVersion:(int)arg1;
- (bool)isBurstAction;
- (float)predictResult;
- (void)scaleVector;
- (void)setSvmParameters:(struct __SVMParameters { struct __SVMScaleOffset { float x_1_1_1; float x_1_1_2; } x1[7]; double x2; double x3; int x4; int x5; struct BurstSupportVector {} *x6; struct BurstSupportVector {} *x7; }*)arg1;
- (void)setTestAverageCameraTravelDistance:(float)arg1;
- (void)setTestAverageRegistrationErrorSkewness:(float)arg1;
- (void)setTestBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix:(float)arg1;
- (void)setTestInOutRatio:(float)arg1;
- (void)setTestMaxInnerDistance:(float)arg1;
- (void)setTestMaxPeakRegistrationError:(float)arg1;
- (void)setTestMaxRegistrationErrorIntegral:(float)arg1;
- (void)setTestMaxRegistrationErrorSkewness:(float)arg1;
- (void)setTestMeanPeakRegistrationError:(float)arg1;
- (void)setTestMinRegionOfInterestSize:(float)arg1;
- (struct __SVMParameters { struct __SVMScaleOffset { float x_1_1_1; float x_1_1_2; } x1[7]; double x2; double x3; int x4; int x5; struct BurstSupportVector {} *x6; struct BurstSupportVector {} *x7; }*)svmParameters;
- (float)testAverageCameraTravelDistance;
- (float)testAverageRegistrationErrorSkewness;
- (float)testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
- (float)testInOutRatio;
- (float)testMaxInnerDistance;
- (float)testMaxPeakRegistrationError;
- (float)testMaxRegistrationErrorIntegral;
- (float)testMaxRegistrationErrorSkewness;
- (float)testMeanPeakRegistrationError;
- (float)testMinRegionOfInterestSize;

@end
