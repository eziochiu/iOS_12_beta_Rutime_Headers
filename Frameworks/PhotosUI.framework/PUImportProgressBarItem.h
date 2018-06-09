/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportProgressBarItem : UIBarButtonItem <PUImportControllerNotificationsReceiver> {
    UIAlertController * _alertController;
    NSString * _currentDescriptiveText;
    PLRoundProgressView * _roundProgressView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
+ (struct CGSize { double x1; double x2; })size;

- (void).cxx_destruct;
- (void)dismissPopover;
- (void)importControllerProgressDidChange:(id)arg1 descriptiveText:(id)arg2 context:(id)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)presentProgressPopOver:(id)arg1;

@end
