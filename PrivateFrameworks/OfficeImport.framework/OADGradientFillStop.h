/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGradientFillStop : NSObject <NSCopying> {
    OADColor * mColor;
    float  mPosition;
}

+ (void)addStopWithColor:(id)arg1 position:(float)arg2 toArray:(id)arg3;

- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithColor:(id)arg1 position:(float)arg2;
- (bool)isEqual:(id)arg1;
- (float)position;
- (void)setStyleColor:(id)arg1;
- (bool)usesPlaceholderColor;

@end
