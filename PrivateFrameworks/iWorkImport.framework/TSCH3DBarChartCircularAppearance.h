/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarChartCircularAppearance : TSCH3DBarChartDefaultAppearance

+ (struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; int x_1_1_5; } x1; struct BarExtrusionSpineDetails { float x_2_1_1; long long x_2_1_2; long long x_2_1_3; float x_2_1_4; } x2; })defaultDetails;
+ (int)shapeType;

- (float)chartMinZForScene:(id)arg1;
- (float)depthForScene:(id)arg1;
- (bool)isCircular;

@end
