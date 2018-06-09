/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDeprecatedComponent : NSObject {
    SXComponentClassification * _replacementClassification;
    NSString * _typeString;
}

@property (nonatomic, readonly) SXComponentClassification *replacementClassification;
@property (nonatomic, readonly) NSString *typeString;

+ (id)deprecatedComponentWithType:(id)arg1 withReplacementClassificationClass:(Class)arg2;

- (void).cxx_destruct;
- (id)initWithType:(id)arg1 withReplacementClassification:(Class)arg2;
- (id)replacementClassification;
- (id)typeString;

@end
