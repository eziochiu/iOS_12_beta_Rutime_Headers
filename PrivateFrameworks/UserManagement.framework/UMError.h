/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMError : NSObject

+ (id)errorWithErrorCode:(unsigned long long)arg1;
+ (id)errorWithErrorCode:(unsigned long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithErrorCode:(unsigned long long)arg1 userInfo:(id)arg2;

@end
