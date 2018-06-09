/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryCategory : NSObject <HMFDumpState, HMObjectMerge, NSSecureCoding> {
    NSString * _categoryType;
    NSString * _name;
}

@property (nonatomic, copy) NSString *categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_isMediaAccessory;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)categoryType;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)name;
- (void)setCategoryType:(id)arg1;
- (void)setName:(id)arg1;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_isMediaAccessory;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)categoryForProductClass:(long long)arg1;
+ (id)categoryForProductInfo:(id)arg1;
+ (id)categoryIdentifierForCategory:(id)arg1;
+ (id)categoryWithCategoryIdentifier:(id)arg1;
+ (id)categoryWithIdentifier:(id)arg1;

@end
