/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetActionManager : PXActionManager {
    PXSectionedSelectionManager * _selectionManager;
}

@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (bool)canPerformAssetVariationActions;
- (id)init;
- (id)initWithSelectionManager:(id)arg1;
- (void)px_registerAdditionalPerformerClasses;
- (id)selectionManager;
- (bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;

@end
