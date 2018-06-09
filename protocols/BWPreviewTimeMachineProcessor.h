/* made by EzioChiu.
 */

@protocol BWPreviewTimeMachineProcessor <NSObject>

@required

- (void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: FigSmartcamDiagnostics *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (struct { int x1; int x2; })frameDimensions;
- (void)resume;
- (void)suspendWithPTSRange:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 10: struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, NSArray *, struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }, void*

@end
