/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSNativeViewController : IKJSEventListenerObject <IKDOMFeature, MusicJSNativeViewController> {
    bool  _configured;
    NSString * _featureName;
    NSString * _nativeViewIdentifier;
    IKDOMElement * _ownerDOMElement;
    IKJSObject * _ownerForScriptObjectGraph;
    UIViewController<MusicClientContextConsuming> * _ownerViewController;
    SKUIViewElement * _ownerViewElement;
    long long  _presentationSource;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (getter=_isConfigured, nonatomic, readonly) bool configured;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *nativeViewIdentifier;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (getter=_ownerForScriptObjectGraph, nonatomic, readonly) IKJSObject *ownerForScriptObjectGraph;
@property (getter=_ownerViewElement, nonatomic, readonly) SKUIViewElement *ownerViewElement;
@property (nonatomic) long long presentationSource;
@property (readonly) Class superclass;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (void)_configureForOwnerViewController:(id)arg1 ownerDOMElement:(id)arg2 ownerForScriptObjectGraph:(id)arg3;
- (bool)_isConfigured;
- (id)_ownerForScriptObjectGraph;
- (id)_ownerViewElement;
- (id)featureName;
- (id)initWithAppContext:(id)arg1;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (id)jsNavigationDocumentForJSContext:(id)arg1;
- (void)migrateToViewElement:(id)arg1;
- (id)nativeViewIdentifier;
- (id)navigationDocument;
- (void)navigationDocumentDidChange;
- (long long)presentationSource;
- (void)setPresentationSource:(long long)arg1;

@end
