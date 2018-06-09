/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVInstructionGraphImageBufferSourceNode : PVInstructionGraphSourceNode {
    PVImageBuffer * _imageBuffer;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  _renderManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (id)initWithPVImageBuffer:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const struct PVInputHGNodeMap<PVInstructionGraphSourceNode *> { }*)arg2 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer {} *x1; }*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;

@end
