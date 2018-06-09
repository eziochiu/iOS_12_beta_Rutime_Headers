/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQuerySection : NSObject <NSCopying, NSSecureCoding> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned long long  _sectionIndexTitleIndex;
    NSString * _title;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) unsigned long long sectionIndexTitleIndex;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)sectionIndexTitleIndex;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSectionIndexTitleIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
