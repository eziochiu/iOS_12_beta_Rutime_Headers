/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNDocumentRoot : TSADocumentRoot <TSKModel, TSTResolverContainerNameProvider> {
    bool  _isObservingRecording;
    KNRecordingSyncMaintainer * _recordingSyncMaintainer;
    KNShow * _show;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <KNDocumentRootDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isShowcastAllowed;
@property (nonatomic, retain) KNRecordingSyncMaintainer *recordingSyncMaintainer;
@property (nonatomic, retain) KNShow *show;
@property (readonly) Class superclass;

+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;

- (void).cxx_destruct;
- (id)UIStateForChart:(id)arg1;
- (void)addDefaultGalleryCaptionParagraphStyleIfNeededToStylesheet:(id)arg1;
- (unsigned long long)applicationType;
- (void)changeShowSizeTo:(struct CGSize { double x1; double x2; })arg1;
- (void)changeShowThemeUsingTemplate:(id)arg1 themeDocumentRoot:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3 keepChangesToThemeDefaults:(bool)arg4 commandGroupActionStringOverride:(id)arg5;
- (id)childEnumerator;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)createViewStateRootForContinuation:(bool)arg1;
- (void)dealloc;
- (void)documentDidLoad;
- (id)freehandDrawingToolkitUIState;
- (id)initWithContext:(id)arg1;
- (bool)isMultiPageForQuickLook;
- (bool)isSharedReadOnly;
- (bool)isShowcastAllowed;
- (void)loadFromArchive:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct Reference {} *x6; struct Reference {} *x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)nameForResolverContainer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_applicationWillResignActive:(id)arg1;
- (void)p_hyperlinkAndBreadcrumbUpgradeForUnity20SlideNodes:(id)arg1;
- (void)p_thumbnailUpgradeForUnity20SlideNodes:(id)arg1 andMasterSlideNodess:(id)arg2;
- (void)prepareForSavingAsTemplate;
- (void)preprocessForSaveAsTheme;
- (id)protected_defaultTextPresetOrdering;
- (id)recordingSyncMaintainer;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(bool)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)saveToArchive:(struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct Reference {} *x6; struct Reference {} *x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecordingSyncMaintainer:(id)arg1;
- (void)setShow:(id)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (bool)shouldShowComments;
- (id)show;
- (id)slideNodeForClearedShow;
- (double)stickyCommentScaleMultiplier;
- (id)stylesToNotResizeInStylesheet:(id)arg1;
- (id)stylesheet;
- (id)theme;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (bool)validateSlideNode:(id)arg1;
- (bool)validateUIState:(id)arg1;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id*)arg2;
- (void)willClose;
- (unsigned long long)writingDirectionForStorage;

@end
