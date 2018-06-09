/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAssetAttributes : NSObject <NSCopying> {
    NSString * _inputModeLevel;
    NSDictionary * _region;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *inputModeLevel;
@property (nonatomic, readonly) NSDictionary *region;
@property (nonatomic, readonly) NSString *type;

+ (bool)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(id /* block */)arg3;
+ (bool)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(bool)arg3;
+ (bool)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(bool)arg3 lenientMatch:(bool)arg4;
+ (bool)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(bool)arg3;
+ (id)assetAttributesWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3;

- (void).cxx_destruct;
- (bool)containMatchingAttributes:(id)arg1;
- (bool)containMatchingInputModeLevel:(id)arg1;
- (bool)containMatchingInputModeLevelIn:(id)arg1;
- (bool)containMatchingRegionIn:(id)arg1 shouldLenientlyMatchRegion:(id /* block */)arg2;
- (bool)containMatchingType:(id)arg1;
- (bool)containMatchingTypeIn:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3;
- (id)inputModeLevel;
- (bool)isEqual:(id)arg1;
- (id)region;
- (id)type;

@end
