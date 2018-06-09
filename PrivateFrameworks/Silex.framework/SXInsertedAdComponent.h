/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXInsertedAdComponent : NSObject <SXBannerAdComponent, SXInsertableComponent> {
    unsigned long long  _adType;
    SXJSONArray * _additions;
    SXJSONDictionary * _advertising;
    SXJSONDictionary * _analytics;
    <SXComponentAnchor> * _anchor;
    SXComponentAnimation * _animation;
    unsigned long long  _bannerType;
    SXJSONArray * _behaviors;
    SXComponentConditions * _conditions;
    NSString * _identifier;
    NSString * _layout;
    NSString * _style;
}

@property (nonatomic, readonly) unsigned long long adType;
@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONDictionary *advertising;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, retain) <SXComponentAnchor> *anchor;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) unsigned long long bannerType;
@property (nonatomic, readonly) SXJSONArray *behaviors;
@property (nonatomic, readonly) SXComponentClassification *classification;
@property (nonatomic, readonly) SXComponentConditions *conditions;
@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (nonatomic, readonly) UIColor *debugColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *layout;
@property (nonatomic, readonly) unsigned long long placementType;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (unsigned long long)adType;
- (id)additions;
- (id)advertising;
- (id)analytics;
- (id)anchor;
- (id)animation;
- (unsigned long long)bannerType;
- (id)behaviors;
- (id)classification;
- (id)conditions;
- (unsigned long long)contentRelevance;
- (id)debugColor;
- (id)identifier;
- (id)initWithAdType:(unsigned long long)arg1;
- (id)layout;
- (unsigned long long)placementType;
- (int)role;
- (void)setAnchor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayout:(id)arg1;
- (id)style;
- (unsigned long long)traits;
- (id)type;

@end
