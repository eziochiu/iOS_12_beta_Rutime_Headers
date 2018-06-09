/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QuerySection : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned long long  _sectionIndex;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) unsigned long long sectionIndex;

- (id)description;
- (unsigned long long)hash;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 sectionIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)sectionIndex;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSectionIndex:(unsigned long long)arg1;

@end
