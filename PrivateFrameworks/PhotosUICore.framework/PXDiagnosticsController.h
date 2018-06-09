/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDiagnosticsController : NSObject <PXSettingsKeyObserver, UIGestureRecognizerDelegate> {
    NSArray * __diagnosticsServicesClasses;
    UITapGestureRecognizer * __gestureRecognizer;
    UIWindow * __window;
}

@property (nonatomic, readonly) NSArray *_diagnosticsServicesClasses;
@property (setter=_setGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_gestureRecognizer;
@property (nonatomic, readonly) UIWindow *_window;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_diagnosticsServicesClasses;
- (id)_gestureRecognizer;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_loadDiagnosticsServicesClasses;
- (void)_presentContextualViewControllerForService:(id)arg1;
- (void)_setGestureRecognizer:(id)arg1;
- (void)_updateGestureRecognizer;
- (id)_window;
- (id)consoleDescriptionForServices:(id)arg1;
- (id)currentItemProviders;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)presentContextualViewControllerForServices:(id)arg1;
- (id)servicesWithItemProviders:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)setupOnInternalDevicesWithWindow:(id)arg1;

@end
