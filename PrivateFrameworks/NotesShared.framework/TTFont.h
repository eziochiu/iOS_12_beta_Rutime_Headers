/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTFont : NSObject <NSSecureCoding> {
    unsigned int  _fontHints;
    NSString * _fontName;
    id  _nativeFont;
    double  _pointSize;
}

@property (nonatomic, readonly) unsigned int fontHints;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, retain) id nativeFont;
@property (nonatomic, readonly) double pointSize;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fontHints;
- (id)fontName;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct Font { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; float x6; unsigned int x7; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2 hints:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (id)nativeFont;
- (double)pointSize;
- (void)saveToArchive:(struct Font { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; float x6; unsigned int x7; }*)arg1;
- (id)serialize;
- (void)setNativeFont:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (struct UIFont { Class x1; }*)convertFont:(struct UIFont { Class x1; }*)arg1 toBold:(bool)arg2 toItalic:(bool)arg3;
+ (void)font:(struct UIFont { Class x1; }*)arg1 isBold:(bool*)arg2 isItalic:(bool*)arg3;

- (struct UIFont { Class x1; }*)nativeFontForStyle:(unsigned int)arg1;
- (struct UIFont { Class x1; }*)nativeFontForStyle:(unsigned int)arg1 contentSizeCategory:(id)arg2;

@end
