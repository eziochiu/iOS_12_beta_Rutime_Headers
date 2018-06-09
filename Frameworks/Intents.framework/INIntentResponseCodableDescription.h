/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResponseCodableDescription : INCodableDescription {
    NSMutableDictionary * _intentResponseCodableCodes;
    NSArray * _responseCodes;
}

@property (nonatomic, copy) NSArray *responseCodes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intentResponseCodeWithCode:(long long)arg1;
- (id)responseCodes;
- (void)setResponseCodes:(id)arg1;

@end
