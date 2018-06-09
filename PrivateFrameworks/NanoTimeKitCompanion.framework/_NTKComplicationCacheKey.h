/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKComplicationCacheKey : NSObject <NSCopying> {
    NTKComplication * _complication;
    NSUUID * _deviceUUID;
    long long  _family;
}

@property (readonly) NTKComplication *complication;
@property (readonly) NSUUID *deviceUUID;
@property (readonly) long long family;

+ (id)keyWithFamily:(long long)arg1 complication:(id)arg2 forDevice:(id)arg3;

- (void).cxx_destruct;
- (id)complication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceUUID;
- (long long)family;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
