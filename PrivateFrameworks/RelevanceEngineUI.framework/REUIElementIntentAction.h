/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUIElementIntentAction : REUIElementDonatedActionAction {
    INIntent * _intent;
}

@property (nonatomic, readonly) INIntent *intent;

- (void).cxx_destruct;
- (id)_newPerformer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 bundleIdentifier:(id)arg2 appName:(id)arg3 appIcon:(id)arg4;
- (id)intent;

@end
