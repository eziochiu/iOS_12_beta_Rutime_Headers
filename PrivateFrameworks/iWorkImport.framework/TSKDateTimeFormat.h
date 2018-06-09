/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKDateTimeFormat : TSKFormat <NSCopying> {
    NSString * _formatString;
}

@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) bool formatStringContainsAMPMSpecifier;
@property (nonatomic, readonly) bool formatStringContainsOnlyDate;

+ (id)nowFormatForLocale:(id)arg1;
+ (id)todayFormatForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)asDateTimeFormat;
- (id)formatString;
- (bool)formatStringContainsAMPMSpecifier;
- (bool)formatStringContainsOnlyDate;
- (unsigned long long)hash;
- (id)initWithFormatString:(id)arg1;
- (id)initWithFormatType:(int)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)stringFromDate:(id)arg1 locale:(id)arg2;

@end