/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSetupAccessoryBrowsingRequest : NSObject <NSSecureCoding> {
    NSArray * _filterCategories;
}

@property (nonatomic, readonly, copy) NSArray *filterCategories;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)filterCategories;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterCategories:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
