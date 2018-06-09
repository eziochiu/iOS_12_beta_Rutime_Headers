/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouFooterGadget : NSObject <PXGadget> {
    <PXGadgetDelegate> * _delegate;
    PXPhotosGlobalFooterView * _footerView;
    PXGadgetSpec * _gadgetSpec;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXPhotosGlobalFooterView *footerView;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (struct NSObject { Class x1; }*)contentView;
- (id)delegate;
- (id)footerView;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)initWithViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
