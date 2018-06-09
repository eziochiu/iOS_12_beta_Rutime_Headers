/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAppWakeRequest : NSObject <NSCopying> {
    NSString * _appIdentifier;
    NSDictionary * _launchOptions;
    NSString * _processAssertionIdentifier;
    double  _processAssertionInterval;
    NSString * _processAssertionReason;
    bool  _shouldLaunchApp;
}

@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic, copy) NSDictionary *launchOptions;
@property (nonatomic, copy) NSString *processAssertionIdentifier;
@property (nonatomic) double processAssertionInterval;
@property (nonatomic, copy) NSString *processAssertionReason;
@property (nonatomic) bool shouldLaunchApp;

+ (id)familyContentRemovalRequestWithAppIdentifier:(id)arg1 accountPairs:(id)arg2;
+ (id)newsstandFinishRequestWithAppIdentifier:(id)arg1 issueIdentifiers:(id)arg2;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)launchOptions;
- (id)processAssertionIdentifier;
- (double)processAssertionInterval;
- (id)processAssertionReason;
- (void)setAppIdentifier:(id)arg1;
- (void)setLaunchOptions:(id)arg1;
- (void)setProcessAssertionIdentifier:(id)arg1;
- (void)setProcessAssertionInterval:(double)arg1;
- (void)setProcessAssertionReason:(id)arg1;
- (void)setShouldLaunchApp:(bool)arg1;
- (bool)shouldLaunchApp;

@end
