/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesDebugFeature : NSObject <PXProtoFeature> {
    NSString * _featureLocalizedTitle;
    UIColor * _featureTintColor;
    NSString * _localizedTitle;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long featureGroupIndex;
@property (nonatomic, readonly) long long featureKind;
@property (nonatomic, readonly) NSString *featureLocalizedTitle;
@property (nonatomic, readonly) NSArray *featurePeople;
@property (nonatomic, readonly) double featureScore;
@property (nonatomic, readonly) UIColor *featureSelectedTintColor;
@property (nonatomic, readonly) UIColor *featureTintColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedTypeStringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_tintColorForFeatureType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)featureGroupIndex;
- (long long)featureKind;
- (id)featureLocalizedTitle;
- (id)featureTintColor;
- (id)initWithLocalizedTitle:(id)arg1 type:(unsigned long long)arg2;
- (id)localizedTitle;
- (id)localizedTypeStringValue;
- (unsigned long long)type;

@end
