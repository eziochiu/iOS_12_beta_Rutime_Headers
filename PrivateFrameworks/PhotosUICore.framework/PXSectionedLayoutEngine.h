/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedLayoutEngine : PXLayoutEngine <PXMutableSectionedLayoutEngine> {
    long long  _axis;
    struct { 
        bool willGenerateLayoutForSection; 
    }  _delegateRespondsTo;
    struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; } * _geometryBuffer;
    unsigned long long  _geometryBufferCount;
    PXSectionedLayoutContent * _layoutContent;
    bool  _needsUpdateSeedItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _seedSize;
}

@property (nonatomic, readonly) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSectionedLayoutEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXSectionedLayoutItem> *seedItem;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } seedSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_computeSection:(id)arg1;
- (id)_computeSectionsFromSection:(id)arg1 itemIndex:(long long)arg2 kind:(long long)arg3;
- (bool)_computeSectionsIfNeeded;
- (id)_emptyLayoutSnapshot;
- (id)_newLayoutSection;
- (id)_newLayoutSnapshot;
- (void)_prepareGeometryBufferForCount:(unsigned long long)arg1;
- (void)_resetLayoutData;
- (void)_updateLayoutDataWithChangeDetails:(id)arg1;
- (long long)axis;
- (bool)canComputeLayoutSnapshot;
- (id)computeLayoutSnapshot;
- (void)dealloc;
- (id)init;
- (id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3;
- (id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2;
- (void)performChanges:(id /* block */)arg1;
- (id)performChangesAndWait:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })seedSize;
- (void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSeedItem:(id)arg1;
- (void)setSeedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateLayoutDataWithChangeDetails:(id)arg1;

@end
