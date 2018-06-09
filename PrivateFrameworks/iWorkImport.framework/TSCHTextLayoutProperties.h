/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHTextLayoutProperties : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    int  _textFlags;
}

@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic) int textFlags;

+ (id)defaultPropertiesForWrapWidth:(double)arg1;
+ (id)placeTitleAtCenterPropertiesForWrapWidth:(double)arg1;

- (id)initWithTextFlags:(int)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 maxSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextFlags:(int)arg1;
- (int)textFlags;

@end
