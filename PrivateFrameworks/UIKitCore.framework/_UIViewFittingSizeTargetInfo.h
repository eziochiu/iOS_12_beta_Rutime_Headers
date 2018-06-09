/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {
    bool  _dummy;
    float  _horizontalPriority;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    float  _verticalPriority;
}

@property (getter=isDummy, nonatomic) bool dummy;
@property (nonatomic, readonly) float horizontalPriority;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, readonly) float verticalPriority;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (float)horizontalPriority;
- (id)initWithTargetSize:(struct CGSize { double x1; double x2; })arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3;
- (bool)isDummy;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTargetInfo:(id)arg1;
- (void)setDummy:(bool)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (float)verticalPriority;

@end
