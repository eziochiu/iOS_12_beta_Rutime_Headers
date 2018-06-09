/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUIMultisizeImageSetSizeAndIndex : NSObject {
    long long  _idiom;
    unsigned int  _index;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _subtype;
}

@property (nonatomic) long long idiom;
@property (nonatomic) unsigned int index;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) unsigned long long subtype;

- (id)description;
- (long long)idiom;
- (unsigned int)index;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 index:(unsigned int)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4;
- (void)setIdiom:(long long)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSubtype:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)subtype;

@end
