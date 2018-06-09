/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider {
    NSArray * _contentGadgets;
    <PXCMMCloudGadgetViewControllerDelegate> * _gadgetDelegate;
    unsigned long long  _sourceType;
}

@property (nonatomic, copy) NSArray *contentGadgets;
@property (nonatomic) <PXCMMCloudGadgetViewControllerDelegate> *gadgetDelegate;
@property (nonatomic, readonly) unsigned long long sourceType;

+ (id)new;

- (void).cxx_destruct;
- (id)contentGadgets;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)gadgetDelegate;
- (void)generateGadgets;
- (id)init;
- (id)initWithSourceType:(unsigned long long)arg1;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (void)setContentGadgets:(id)arg1;
- (void)setGadgetDelegate:(id)arg1;
- (unsigned long long)sourceType;

@end
