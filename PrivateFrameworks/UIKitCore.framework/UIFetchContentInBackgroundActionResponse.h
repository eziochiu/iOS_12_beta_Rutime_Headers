/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIFetchContentInBackgroundActionResponse : BSActionResponse

@property (nonatomic, readonly) unsigned long long result;

+ (id)responseWithResult:(unsigned long long)arg1;

- (id)initWithBackgroundFetchResult:(unsigned long long)arg1;
- (id)initWithInfo:(id)arg1 error:(id)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (unsigned long long)result;

@end
