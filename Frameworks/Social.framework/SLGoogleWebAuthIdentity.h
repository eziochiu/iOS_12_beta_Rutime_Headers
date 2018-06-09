/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLGoogleWebAuthIdentity : NSObject {
    NSString * _displayName;
    NSString * _refreshToken;
    NSString * _token;
    NSString * _username;
    NSString * _youTubeUsername;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *refreshToken;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *youTubeUsername;

- (void).cxx_destruct;
- (id)displayName;
- (id)refreshToken;
- (void)setDisplayName:(id)arg1;
- (void)setRefreshToken:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setYouTubeUsername:(id)arg1;
- (id)token;
- (id)username;
- (id)youTubeUsername;

@end
