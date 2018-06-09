/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget> {
    unsigned long long  _accessoryButtonType;
    PXCMMCloudView * _cloudView;
    <PXCMMCloudGadgetViewControllerDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    NSString * _gadgetTitle;
    bool  _hasContentToDisplay;
    bool  _isCPLOn;
    unsigned long long  _priority;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic) unsigned long long accessoryButtonType;
@property (nonatomic, retain) PXCMMCloudView *cloudView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMCloudGadgetViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, copy) NSString *gadgetTitle;
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
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateCPLStatus;
- (unsigned long long)accessoryButtonType;
- (id)cloudView;
- (void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg1;
- (struct NSObject { Class x1; }*)contentViewController;
- (id)delegate;
- (id)gadgetSpec;
- (id)gadgetTitle;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)init;
- (id)localizedTitle;
- (unsigned long long)priority;
- (void)setAccessoryButtonType:(unsigned long long)arg1;
- (void)setCloudView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setGadgetTitle:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)viewDidLoad;

@end
