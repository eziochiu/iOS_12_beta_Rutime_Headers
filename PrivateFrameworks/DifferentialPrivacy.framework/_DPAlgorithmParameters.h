/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPAlgorithmParameters : NSObject {
    NSDictionary * _parameterDictionary;
    NSString * _serverAlgorithmString;
}

@property (nonatomic, readonly) NSDictionary *parameterDictionary;
@property (nonatomic, readonly, copy) NSString *serverAlgorithmString;

+ (id)algorithmParametersForKey:(id)arg1;
+ (id)algorithmParametersFromDictionary:(id)arg1;
+ (id)allAlgorithmNames;
+ (id)parametersFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)parameterDictionary;
- (id)serverAlgorithmString;

@end
