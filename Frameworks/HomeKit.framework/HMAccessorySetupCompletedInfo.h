/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding> {
    NSArray * _addedAccessoryUUIDs;
}

@property (nonatomic, retain) NSArray *addedAccessoryUUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addedAccessoryUUIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryList:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAddedAccessoryUUIDs:(id)arg1;

@end
