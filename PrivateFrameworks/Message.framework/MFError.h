/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFError : NSError {
    NSMutableDictionary * _moreUserInfo;
}

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5;
+ (id)errorWithException:(id)arg1;

- (void)dealloc;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)localizedDescription;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (id)recoveryAttempter;
- (void)setLocalizedDescription:(id)arg1;
- (void)setMoreInfo:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)useGenericDescription:(id)arg1;
- (id)userInfo;

@end
