/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUIElementDonatedActionAction : REElementAction <REUISiriActionsPerformerDelegate> {
    UIImage * _appIcon;
    NSString * _appName;
    NSString * _bundleIdentifier;
    REUISiriActionsPerformer * _performer;
}

@property (nonatomic, readonly) UIImage *appIcon;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REUIElementDonatedActionActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) REUISiriActionsPerformer *performer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newPerformer;
- (void)_performWithContext:(id)arg1;
- (id)appIcon;
- (id)appName;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2 appIcon:(id)arg3;
- (id)performer;
- (void)setPerformer:(id)arg1;
- (void)siriActionsPerformer:(id)arg1 didFailWithError:(id)arg2;
- (bool)siriActionsPerformer:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)siriActionsPerformerDidSucceed:(id)arg1;
- (id)siriActionsPerformerWantsAlertBackgroundImage:(id)arg1;

@end
