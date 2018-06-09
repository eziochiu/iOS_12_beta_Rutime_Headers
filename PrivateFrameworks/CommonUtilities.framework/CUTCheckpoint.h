/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTCheckpoint : NSObject <NSCopying, NSSecureCoding> {
    bool  _assertsUseAfterFreeze;
    bool  _frozen;
    NSString * _name;
    bool  _shouldLogTouches;
    NSString * _uniqueIdentifier;
}

@property (nonatomic) bool assertsUseAfterFreeze;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool shouldLogTouches;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)_reportDateFormatter;
+ (id)_whitelistedClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3;
- (bool)_assertNotFrozen;
- (void)_freeze;
- (id)_freezeBacktrace;
- (id)_reportEndDate;
- (id)_reportMetadata;
- (id)_reportName;
- (id)_reportStartDate;
- (bool)assertsUseAfterFreeze;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFrozen;
- (id)name;
- (id)report;
- (void)setAssertsUseAfterFreeze:(bool)arg1;
- (void)setShouldLogTouches:(bool)arg1;
- (bool)shouldLogTouches;
- (id)uniqueIdentifier;

@end
