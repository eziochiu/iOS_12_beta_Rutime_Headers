/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DDataBuffer * mBuffer;
    NSMutableArray * mPickedPoints;
    struct tvec2<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
    }  mPosition;
    TSCH3DRayPickPipelineDelegate * mSceneObjectDelegate;
    float  mSlack;
}

@property (nonatomic, readonly) NSArray *pickedPoints;
@property (nonatomic) struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } position;
@property (nonatomic, retain) TSCH3DRayPickPipelineDelegate *sceneObjectDelegate;
@property (nonatomic) float slack;

- (id).cxx_construct;
- (void)dealloc;
- (void)geometry:(id)arg1;
- (id)init;
- (id)matrix;
- (id)pickedPoints;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })position;
- (id)sceneObjectDelegate;
- (void)setPosition:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })arg1;
- (void)setSceneObjectDelegate:(id)arg1;
- (void)setSlack:(float)arg1;
- (float)slack;
- (void)submit:(const /* Warning: unhandled struct encoding: '{PrimitiveInfo=iii@}' */ struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;

@end
