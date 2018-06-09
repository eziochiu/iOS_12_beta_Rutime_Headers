/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULogarithmicRegressionModel : TSURegressionModel {
    bool  mAffine;
    double * mCoefficients;
    double  mIntercept;
    int  mNumCoefficients;
    double  mRSquared;
}

- (double)coefficientAtIndex:(int)arg1;
- (void)dealloc;
- (double)estimateForX:(double*)arg1;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1;
- (id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 makeAffine:(bool)arg5 desiredIntercept:(double)arg6;
- (int)numCoefficients;
- (double)rSquared;
- (int)regressionType;

@end
