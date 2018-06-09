/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USCategoryUsageReport : NSObject <NSSecureCoding> {
    NSArray * _applicationUsage;
    NSString * _categoryIdentifier;
    double  _totalUsageTime;
    NSDictionary * _webUsageByDomain;
}

@property (readonly, copy) NSArray *applicationUsage;
@property (readonly, copy) NSString *categoryIdentifier;
@property (readonly) double totalUsageTime;
@property (readonly, copy) NSDictionary *webUsageByDomain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(double)arg1 applicationUsage:(id)arg2 webUsageByDomain:(id)arg3;
- (id)applicationUsage;
- (id)categoryIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategoryIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsage:(id)arg3 webUsageByDomain:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (double)totalUsageTime;
- (id)webUsageByDomain;

@end
