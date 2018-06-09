/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutDynamicResizeInfoAccordion : TSTLayoutDynamicResizeInfo {
    double  _heightFactor;
    double  _widthFactor;
}

@property (nonatomic, readonly) double heightFactor;
@property (nonatomic, readonly) double widthFactor;

- (double)applyResizeHeightFactor:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)heightFactor;
- (id)initWithDynamicResizeInfo:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;
- (double)p_applyAccordionResizeFactor:(double)arg1 region:(id)arg2 direction:(long long)arg3 totalOfCaptured:(double)arg4 count:(unsigned short)arg5 capturedArray:(double*)arg6 currentArray:(double*)arg7 minimumArray:(double*)arg8;
- (double)widthFactor;

@end
