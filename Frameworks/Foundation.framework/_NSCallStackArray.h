/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSCallStackArray : NSArray {
    unsigned long long  _cnt;
    void ** _frames;
    unsigned long long  _ignore;
    char ** _pcstrs;
    bool  _wantSyms;
}

+ (id)arrayWithFrames:(void**)arg1 count:(unsigned long long)arg2 symbols:(bool)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
