/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFErrorFeedback : SFFeedback {
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (void)setError:(id)arg1;

@end
