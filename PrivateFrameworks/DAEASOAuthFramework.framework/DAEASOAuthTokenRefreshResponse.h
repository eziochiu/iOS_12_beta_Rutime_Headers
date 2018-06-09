/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

@interface DAEASOAuthTokenRefreshResponse : NSObject {
    NSString * _accessToken;
    NSError * _error;
    NSDate * _expiryDate;
    NSString * _refreshToken;
    NSDictionary * _responseBody;
    long long  _statusCode;
}

@property (nonatomic, readonly) NSString *accessToken;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, readonly) NSDictionary *responseBody;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)accessToken;
- (id)error;
- (id)expiryDate;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)refreshToken;
- (id)responseBody;
- (long long)statusCode;

@end
