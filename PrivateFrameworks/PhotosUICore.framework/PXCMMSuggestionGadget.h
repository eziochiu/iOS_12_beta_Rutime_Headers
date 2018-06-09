/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSuggestionGadget : NSObject <PXDiagnosticsEnvironment, PXGadget> {
    UIColor * _backgroundColor;
    <PXGadgetDelegate> * _delegate;
    bool  _didLoadContentData;
    PXGadgetSpec * _gadgetSpec;
    <PXCMMSuggestion> * _pendingSuggestion;
    <PXCMMSuggestion> * _suggestion;
    PXCMMSuggestionView * _suggestionView;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) <PXCMMSuggestion> *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (void)_loadSuggestion:(id)arg1;
- (void)_performPublishForSuggestion:(id)arg1 pptConfigurationBlock:(id /* block */)arg2;
- (id)_sharePromptDisplayNames;
- (void)_tapGesture:(id)arg1;
- (void)_updateSharePrompt;
- (id)backgroundColor;
- (struct NSObject { Class x1; }*)contentView;
- (id)delegate;
- (void)gadgetControllerHasAppeared;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (bool)hasLoadedContentData;
- (void)loadContentData;
- (void)ppt_presentComposeRecipientViewAfterDelay:(double)arg1;
- (void)ppt_presentDetailView;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)suggestion;
- (bool)supportsHighlighting;
- (bool)supportsSelection;
- (id)uniqueGadgetIdentifier;

@end
