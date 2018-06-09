/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarChartDefaultAppearance : NSObject <TSCH3DBarChartAppearance, TSCHUnretainedParent> {
    TSCH3DChartBarElementProperties * mProperties;
}

+ (struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; int x_1_1_5; } x1; struct BarExtrusionSpineDetails { float x_2_1_1; long long x_2_1_2; long long x_2_1_3; float x_2_1_4; } x2; })defaultDetails;
+ (int)shapeType;

- (float)chartMinZForScene:(id)arg1;
- (void)clearParent;
- (void)dealloc;
- (float)depthForScene:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (bool)isCircular;
- (float)maxValueForSeries:(long long)arg1;
- (float)signedValueForSeries:(id)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;

@end
