/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITextLayout : NSObject <SKUICachedLayout> {
    struct __CTFramesetter { } * _framesetter;
    double  _lineHeight;
    bool  _requiresTruncation;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct __CTFrame { } * _textFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _truncatedSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) bool requiresTruncation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __CTFrame { }*textFrame;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } textSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } truncatedSize;

+ (struct __CFAttributedString { }*)_newAttributedStringWithRequest:(id)arg1;
+ (struct __CFAttributedString { }*)newAttributedStringWithText:(id)arg1;

- (void)dealloc;
- (id)initWithLayoutRequest:(id)arg1;
- (double)lineHeight;
- (bool)requiresTruncation;
- (struct __CTFrame { }*)textFrame;
- (struct CGSize { double x1; double x2; })textSize;
- (struct CGSize { double x1; double x2; })truncatedSize;

@end
