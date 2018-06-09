/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFeedbackDragSnappingBehavior : _UIDragSnappingFeedbackGenerator

+ (id)dragBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (id)dragBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
+ (id)retargetBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;

- (void)snappedToFinalPosition;
- (void)targetUpdated;

@end
