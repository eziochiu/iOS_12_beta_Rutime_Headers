/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSettingsDiff : NSObject <BSSettingDescriptionProvider, BSXPCCoding> {
    BSSettings * _changes;
    BSSettingsDiff * _otherSettingsDiff;
    Class  _settingsClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithChanges:(id)arg1 otherSettingsDiff:(id)arg2 settingsClass:(Class)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)evaluateWithInspector:(id)arg1 context:(void*)arg2;
- (id)init;
- (id)initWithChanges:(id)arg1 fromSettings:(id)arg2 toSettings:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (void)inspectChangesWithBlock:(id /* block */)arg1;
- (void)inspectOtherChangesWithBlock:(id /* block */)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
