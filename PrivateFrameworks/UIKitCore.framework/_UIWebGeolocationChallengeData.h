/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIWebGeolocationChallengeData : NSObject {
    <WebAllowDenyPolicyListener> * _listener;
    NSURL * _requestingURL;
    NSString * _token;
    UIWindow * _window;
}

@property (nonatomic, retain) <WebAllowDenyPolicyListener> *listener;
@property (nonatomic, retain) NSURL *requestingURL;
@property (nonatomic, retain) NSString *token;
@property (nonatomic, retain) UIWindow *window;

- (void)dealloc;
- (id)listener;
- (id)requestingURL;
- (void)setListener:(id)arg1;
- (void)setRequestingURL:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)token;
- (id)window;

@end
