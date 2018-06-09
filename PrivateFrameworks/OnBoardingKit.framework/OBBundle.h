/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBBundle : NSObject {
    NSBundle * _bundle;
    NSString * _bundleVersion;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *identifier;

+ (id)bundleAtPath:(id)arg1;
+ (id)bundleWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)bundle;
- (id)bundleVersion;
- (id)identifier;
- (id)initWithBundle:(id)arg1;
- (id)privacyFlow;

@end
