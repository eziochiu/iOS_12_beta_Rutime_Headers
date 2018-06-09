/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLGoogleOAuth2TokenResponse : NSObject {
    NSDictionary * _data;
    NSError * _error;
    NSString * _errorMessage;
    NSDate * _expiryDate;
    NSString * _refreshToken;
    long long  _statusCode;
    NSString * _token;
}

@property (readonly) NSDictionary *data;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property (readonly) NSDate *expiryDate;
@property (readonly) NSString *refreshToken;
@property (readonly) long long statusCode;
@property (readonly) NSString *token;

- (void).cxx_destruct;
- (id)data;
- (id)error;
- (id)errorMessage;
- (id)expiryDate;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)refreshToken;
- (long long)statusCode;
- (id)token;

@end
