/* made by EzioChiu.
 */

@protocol NUDeviceTrait <NSObject, NSCopying>

@required

- (unsigned long long)deviceTraitSize;
- (bool)isLandscape;

@end
