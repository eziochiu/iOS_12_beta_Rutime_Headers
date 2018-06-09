/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ExtraCompositionItem : MovieCompositionItem

- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 paddedFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)hasVideoContent;
- (id)initWithClip:(id)arg1;
- (id)videoTrackSegmentsWithDestinationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

@end
