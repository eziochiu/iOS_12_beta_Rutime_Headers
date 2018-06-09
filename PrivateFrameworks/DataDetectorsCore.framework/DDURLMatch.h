/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDURLMatch : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _url;
}

- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 url:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)url;

@end
