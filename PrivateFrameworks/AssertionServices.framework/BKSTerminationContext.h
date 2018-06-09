/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSTerminationContext : NSObject <BSXPCCoding, NSCopying> {
    long long  _exceptionCode;
    NSString * _explanation;
    unsigned long long  _reportType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long exceptionCode;
@property (nonatomic, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long reportType;
@property (readonly) Class superclass;

+ (id)context;
+ (id)terminationAssertionContext;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (long long)exceptionCode;
- (id)explanation;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTerminationContext:(id)arg1;
- (unsigned long long)reportType;
- (void)setExceptionCode:(long long)arg1;
- (void)setExplanation:(id)arg1;
- (void)setReportType:(unsigned long long)arg1;

@end
