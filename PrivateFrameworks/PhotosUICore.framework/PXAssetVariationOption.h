/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetVariationOption : NSObject <NSCopying> {
    bool  _current;
    NSString * _localizedName;
    bool  _recommended;
    long long  _variationType;
}

@property (getter=isCurrent, nonatomic, readonly) bool current;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (getter=isRecommended, nonatomic, readonly) bool recommended;
@property (nonatomic, readonly) long long variationType;

+ (id)_localizedNameForVariationType:(long long)arg1;
+ (id)variationOptionWithType:(long long)arg1 recommended:(bool)arg2 current:(bool)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isCurrent;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVariationOption:(id)arg1;
- (bool)isRecommended;
- (id)localizedName;
- (long long)variationType;

@end
