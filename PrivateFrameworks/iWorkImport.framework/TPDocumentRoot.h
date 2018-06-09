/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPDocumentRoot : TSADocumentRoot <TPPageControllerDelegate, TSCEResolverContainer, TSDInfoUUIDPathPrefixComponentsProvider, TSTResolverContainerNameProvider, TSWPChangeSessionManager, TSWPChangeVisibility, TSWPDrawableOLC, TSWPStorageParent> {
    TSWPChangeSession * _activeChangeSession;
    TPBackgroundLayoutController * _backgroundLayoutController;
    TSWPStorage * _bodyStorage;
    TPBookmarkController * _bookmarkController;
    double  _bottomMargin;
    NSMutableArray * _changeSessionHistory;
    bool  _changeTrackingEnabled;
    NSMutableDictionary * _chartsUIState;
    NSArray * _citationRecords;
    TPDrawablesZOrder * _drawablesZOrder;
    EQKitEnvironment * _equationEnvironment;
    TSPData * _equationEnvironmentData;
    TPFloatingDrawables * _floatingDrawables;
    TSWPFlowInfoContainer * _flowInfoContainer;
    double  _footerMargin;
    TSDFreehandDrawingToolkitUIState * _freehandDrawingToolkitUIState;
    double  _headerMargin;
    struct __CFLocale { } * _hyphenationLocale;
    bool  _layoutBodyVertically;
    double  _leftMargin;
    TSWPChangeSession * _mostRecentChangeSession;
    bool  _needsAdditionalViewStateValidation;
    bool  _needsInitialization;
    bool  _newDocument;
    NSArray * _obsoleteTOCStyles;
    long long  _orientation;
    TPPageLayoutNotifier * _pageLayoutNotifier;
    double  _pageScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _pageSize;
    NSMutableArray * _pageTemplates;
    TPPageController * _paginatedPageController;
    NSString * _paperID;
    double  _presentationAutoScrollSpeed;
    NSString * _printerID;
    NSMutableSet * _remappedTableNames;
    double  _rightMargin;
    TPDocumentSettings * _settings;
    bool  _shouldUniquifyTableNames;
    TSSStylesheet * _stylesheet;
    NSMutableDictionary * _tableInfosWithUniqueNames;
    unsigned int  _tableNameCounter;
    TPTheme * _theme;
    TSDThumbnailController * _thumbnailController;
    double  _topMargin;
    bool  _usesSingleHeaderFooter;
    TPDocumentViewController * _viewController;
    bool  _wasCreatedFromTemplate;
    bool  initiallyShowRuler;
    bool  initiallyShowTwoUp;
}

@property (nonatomic, retain) TSWPChangeSession *activeChangeSession;
@property (nonatomic, readonly) bool autoListRecognition;
@property (nonatomic, readonly) bool autoListTermination;
@property (nonatomic, readonly) TPBackgroundLayoutController *backgroundLayoutController;
@property (nonatomic, readonly) TSWPStorage *bodyStorage;
@property (nonatomic, readonly) TPBookmarkController *bookmarkController;
@property (nonatomic) double bottomMargin;
@property (nonatomic, readonly) bool canTrackChanges;
@property (nonatomic, retain) NSMutableArray *changeSessionHistory;
@property (getter=isChangeTrackingEnabled, nonatomic) bool changeTrackingEnabled;
@property (nonatomic, retain) NSMutableDictionary *chartsUIState;
@property (nonatomic, readonly) long long contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TPDocumentRoot *documentRoot;
@property (nonatomic, retain) TPDrawablesZOrder *drawablesZOrder;
@property (nonatomic, readonly) TPSection *firstSection;
@property (nonatomic, retain) TPFloatingDrawables *floatingDrawables;
@property (nonatomic, retain) TSWPFlowInfoContainer *flowInfoContainer;
@property (nonatomic) double footerMargin;
@property (nonatomic, retain) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (nonatomic, readonly) bool hasTrackedChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headerMargin;
@property (nonatomic) bool initiallyShowRuler;
@property (nonatomic) bool initiallyShowTwoUp;
@property (nonatomic, readonly) bool isNewDocument;
@property (nonatomic, readonly) bool isTrackingChanges;
@property (nonatomic) bool layoutBodyVertically;
@property (nonatomic) double leftMargin;
@property (nonatomic, retain) TSWPChangeSession *mostRecentChangeSession;
@property (nonatomic) bool needsAdditionalViewStateValidation;
@property (nonatomic, readonly) NSArray *nonHiddenSections;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) TPPageController *pageController;
@property (nonatomic) double pageScale;
@property (nonatomic) struct CGSize { double x1; double x2; } pageSize;
@property (nonatomic, readonly) NSArray *pageTemplates;
@property (nonatomic, readonly) long long pageViewState;
@property (nonatomic, copy) NSString *paperID;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } paperSize;
@property (nonatomic) double presentationAutoScrollSpeed;
@property (nonatomic, readonly) bool preventsChangeTracking;
@property (nonatomic, readonly) bool preventsComments;
@property (nonatomic, copy) NSString *printerID;
@property (nonatomic) double rightMargin;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) TPDocumentSettings *settings;
@property (nonatomic, readonly) bool storageChangesInvalidateWrap;
@property (nonatomic, retain) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsMultipleColumns;
@property (nonatomic, readonly) bool textIsLinked;
@property (nonatomic, readonly) bool textIsVertical;
@property (nonatomic, retain) TPTheme *theme;
@property (nonatomic, readonly) TSDThumbnailController *thumbnailController;
@property (nonatomic) double topMargin;
@property (getter=isTrackingChanges, nonatomic, readonly) bool trackingChanges;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } unrotatedPaperSize;
@property (nonatomic) bool usesSingleHeaderFooter;
@property (nonatomic, readonly) bool wasCreatedFromTemplate;

+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (struct CGSize { double x1; double x2; })pageSizeFromPaperSize:(struct CGSize { double x1; double x2; })arg1 pageScale:(double)arg2 orientation:(long long)arg3;
+ (struct CGSize { double x1; double x2; })previewImageSizeForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)UIStateForChart:(id)arg1;
- (id)activeChangeSession;
- (void)addRemappedTableName:(id)arg1;
- (unsigned long long)applicationType;
- (bool)autoListRecognition;
- (bool)autoListTermination;
- (id)backgroundLayoutController;
- (id)bodyStorage;
- (double)bodyWidth;
- (id)bookmarkController;
- (double)bottomMargin;
- (bool)canTrackChanges;
- (bool)cellCommentsAllowedOnInfo:(id)arg1;
- (id)changeSessionHistory;
- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (id)chartsUIState;
- (id)childEnumerator;
- (id)citationRecords;
- (void)clearRemappedTableNames;
- (long long)contentWritingDirection;
- (void)dealloc;
- (void)didAddDrawable:(id)arg1;
- (void)didEnterBackground;
- (bool)documentAllowsPencilAnnotationsOnModel:(id)arg1;
- (void)documentDidLoad;
- (bool)documentDisallowsHighlightsOnStorage:(id)arg1;
- (id)documentRoot;
- (id)drawablesZOrder;
- (id)equationEnvironment;
- (bool)exportToPath:(id)arg1 exporter:(id)arg2 error:(id*)arg3;
- (id)firstSection;
- (id)floatingDrawables;
- (id)flowInfoContainer;
- (double)footerMargin;
- (double)footnoteGap;
- (long long)footnoteKind;
- (bool)footnotesShouldAffectBodyLayout;
- (id)freehandDrawingToolkitUIState;
- (bool)freehandDrawingsRequireSpacerShape;
- (bool)hasPageBackgroundsForSections;
- (bool)hasPencilAnnotations;
- (bool)hasTrackedChanges;
- (bool)hasViewState;
- (double)headerMargin;
- (const struct __CFLocale { }*)hyphenationLocale;
- (void)i_upgradeSectionsForPageTemplates;
- (int)indexForObject:(id)arg1;
- (id)initForThemeImportWithContext:(id)arg1;
- (id)initUsingDefaultThemeWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)initiallyShowRuler;
- (bool)initiallyShowTwoUp;
- (void)invalidateThumbnailForPageIndex:(unsigned long long)arg1;
- (bool)isArchivedViewStateValid:(id)arg1;
- (bool)isChangeTrackingEnabled;
- (bool)isDrawableOnPageMaster:(id)arg1;
- (bool)isMultiPageForQuickLook;
- (bool)isNewDocument;
- (bool)isPendingTableNameUniquification;
- (bool)isSectionModel:(id)arg1;
- (bool)isTrackingChanges;
- (bool)layoutBodyVertically;
- (double)leftMargin;
- (void)loadFromUnarchiver:(id)arg1;
- (id)markStringForFootnoteReferenceStorage:(id)arg1;
- (id)markStringForFootnoteReferenceStorage:(id)arg1 ignoreDeletedFootnotes:(bool)arg2 forceDocumentEndnotes:(bool)arg3;
- (id)modelEnumeratorForSearchWithFlags:(unsigned long long)arg1 forObjectsPassingTest:(id /* block */)arg2;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsPassingTest:(id /* block */)arg2;
- (id)modelPathComponentForChild:(id)arg1;
- (id)mostRecentChangeSession;
- (id)nameForResolverContainer:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (bool)needsAdditionalViewStateValidation;
- (bool)needsToExplainEnablingChangeTracking;
- (unsigned int)nextUntitledResolverIndex;
- (id)nonHiddenSections;
- (long long)orientation;
- (id)pBlankPageTemplate;
- (void)pCommonInitialization;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pConjureUpBodyRect;
- (id)pCreateBlankPageTemplate;
- (void)pCreateBodyStorage;
- (void)pCreateDrawablesZOrderBodyStorage:(id)arg1 addAnchoredDrawables:(bool)arg2;
- (void)pCreateFloatingDrawables;
- (void)pCreateFlowInfoContainer;
- (void)pFinishInitialization;
- (void)pUpgradeSection:(id)arg1 documentVersion:(unsigned long long)arg2;
- (unsigned long long)p_autoNumberForStorage:(id)arg1 ignoreDeletedFootnotes:(bool)arg2 footnoteKind:(long long)arg3;
- (bool)p_drawableInfoIsOwnedByATPPageTemplate:(id)arg1;
- (void)p_initializeShowInBookmarksListParagraphStylesProperty;
- (id)p_previewImageWithImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)p_realTOCEntryStyleFromFakeTOCEntryStyle:(id)arg1 context:(id)arg2;
- (void)p_uniquifyTableNames;
- (void)p_upgradeBodyTOC;
- (void)p_upgradeTOCModelForUnity20;
- (void)p_upgradeTOCStyles;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageBoundsWithinMargins;
- (id)pageController;
- (void)pageCountDidChangeForPageController:(id)arg1;
- (unsigned long long)pageIndexForThumbnailIdentifier:(id)arg1;
- (id)pageMasterOwningModel:(id)arg1;
- (bool)pageMastersAllowDrawable:(id)arg1;
- (double)pageScale;
- (struct CGSize { double x1; double x2; })pageSize;
- (unsigned long long)pageTemplateIndexForModelObject:(id)arg1;
- (id)pageTemplateWithName:(id)arg1;
- (id)pageTemplates;
- (long long)pageViewState;
- (id)paperID;
- (struct CGSize { double x1; double x2; })paperSize;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1 documentLocale:(id)arg2;
- (double)presentationAutoScrollSpeed;
- (bool)preventsChangeTracking;
- (bool)preventsComments;
- (id)previewImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)printerID;
- (void)readCanvasState;
- (void)readViewState;
- (id)remappedTableNames;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(bool)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)resumeBackgroundActivities;
- (double)rightMargin;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned long long)rootIndexForObject:(id)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
- (void)saveToArchiver:(id)arg1;
- (id)sections;
- (void)setActiveChangeSession:(id)arg1;
- (void)setBodyStorage:(id)arg1 dolcContext:(id)arg2;
- (void)setBottomMargin:(double)arg1;
- (void)setChangeSessionHistory:(id)arg1;
- (void)setChangeTrackingEnabled:(bool)arg1;
- (void)setChartsUIState:(id)arg1;
- (void)setDrawablesZOrder:(id)arg1;
- (void)setFloatingDrawables:(id)arg1;
- (void)setFlowInfoContainer:(id)arg1;
- (void)setFooterMargin:(double)arg1;
- (void)setFreehandDrawingToolkitUIState:(id)arg1;
- (void)setHeaderMargin:(double)arg1;
- (void)setIndex:(int)arg1 forObject:(id)arg2;
- (void)setInitiallyShowRuler:(bool)arg1;
- (void)setInitiallyShowTwoUp:(bool)arg1;
- (void)setLayoutBodyVertically:(bool)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setMostRecentChangeSession:(id)arg1;
- (void)setNeedsAdditionalViewStateValidation:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPageScale:(double)arg1;
- (void)setPageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPaperID:(id)arg1;
- (void)setPresentationAutoScrollSpeed:(double)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setTopMargin:(double)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)setUsesSingleHeaderFooter:(bool)arg1;
- (void)setValue:(double)arg1 forMargin:(long long)arg2;
- (id)settings;
- (bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(bool)arg2;
- (bool)shouldHyphenate;
- (bool)shouldShowChangeKind:(int)arg1 date:(id)arg2;
- (bool)shouldShowMarkupForChangeKind:(int)arg1 date:(id)arg2;
- (id)storagesWithChanges;
- (id)stylesheet;
- (bool)supportHeaderFooterParagraphAlignmentInInspectors;
- (bool)supportsMultipleColumns;
- (void)suspendBackgroundActivities;
- (bool)textIsLinked;
- (bool)textIsVertical;
- (id)theme;
- (id)thumbnailController;
- (id)thumbnailIdentifierForPageIndex:(unsigned long long)arg1;
- (Class)thumbnailImagerClass;
- (double)topMargin;
- (struct CGSize { double x1; double x2; })unrotatedPaperSize;
- (void)updateWritingDirection:(unsigned long long)arg1;
- (void)upgradeFromOldSectionWithPageSize:(struct CGSize { double x1; double x2; })arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 topMargin:(double)arg4 bottomMargin:(double)arg5 headerMargin:(double)arg6 footerMargin:(double)arg7;
- (bool)useLigatures;
- (bool)usesSingleHeaderFooter;
- (id)uuidPathPrefixComponentsForInfo:(id)arg1;
- (double)valueForMargin:(long long)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (bool)wasCreatedFromTemplate;
- (void)willClose;
- (void)willEnterForeground;
- (void)willHide;
- (void)willRemoveDrawable:(id)arg1;

@end
