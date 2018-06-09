/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIHandleBackgroundURLSessionAction : BSAction

@property (nonatomic, readonly, copy) NSString *sessionIdentifier;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithSessionIdentifier:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)sessionIdentifier;

@end
