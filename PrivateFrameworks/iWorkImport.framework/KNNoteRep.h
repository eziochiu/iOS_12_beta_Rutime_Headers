/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNNoteRep : TSDRep <TSDContainerRep, TSWPStorageObserver> {
    TSWPRep * _containedRep;
}

@property (nonatomic, readonly) NSArray *childReps;
@property (nonatomic, readonly) TSWPRep *containedRep;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (bool)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (bool)canSelectChildRep:(id)arg1;
- (id)childReps;
- (double)columnHeight;
- (id)containedRep;
- (id)containerInfo;
- (void)dealloc;
- (id)editingRep;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)selectChildRep:(id)arg1 extendingSelection:(bool)arg2;
- (bool)shouldShowCollaboratorCursorHighlight;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)updateChildrenFromLayout;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;

@end
