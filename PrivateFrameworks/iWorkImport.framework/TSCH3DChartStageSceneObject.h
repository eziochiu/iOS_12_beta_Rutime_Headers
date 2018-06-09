/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartStageSceneObject : TSCH3DSceneObject {
    TSCH3DSceneObject * mMain;
}

+ (id)objectWithMain:(id)arg1;

- (void)dealloc;
- (void)getBounds:(id)arg1;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (id)initWithMain:(id)arg1;
- (void)postGetBounds:(id)arg1;
- (void)postrender:(id)arg1;
- (void)prerender:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)render:(id)arg1;
- (void)render:(id)arg1 selector:(SEL)arg2;

@end
