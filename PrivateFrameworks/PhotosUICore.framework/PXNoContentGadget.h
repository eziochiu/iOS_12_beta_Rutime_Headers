/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNoContentGadget : NSObject <PXGadget> {
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    PXContentUnavailableView * _noContentView;
    double  _preferredContentHeight;
    unsigned long long  _priority;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) PXContentUnavailableView *noContentView;
@property (nonatomic, readonly) double preferredContentHeight;
@property (nonatomic) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (unsigned long long)accessoryButtonType;
- (void)configureWithButtonTitle:(id)arg1 buttonAction:(id /* block */)arg2;
- (struct NSObject { Class x1; }*)contentView;
- (id)delegate;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (bool)hasLoadedContentData;
- (id)init;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 preferredContentHeight:(double)arg3;
- (id)message;
- (id)noContentView;
- (double)preferredContentHeight;
- (unsigned long long)priority;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
