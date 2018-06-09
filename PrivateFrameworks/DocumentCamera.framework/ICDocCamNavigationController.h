/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamNavigationController : UINavigationController <DCUnsavedDataDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didReceiveMemoryWarning;
- (id)initWithDelegate:(id)arg1;
- (void)prepareForDismissal;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
