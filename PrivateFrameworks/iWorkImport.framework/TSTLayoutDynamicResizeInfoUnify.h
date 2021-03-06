/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutDynamicResizeInfoUnify : TSTLayoutDynamicResizeInfo {
    double  mTargetHeight;
    double  mTargetWidth;
}

@property (nonatomic, readonly) double targetHeight;
@property (nonatomic, readonly) double targetWidth;

- (bool)applyFixedHeight:(double)arg1;
- (bool)applyFixedWidth:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (bool)p_applyUnifyFixedSize:(double)arg1 region:(id)arg2 direction:(long long)arg3 count:(unsigned short)arg4 currentArray:(double*)arg5 minimumArray:(double*)arg6;
- (double)p_applyUnifyResizeFactor:(double)arg1 region:(id)arg2 direction:(long long)arg3 totalOfCaptured:(double)arg4 count:(unsigned short)arg5 capturedArray:(double*)arg6 currentArray:(double*)arg7 minimumArray:(double*)arg8;
- (double)targetHeight;
- (double)targetWidth;

@end
