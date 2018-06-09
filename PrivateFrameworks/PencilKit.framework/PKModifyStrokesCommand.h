/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKModifyStrokesCommand : PKUndoCommand {
    bool  _hide;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    NSArray * _strokes;
}

@property (nonatomic, readonly) bool hide;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (nonatomic, readonly) NSArray *strokes;
@property (nonatomic, readonly) NSArray *visibleStrokes;

+ (id)commandForErasingAllStrokesInDrawing:(id)arg1;
+ (id)commandForErasingStrokes:(id)arg1 drawing:(id)arg2;
+ (id)commandForMakingStrokeVisible:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (id)commandForMakingStrokesVisible:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;

- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)description;
- (bool)hide;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(bool)arg4 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (id)inverted;
- (void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (id)strokes;
- (id)visibleStrokes;

@end
