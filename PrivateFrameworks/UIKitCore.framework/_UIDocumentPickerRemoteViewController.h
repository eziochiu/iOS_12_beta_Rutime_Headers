/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerServiceInvalidating, _UIDocumentPickerViewControllerHost> {
    NSString * _identifier;
    UIViewController<_UIDocumentPickerRemoteViewControllerContaining> * _publicController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_didSelectPicker;
- (void)_didSelectURLBookmark:(id)arg1;
- (void)_didSelectURLWrapper:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (id)identifier;
- (void)invalidate;
- (id)publicController;
- (void)setIdentifier:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPublicController:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
