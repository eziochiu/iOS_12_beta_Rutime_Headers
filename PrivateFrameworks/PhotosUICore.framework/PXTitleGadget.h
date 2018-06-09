/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTitleGadget : NSObject <PXGadget, PXMutableTitleGadget> {
    id /* block */  _accessoryButtonAction;
    unsigned long long  _accessoryButtonType;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    unsigned long long  _gadgetType;
    unsigned long long  _headerStyle;
    bool  _isPerformingChanges;
    unsigned long long  _priority;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ accessoryButtonAction;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long headerStyle;
@property (nonatomic) bool isPerformingChanges;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (void)_updateIfNeeded;
- (id /* block */)accessoryButtonAction;
- (unsigned long long)accessoryButtonType;
- (id)delegate;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (bool)hasLoadedContentData;
- (unsigned long long)headerStyle;
- (id)initWithTitle:(id)arg1 accessoryButtonType:(unsigned long long)arg2 gadgetType:(unsigned long long)arg3 headerStyle:(unsigned long long)arg4;
- (bool)isPerformingChanges;
- (void)loadContentData;
- (id)localizedTitle;
- (void)performChanges:(id /* block */)arg1;
- (unsigned long long)priority;
- (void)setAccessoryButtonAction:(id /* block */)arg1;
- (void)setAccessoryButtonType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setGadgetType:(unsigned long long)arg1;
- (void)setHeaderStyle:(unsigned long long)arg1;
- (void)setIsPerformingChanges:(bool)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (void)userDidSelectAccessoryButton:(id)arg1;

@end