/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryViewConfiguration : NSObject {
    MusicEntityViewDescriptor * _entityViewDescriptor;
    NSString * _iconName;
    NSString * _identifier;
    bool  _supportsSplitView;
    NSString * _title;
    NSArray * _userActivityItemTypes;
    Class  _viewControllerClass;
    bool  _wantsImmediateHandlingOfEditingChangeRecords;
}

@property (nonatomic, readonly) MusicEntityViewDescriptor *entityViewDescriptor;
@property (nonatomic, copy) NSString *iconName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool supportsSplitView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *userActivityItemTypes;
@property (nonatomic, retain) Class viewControllerClass;
@property (nonatomic) bool wantsImmediateHandlingOfEditingChangeRecords;
@property (nonatomic, readonly) bool wantsVisualIndicationOfSelection;

- (void).cxx_destruct;
- (void)applyEntityProviderChangeRecords:(id)arg1;
- (bool)canDeleteEntityValueContext:(id)arg1;
- (bool)canMoveEntityValueContext:(id)arg1;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (void)configureContentDescriptorForSearchResults:(id)arg1;
- (id)entityViewDescriptor;
- (void)enumerateContentViewConfigurationsUsingBlock:(id /* block */)arg1;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)iconName;
- (id)identifier;
- (bool)isEntityViewDescriptorLoaded;
- (id)loadEntityViewDescriptor;
- (id)newEntityValueContext;
- (id)newSectionEntityValueContext;
- (id)newSelectionEntityValueContext;
- (id)newSelectionSectionEntityValueContext;
- (id)newViewController;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)setIconName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSupportsSplitView:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserActivityItemTypes:(id)arg1;
- (void)setViewControllerClass:(Class)arg1;
- (void)setWantsImmediateHandlingOfEditingChangeRecords:(bool)arg1;
- (bool)supportsSplitView;
- (id)title;
- (id)userActivityItemTypes;
- (Class)viewControllerClass;
- (bool)wantsImmediateHandlingOfEditingChangeRecords;
- (bool)wantsVisualIndicationOfSelection;

@end
