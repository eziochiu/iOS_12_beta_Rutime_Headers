/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFDidGoToSiteFeedback : SFFeedback {
    NSString * _input;
}

@property (nonatomic, copy) NSString *input;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1;
- (id)input;
- (void)setInput:(id)arg1;

@end
