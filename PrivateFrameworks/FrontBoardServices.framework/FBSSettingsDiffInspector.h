/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSettingsDiffInspector : NSObject {
    bool  _iteratingObservers;
    BSMutableSettings * _observerInfo;
    BSMutableSettings * _otherSettingsObserverInfo;
}

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3;
- (void)_observeSetting:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)inspectDiff:(id)arg1 withContext:(void*)arg2;
- (void)observeOtherSetting:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)removeAllObservers;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
