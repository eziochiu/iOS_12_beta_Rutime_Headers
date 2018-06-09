/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
 */

@interface AIDAServiceContext : NSObject <NSCopying, NSMutableCopying> {
    NSDictionary * _authenticationResults;
    bool  _shouldForceOperation;
    UIViewController * _viewController;
}

@property (nonatomic, readonly, copy) NSDictionary *authenticationResults;
@property (nonatomic, readonly) bool shouldForceOperation;
@property (nonatomic, readonly) UIViewController *viewController;

+ (bool)accessInstanceVariablesDirectly;
+ (id)contextWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)authenticationResults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldForceOperation;
- (id)viewController;

@end
