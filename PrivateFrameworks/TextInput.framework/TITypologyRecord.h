/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecord : NSObject <NSSecureCoding> {
    double  _timestamp;
}

@property (nonatomic) double timestamp;

+ (id)recordClasses;
+ (bool)supportsSecureCoding;

- (void)applyToStatistic:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)shortDescription;
- (id)textSummary;
- (id)textSummaryForAutocorrection:(id)arg1;
- (double)timestamp;

@end
