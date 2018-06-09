/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLImageSize : NSObject {
    long long  _pixelsHigh;
    long long  _pixelsWide;
}

@property (readonly) long long pixelsHigh;
@property (readonly) long long pixelsWide;

- (id)description;
- (unsigned long long)hash;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToImageSize:(id)arg1;
- (long long)pixelsHigh;
- (long long)pixelsWide;

@end
