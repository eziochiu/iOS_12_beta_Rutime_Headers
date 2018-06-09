/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration {
    bool  _shouldIncludeActivitySummaryPrivateProperties;
    bool  _shouldIncludeActivitySummaryStatistics;
}

@property (nonatomic) bool shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) bool shouldIncludeActivitySummaryStatistics;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShouldIncludeActivitySummaryPrivateProperties:(bool)arg1;
- (void)setShouldIncludeActivitySummaryStatistics:(bool)arg1;
- (bool)shouldIncludeActivitySummaryPrivateProperties;
- (bool)shouldIncludeActivitySummaryStatistics;

@end
