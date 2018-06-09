/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMAssetActionManager : PXAssetActionManager {
    NSMutableDictionary * _performerClassByType;
}

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (id)initWithSelectionManager:(id)arg1 allowsSelection:(bool)arg2 allowsAddToLibrary:(bool)arg3;
- (bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;

@end
