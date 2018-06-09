/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMasterSlide : KNAbstractSlide <TSKTransformableObject> {
    NSArray * _bodyListStyles;
    NSArray * _bodyParagraphStyles;
    bool  _calculatedHasBug16580905;
    KNClassicStylesheetRecord * _classicStylesheetRecord;
    bool  _hasBug16580905;
    NSString * _name;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _objectRect;
    bool  _slideObjectsLayerWithMaster;
    NSString * _thumbnailTextForBodyPlaceholder;
    NSString * _thumbnailTextForTitlePlaceholder;
}

@property (nonatomic, copy) NSArray *bodyListStyles;
@property (nonatomic, copy) NSArray *bodyParagraphStyles;
@property (nonatomic, readonly) KNClassicStylesheetRecord *classicStylesheetRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } objectRect;
@property (nonatomic) bool slideObjectsLayerWithMaster;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *thumbnailTextForBodyPlaceholder;
@property (nonatomic, copy) NSString *thumbnailTextForTitlePlaceholder;

+ (bool)hasLocalizedThumbnailText;
+ (void)initialize;
+ (id)masterGuideColor;
+ (void)mastersNotEquivalentWithFile:(id)arg1 lineNumber:(long long)arg2 reason:(id)arg3;
+ (id)p_defaultMasterGuideColor;
+ (void)setMasterGuideColor:(id)arg1;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)addBuild:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)bodyListStyles;
- (id)bodyParagraphStyles;
- (unsigned long long)buildChunkCount;
- (id)buildChunks;
- (unsigned long long)buildCount;
- (id)builds;
- (id)childEnumerator;
- (id)classicStylesheetRecord;
- (bool)containsProperty:(int)arg1;
- (id)description;
- (void)flushClassicStylesheetRecord;
- (void)generateObjectPlaceholderIfNecessary;
- (bool)hasBug16580905;
- (id)imagePlaceholders;
- (id)initWithSlideNode:(id)arg1 context:(id)arg2;
- (void)insertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(bool)arg3;
- (int)intValueForProperty:(int)arg1;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isMasterSlide;
- (bool)isObjectVisible;
- (bool)isThemeContent;
- (void)loadFromUnarchiver:(id)arg1;
- (id)name;
- (id)nonPlaceholderObjects;
- (id)objectForProperty:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })objectRect;
- (id)p_defaultTagForDrawable:(id)arg1;
- (id)p_defaultThumbnailTextForPlaceholder:(id)arg1;
- (id)packageLocator;
- (id)referencedStyles;
- (void)removeBuild:(id)arg1;
- (void)removeBuildChunk:(id)arg1 rollbackGeneratedIdentifier:(bool)arg2;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setBodyListStyles:(id)arg1;
- (void)setBodyParagraphStyles:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSlideObjectsLayerWithMaster:(bool)arg1;
- (void)setThumbnailTextForBodyPlaceholder:(id)arg1;
- (void)setThumbnailTextForTitlePlaceholder:(id)arg1;
- (bool)slideObjectsLayerWithMaster;
- (bool)supportsBuilds;
- (id)tagsforNewPlaceholderInfos:(id)arg1;
- (id)thumbnailTextForBodyPlaceholder;
- (id)thumbnailTextForPlaceholder:(id)arg1;
- (id)thumbnailTextForTitlePlaceholder;
- (void)updatePlaceholderText;
- (void)wasAddedToTheme:(id)arg1;
- (void)willBeAddedToTheme:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
