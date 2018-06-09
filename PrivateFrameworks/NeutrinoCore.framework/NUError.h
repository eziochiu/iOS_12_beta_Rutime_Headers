/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUError : NSError

@property (readonly) id invalidObject;
@property (readonly) NSString *nonLocalizedFailureReason;

+ (id)canceledError:(id)arg1 object:(id)arg2;
+ (id)duplicateError:(id)arg1 object:(id)arg2;
+ (id)errorWithCode:(long long)arg1 reason:(id)arg2 object:(id)arg3;
+ (id)errorWithCode:(long long)arg1 reason:(id)arg2 object:(id)arg3 underlyingError:(id)arg4;
+ (id)extraError:(id)arg1 object:(id)arg2;
+ (id)failureError:(id)arg1 object:(id)arg2;
+ (id)invalidError:(id)arg1 object:(id)arg2;
+ (id)mismatchError:(id)arg1 object:(id)arg2;
+ (id)missingError:(id)arg1 object:(id)arg2;
+ (id)rangeError:(id)arg1 object:(id)arg2;
+ (id)rootError:(id)arg1;
+ (id)timeoutError:(id)arg1 object:(id)arg2;
+ (id)underlyingError:(id)arg1;
+ (id)unknownError:(id)arg1 object:(id)arg2;
+ (id)unsupportedError:(id)arg1 object:(id)arg2;

- (id)description;
- (id)descriptionWithIndent:(long long)arg1;
- (id)errorCodeDescription;
- (id)invalidObject;
- (id)nonLocalizedFailureReason;

@end
