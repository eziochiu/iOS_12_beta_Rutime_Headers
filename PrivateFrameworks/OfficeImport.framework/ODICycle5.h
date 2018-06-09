/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODICycle5 : ODICycle

+ (void)addShapeForNode:(id)arg1 relativeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 state:(id)arg3;
+ (void)addShapeForTransition:(id)arg1 startAngle:(float)arg2 endAngle:(float)arg3 state:(id)arg4;
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(bool)arg2 state:(id)arg3;
+ (bool)map1NodeWithState:(id)arg1;
+ (bool)map2NodeWithState:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mapGSpaceWithState:(id)arg1;
+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (void)mapStyleForTransition:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (struct CGSize { double x1; double x2; })nodeSizeWithState:(id)arg1;
+ (float)normalizedAngle:(float)arg1;

@end
