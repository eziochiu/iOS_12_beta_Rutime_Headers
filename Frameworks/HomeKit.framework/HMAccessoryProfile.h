/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryProfile : NSObject <HFFavoritable, HFPrettyDescription, HFStateDumpSerializable, HMObjectMerge> {
    _HMAccessoryProfile * _accessoryProfile;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) _HMAccessoryProfile *accessoryProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)accessory;
- (id)accessoryProfile;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessoryProfile:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)services;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_hasSetFavorite;
- (bool)hf_isFavorite;
- (bool)hf_isValidObject;
- (id)hf_parentRoom;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;
- (bool)hf_shouldShowInFavorites;
- (id)hf_updateIsFavorite:(bool)arg1;

@end
