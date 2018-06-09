/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXInsertedDebugComponent : NSObject <SXDebugComponent, SXInsertableComponent> {
    SXJSONArray * _additions;
    SXJSONDictionary * _analytics;
    <SXComponentAnchor> * _anchor;
    SXComponentAnimation * _animation;
    SXJSONArray * _behaviors;
    SXComponentConditions * _conditions;
    NSString * _identifier;
    NSString * _layout;
    NSString * _style;
}

@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) <SXComponentAnchor> *anchor;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) SXJSONArray *behaviors;
@property (nonatomic, readonly) SXComponentClassification *classification;
@property (nonatomic, readonly) SXComponentConditions *conditions;
@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)additions;
- (id)analytics;
- (id)anchor;
- (id)animation;
- (id)behaviors;
- (id)classification;
- (id)conditions;
- (unsigned long long)contentRelevance;
- (id)identifier;
- (id)layout;
- (int)role;
- (void)setAnchor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayout:(id)arg1;
- (id)style;
- (unsigned long long)traits;
- (id)type;

@end
