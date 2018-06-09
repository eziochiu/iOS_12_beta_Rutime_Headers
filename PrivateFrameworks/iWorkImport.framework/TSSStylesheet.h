/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSSStylesheet : TSPObject <TSKTransformableObject> {
    bool  mCanCullStyles;
    TSSStylesheet * mChild;
    NSMutableDictionary * mIdentifierToStyleMap;
    bool  mIsLocked;
    TSSStylesheet * mParent;
    TSURetainedPointerKeyDictionary * mParentToChildrenStyleMap;
    TSUMutableRetainedPointerSet * mStyles;
}

@property (nonatomic) bool canCullStyles;
@property (nonatomic, readonly) TSSStylesheet *child;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocked;
@property (nonatomic, readonly) TSSStylesheet *parent;
@property (nonatomic, readonly) NSSet *styles;
@property (readonly) Class superclass;

- (id)_defaultCharacterStyleWasCreated:(bool*)arg1;
- (id)_defaultColumnStyleWasCreated:(bool*)arg1;
- (id)_defaultListStyleWasCreated:(bool*)arg1;
- (id)_defaultParagraphStyleWasCreated:(bool*)arg1;
- (id)_defaultStyleOfClass:(Class)arg1 withIdentifier:(id)arg2 wasCreated:(bool*)arg3 usingBlock:(id /* block */)arg4;
- (id)_hyperlinkStyleWasCreated:(bool*)arg1;
- (void)addStyle:(id)arg1;
- (void)addStyle:(id)arg1 withIdentifier:(id)arg2;
- (void)addStyle:(id)arg1 withParent:(id)arg2;
- (void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (bool)canCullStyles;
- (bool)cascadedContainsStyle:(id)arg1;
- (id)cascadedFirstStyleWithName:(id)arg1;
- (id)cascadedStyleWithIdentifier:(id)arg1;
- (id)cascadedStyleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)child;
- (id)childrenOfStyle:(id)arg1;
- (bool)containsStyle:(id)arg1;
- (void)dealloc;
- (id)defaultCharacterStyle;
- (id)defaultColumnStyle;
- (id)defaultListStyle;
- (id)defaultParagraphStyle;
- (unsigned long long)descendantCount;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (void)enumerateCascadedStylesUsingBlock:(id /* block */)arg1;
- (void)enumerateStylesUsingBlock:(id /* block */)arg1;
- (id)firstRootlessStyleOfClass:(Class)arg1 withOverridePropertyMap:(id)arg2;
- (id)firstStyleWithName:(id)arg1;
- (id)headerAndFooterStyle;
- (id)hyperlinkStyle;
- (id)identifiedStyles;
- (id)identifiedStylesOfClass:(Class)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 canCullStyles:(bool)arg2;
- (bool)isAncestorOf:(id)arg1;
- (bool)isChildOf:(id)arg1;
- (bool)isDescendentOf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocked;
- (bool)isParentOf:(id)arg1;
- (id)namedStylesOfClass:(Class)arg1;
- (id)pVariationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (void)p_addStyleToParentChildren:(id)arg1;
- (void)p_removeStyle:(id)arg1;
- (void)p_removeStyleFromParentChildren:(id)arg1;
- (void)p_setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)p_setParent:(id)arg1 ofStyle:(id)arg2;
- (id)p_variationMapForVaryingCharacterStyle:(id)arg1 overParagraphStyle:(id)arg2 withPropertyMap:(id)arg3;
- (id)parent;
- (void)removeStyle:(id)arg1;
- (id)rootAncestor;
- (void)setCanCullStyles:(bool)arg1;
- (void)setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)setIsLocked:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setParent:(id)arg1 ofStyle:(id)arg2;
- (void)setParent:(id)arg1 withParentStyleMap:(struct __CFDictionary { }*)arg2;
- (id)styleWithIdentifier:(id)arg1;
- (id)styleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)styles;
- (id)stylesOfClass:(Class)arg1;
- (id)stylesPassingTest:(id /* block */)arg1;
- (id)stylesWithName:(id)arg1;
- (id)stylesWithName:(id)arg1 ofClass:(Class)arg2;
- (void)unlockStylesheetForDurationOfBlock:(id /* block */)arg1;
- (id)unusedStyleIdentifierWithPackageString:(id)arg1 styleDescriptor:(id)arg2 contentTag:(id)arg3;
- (id)variationOfCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 propertyMap:(id)arg3;
- (id)variationOfStyle:(id)arg1 exactPropertyMap:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 context:(id)arg3;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (id)variationOfStyleMatchingStyle:(id)arg1 withNewParentStyle:(id)arg2;

@end
