/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingsItemProvider : HFItemProvider {
    id /* block */  _filter;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    NATreeNode * _parentNode;
    HMAccessorySettingGroup * _settingGroup;
    NSMutableSet * _settingItems;
    NSMutableDictionary * _tupleCache;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) NATreeNode *parentNode;
@property (nonatomic, retain) HMAccessorySettingGroup *settingGroup;
@property (nonatomic, retain) NSMutableSet *settingItems;
@property (nonatomic, retain) NSMutableDictionary *tupleCache;

+ (id)buildSettingsObjectForMediaProfileContainer:(id)arg1 settingGroup:(id)arg2 underNode:(id)arg3 cache:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)initWithMediaProfileContainer:(id)arg1 settingGroup:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)mediaProfileContainer;
- (id)parentNode;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setSettingGroup:(id)arg1;
- (void)setSettingItems:(id)arg1;
- (void)setTupleCache:(id)arg1;
- (id)settingGroup;
- (id)settingItems;
- (id)tupleCache;

@end
