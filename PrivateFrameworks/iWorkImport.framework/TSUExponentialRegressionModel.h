/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUExponentialRegressionModel : TSURegressionModel {
    bool  mAffine;
    double * mCoefficients;
    double  mIntercept;
    int  mNumCoefficients;
    int  mNumSuperscriptRanges;
    double  mRSquared;
    NSMutableArray * mSuperscriptRangesArray;
}

- (double)coefficientAtIndex:(int)arg1;
- (void)dealloc;
- (double)estimateForX:(double*)arg1;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1;
- (id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 makeAffine:(bool)arg5 desiredIntercept:(double)arg6;
- (int)numCoefficients;
- (int)numSuperscriptRanges;
- (double)rSquared;
- (int)regressionType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })superscriptRangeAtIndex:(int)arg1;

@end
