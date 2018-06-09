/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElement : NSObject <IKDOMBindingControllerDelegate, IKJSDataItemObserver, IKStyleableElement> {
    NSString * _accessibilityText;
    NSMutableSet * _activeSingularEvents;
    IKAppDocument * _appDocument;
    bool  _areChildrenBound;
    NSDictionary * _attributes;
    NSString * _autoHighlightIdentifier;
    IKDOMBindingController * _bindingController;
    bool  _didUpdateAutoHighlightIdentifier;
    bool  _disabled;
    NSString * _elementID;
    NSString * _elementName;
    unsigned long long  _elementType;
    NSArray * _features;
    bool  _impressionable;
    NSDictionary * _impressionableAttributes;
    bool  _isPartOfPrototypeElement;
    bool  _isProxyElement;
    NSString * _itmlID;
    NSMutableDictionary * _metadataDict;
    IKViewElement * _parent;
    <IKStyleableElement> * _parentStyleableElement;
    NSDictionary * _prototypesByType;
    bool  _prototypesUpdated;
    IKViewElementStyleComposer * _styleComposer;
    NSArray * _unfilteredChildren;
    IKElementChangeSet * _unfilteredChildrenChangeset;
    unsigned long long  _updateType;
    NSArray * _visibleChildren;
}

@property (nonatomic, readonly, copy) NSString *accessibilityText;
@property (nonatomic, retain) NSMutableSet *activeSingularEvents;
@property (nonatomic) IKAppDocument *appDocument;
@property (nonatomic, readonly) bool areChildrenBound;
@property (nonatomic, readonly, retain) NSDictionary *attributes;
@property (nonatomic, copy) NSString *autoHighlightIdentifier;
@property (nonatomic, readonly) IKDOMBindingController *bindingController;
@property (nonatomic, readonly, retain) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didUpdateAutoHighlightIdentifier;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, readonly, copy) NSString *elementID;
@property (nonatomic, readonly, copy) NSString *elementName;
@property (nonatomic, readonly) unsigned long long elementType;
@property (nonatomic, readonly) SKUIEntityProviderListViewElement *entityProviderList;
@property (nonatomic, readonly, copy) NSArray *features;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (getter=isImpressionable, nonatomic) bool impressionable;
@property (nonatomic, readonly) NSDictionary *impressionableAttributes;
@property (nonatomic, readonly) bool isPartOfPrototypeElement;
@property (nonatomic, readonly) bool isProxyElement;
@property (nonatomic, readonly, retain) NSString *itmlID;
@property (nonatomic, retain) NSMutableDictionary *metadataDict;
@property (nonatomic) IKViewElement *parent;
@property (nonatomic, readonly) <IKStyleableElement> *parentStyleableElement;
@property (nonatomic, retain) NSDictionary *prototypesByType;
@property (nonatomic, readonly) bool prototypesUpdated;
@property (nonatomic, readonly, retain) IKViewElementStyle *style;
@property (nonatomic, retain) IKViewElementStyleComposer *styleComposer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long tv_scaleMode;
@property (nonatomic, readonly) NSHashTable *tv_viewProxyMap;
@property (nonatomic, readonly, retain) NSArray *unfilteredChildren;
@property (nonatomic, readonly) IKElementChangeSet *unfilteredChildrenChangeset;
@property (nonatomic) unsigned long long updateType;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)_prototypesByTypeForDOMElement:(id)arg1 prototypesDOMElement:(id*)arg2;
+ (unsigned long long)evaluateElementUpdateType:(id)arg1;
+ (id)instantiateDOMElementForItem:(id)arg1 withPrototype:(id)arg2 parentDOMElement:(id)arg3 existingDOMElement:(id)arg4;
+ (bool)shouldParseChildDOMElement:(id)arg1;
+ (bool)shouldParseChildDOMElements;
+ (id)supportedFeatures;
+ (unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (void)willParseDOMElement:(id)arg1;

- (void).cxx_destruct;
- (void)_applyChildrenValueWithItems:(id)arg1 domBindingController:(id)arg2;
- (void)_applyUpdatedIndexesValueWithIndexes:(id)arg1 domBindingController:(id)arg2;
- (void)_updateSubtreeWithElement:(id)arg1;
- (id)accessibilityText;
- (id)activeSingularEvents;
- (id)actualElementForProxyElement:(id)arg1 jsContext:(id)arg2;
- (id)additionalKeysToResolveForDOMBindingController:(id)arg1;
- (id)appDocument;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (bool)areChildrenBound;
- (id)attributes;
- (id)autoHighlightIdentifier;
- (id)bindingController;
- (id)childElementWithType:(unsigned long long)arg1;
- (id)childElementsWithType:(unsigned long long)arg1;
- (id)childImageElementWithType:(unsigned long long)arg1;
- (id)childTextElementWithStyle:(unsigned long long)arg1;
- (id)children;
- (void)configureUpdatesWithElement:(id)arg1;
- (void)dataItem:(id)arg1 didChangeSubPropertyPathWithString:(id)arg2 forPropertyPathWithString:(id)arg3 subscriptIndex:(long long)arg4;
- (void)dealloc;
- (id)debugDescription;
- (bool)didUpdateAutoHighlightIdentifier;
- (void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(bool)arg3 isCancelable:(bool)arg4 extraInfo:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(bool)arg2 isCancelable:(bool)arg3 extraInfo:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)disperseUpdateType:(unsigned long long)arg1;
- (bool)domBindingController:(id)arg1 applyValue:(id)arg2 forKey:(id)arg3;
- (void)domBindingController:(id)arg1 didLoadBinding:(id)arg2;
- (void)domBindingController:(id)arg1 didResolveKeys:(id)arg2;
- (bool)domBindingController:(id)arg1 doKeysAffectChildren:(id)arg2;
- (bool)domBindingController:(id)arg1 doKeysAffectSubtree:(id)arg2;
- (id)elementID;
- (id)elementName;
- (unsigned long long)elementType;
- (id)features;
- (id)findPrototypeForType:(id)arg1;
- (id)impressionableAttributes;
- (id)init;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (bool)isDisabled;
- (bool)isHidden;
- (bool)isImpressionable;
- (bool)isPartOfPrototypeElement;
- (bool)isProxyElement;
- (id)itmlID;
- (id)metadataDict;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)parent;
- (id)parentStyleableElement;
- (id)prototypesByType;
- (bool)prototypesUpdated;
- (void)resetProperty:(unsigned long long)arg1;
- (void)resetUpdates;
- (void)retrievePresentationDocument:(id /* block */)arg1;
- (void)setActiveSingularEvents:(id)arg1;
- (void)setAppDocument:(id)arg1;
- (void)setAutoHighlightIdentifier:(id)arg1;
- (void)setDidUpdateAutoHighlightIdentifier:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setImpressionable:(bool)arg1;
- (void)setMetadataDict:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setPrototypesByType:(id)arg1;
- (void)setStyleComposer:(id)arg1;
- (void)setUpdateType:(unsigned long long)arg1;
- (bool)shouldResolveDataForDOMBindingController:(id)arg1;
- (id)style;
- (id)styleComposer;
- (id)unfilteredChildren;
- (id)unfilteredChildrenChangeset;
- (unsigned long long)updateType;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (id)entityProviderList;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tv_approximateViewElementForView:(id)arg1;

- (id)itemElementsOfType:(unsigned long long)arg1;
- (void)tv_addViewProxy:(id)arg1;
- (id)tv_approximateView;
- (id)tv_associatedViewElement;
- (id)tv_associatedViewElementWithDefaultClass:(Class)arg1;
- (unsigned long long)tv_elementType;
- (id)tv_indexesByIndexTitle;
- (long long)tv_scaleMode;
- (long long)tv_semanticContentAttribute;
- (id)tv_viewProxyMap;

// Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI

- (unsigned long long)vs_elementType;
- (id)vs_itemElementsOfType:(unsigned long long)arg1;

@end
