/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSizedImageDescription : NSObject <NSCopying> {
    bool  _hasBakedMask;
    bool  _isWideGamut;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) bool hasBakedMask;
@property (nonatomic, readonly) bool isWideGamut;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasBakedMask;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 isWideGamut:(bool)arg2 hasBakedMask:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSizedImageDescription:(id)arg1;
- (bool)isWideGamut;
- (struct CGSize { double x1; double x2; })size;

@end
