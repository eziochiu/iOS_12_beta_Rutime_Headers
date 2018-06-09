/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKEditOption : NSObject <NSSecureCoding> {
    CLKDevice * _device;
}

@property (nonatomic, readonly) NSString *dailySnapshotKey;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedNameForAction;
@property (nonatomic, readonly) long long swatchStyle;

+ (id)optionsDescription;
+ (struct CGSize { double x1; double x2; })sizeForSwatchStyle:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (bool)isValidOption;
- (id)localizedName;
- (id)localizedNameForAction;
- (bool)optionExistsInOSVersion:(unsigned int)arg1;
- (long long)swatchStyle;

@end
