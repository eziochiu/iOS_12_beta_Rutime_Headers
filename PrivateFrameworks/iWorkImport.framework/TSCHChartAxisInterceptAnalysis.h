/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisInterceptAnalysis : NSObject {
    double  _axisInterceptPosition;
    int  _gridValueType;
}

@property (nonatomic) double axisInterceptPosition;
@property (nonatomic) int gridValueType;

- (double)axisInterceptPosition;
- (int)gridValueType;
- (void)setAxisInterceptPosition:(double)arg1;
- (void)setGridValueType:(int)arg1;

@end
