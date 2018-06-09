/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSDisplayRenderOverlay : NSObject <BKSDisplayRenderOverlayDescribing, BKSDisplayRenderOverlayDismissAction, BSDescriptionProviding> {
    BKSDisplayRenderOverlayDescriptor * _descriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_descriptor, nonatomic, readonly) BKSDisplayRenderOverlayDescriptor *descriptor;
@property (nonatomic, readonly, retain) CADisplay *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (getter=isInterstitial, nonatomic, readonly) bool interstitial;
@property (nonatomic, readonly) bool lockBacklight;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;
@property (nonatomic, readonly) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (readonly) Class superclass;

+ (id)dismissActions;
+ (id)existingOverlayForDisplay:(id)arg1;

- (void).cxx_destruct;
- (id)_descriptor;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismiss;
- (void)dismissWithAnimation:(id)arg1;
- (id)display;
- (void)freeze;
- (id)initWithDescriptor:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isInterstitial;
- (bool)lockBacklight;
- (id)name;
- (id)overlayDescriptor;
- (void)present;
- (id)progressIndicatorProperties;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
