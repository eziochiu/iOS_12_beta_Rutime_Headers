/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXBannerAdComponent : SXAdComponent <SXBannerAdComponent>

@property (nonatomic, readonly) unsigned long long adType;
@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONDictionary *advertising;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) <SXComponentAnchor> *anchor;
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
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) unsigned long long placementType;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) NSString *type;

+ (unsigned long long)bannerTypeFromString:(id)arg1;

- (unsigned long long)adType;
- (unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2;

@end
