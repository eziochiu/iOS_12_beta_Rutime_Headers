/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSEnhancedLoggingStateQueueEntry : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    double  _executeAfterDuration;
    NSDictionary * _parameters;
    NSString * _type;
}

@property (nonatomic) double executeAfterDuration;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic, retain) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (double)executeAfterDuration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 parameters:(id)arg2 executeAfterDuration:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (void)setExecuteAfterDuration:(double)arg1;
- (void)setParameters:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
