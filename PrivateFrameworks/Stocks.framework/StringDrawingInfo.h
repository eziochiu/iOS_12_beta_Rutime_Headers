/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StringDrawingInfo : NSObject {
    UIColor * _color;
    UIFont * _font;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _string;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSString *string;

+ (id)stringDrawingInfoWithString:(id)arg1 color:(id)arg2 font:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (id)color;
- (id)font;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setString:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)string;

@end
