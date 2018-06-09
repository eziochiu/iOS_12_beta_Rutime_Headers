/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUIElementUserActivityAction : REUIElementDonatedActionAction {
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) NSUserActivity *userActivity;

- (void).cxx_destruct;
- (id)_newPerformer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2 appName:(id)arg3 appIcon:(id)arg4;
- (id)userActivity;

@end
