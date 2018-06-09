/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode {
    int  _textureWrapMode;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    PVTransformAnimation * _transformAnimation;
}

@property (nonatomic) int textureWrapMode;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, retain) PVTransformAnimation *transformAnimation;

- (void).cxx_destruct;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })applyWrapModeToInput:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1;
- (id)getAllSourceNodes;
- (id)init;
- (id)instructionGraphNodeDescription;
- (bool)isPortrait;
- (void)setTextureWrapMode:(int)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransformAnimation:(id)arg1;
- (int)textureWrapMode;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)transformAnimation;

@end
