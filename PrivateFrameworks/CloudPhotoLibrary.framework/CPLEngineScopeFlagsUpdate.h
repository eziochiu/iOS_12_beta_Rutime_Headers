/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineScopeFlagsUpdate : NSObject {
    long long  _flags;
    long long  _updatedFlagsMask;
}

@property (nonatomic, readonly) NSArray *arrayDescription;
@property (nonatomic, readonly) long long flags;
@property (nonatomic, readonly) long long updatedFlagsMask;

+ (id)_arrayDescriptionForFlags:(long long)arg1 remainingFlags:(long long*)arg2;
+ (id)descriptionForFlags:(long long)arg1;
+ (id)flagsDescriptionMapping;

- (id)arrayDescription;
- (id)description;
- (long long)flags;
- (id)init;
- (id)initWithFlags:(long long)arg1;
- (void)setValue:(bool)arg1 forFlag:(long long)arg2;
- (long long)updatedFlagsFromFlags:(long long)arg1;
- (long long)updatedFlagsMask;
- (bool)valueForFlag:(long long)arg1;

@end
