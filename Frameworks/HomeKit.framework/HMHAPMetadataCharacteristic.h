/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHAPMetadataCharacteristic : NSObject {
    NSString * _chrDescription;
    NSString * _type;
}

@property (nonatomic, retain) NSString *chrDescription;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (id)chrDescription;
- (void)setChrDescription:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end