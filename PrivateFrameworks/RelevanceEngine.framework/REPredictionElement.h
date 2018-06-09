/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REPredictionElement : NSObject {
    NSString * _bundleIdentifier;
    NSString * _identifier;
    NSString * _interaction;
    unsigned long long  _privacyBehavior;
    NSArray * _relevanceProviders;
    NSString * _section;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *interaction;
@property (nonatomic, readonly) unsigned long long privacyBehavior;
@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (nonatomic, retain) NSString *section;

+ (id)predictionElementFormElement:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)identifier;
- (id)interaction;
- (unsigned long long)privacyBehavior;
- (id)relevanceProviders;
- (id)section;
- (void)setSection:(id)arg1;

@end
