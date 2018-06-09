/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USApplicationUsageReport : NSObject <NSSecureCoding> {
    double  _applicationUsageTime;
    NSString * _bundleIdentifier;
    double  _totalUsageTime;
    NSDictionary * _webUsageByDomain;
}

@property (readonly) double applicationUsageTime;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) double totalUsageTime;
@property (readonly, copy) NSDictionary *webUsageByDomain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_usApplicationReportCommonInitWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4;
- (double)applicationUsageTime;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (double)totalUsageTime;
- (id)webUsageByDomain;

@end
