/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUIThemeFacetCacheKey : NSObject {
    unsigned long long  hashPrecalc;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  keyList;
    long long  themeIndex;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned long long)hash64;
- (id)initWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 themeIndex:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
