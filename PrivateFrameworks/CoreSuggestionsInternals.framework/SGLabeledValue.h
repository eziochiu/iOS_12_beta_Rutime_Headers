/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGLabeledValue : NSObject {
    NSString * _label;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLabeledValue:(id)arg1;
- (id)label;
- (id)value;

@end