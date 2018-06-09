/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKResponseStatus : NSObject {
    NSString * _consoleDescription;
    bool  _isError;
    bool  _isPuntedError;
    bool  _isRecoverable;
    bool  _shouldFileRadar;
    long long  _statusCode;
}

@property (readonly, copy) NSString *consoleDescription;
@property (readonly) bool isAuthenticationError;
@property (readonly) bool isError;
@property (readonly) bool isGenericError;
@property (readonly) bool isPuntedError;
@property (readonly) bool isRecoverable;
@property (readonly) bool isSuccess;
@property (readonly) bool isUnsupportedClient;
@property (readonly) bool isValidationError;
@property (readonly) NSError *requestError;
@property (readonly) bool shouldFileRadar;
@property (readonly) long long statusCode;

+ (id)responseStatusForStatusCodeNumber:(id)arg1;

- (void).cxx_destruct;
- (id)consoleDescription;
- (id)initWithStatus:(long long)arg1 isRecoverable:(bool)arg2 isError:(bool)arg3 consoleDescription:(id)arg4 shouldFileRadar:(bool)arg5;
- (bool)isAuthenticationError;
- (bool)isError;
- (bool)isGenericError;
- (bool)isPuntedError;
- (bool)isRecoverable;
- (bool)isSuccess;
- (bool)isUnsupportedClient;
- (bool)isValidationError;
- (id)requestError;
- (bool)shouldFileRadar;
- (long long)statusCode;

@end