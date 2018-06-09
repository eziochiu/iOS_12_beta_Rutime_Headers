/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSnapshotRequestAction : BSAction

@property (nonatomic, readonly) FBSSceneSnapshotContext *context;
@property (nonatomic, readonly) unsigned long long type;

- (id)context;
- (id)initWithType:(unsigned long long)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (unsigned long long)type;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
