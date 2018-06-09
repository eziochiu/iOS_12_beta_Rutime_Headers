/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFRangedDataFilter : MFBaseFilterDataConsumer {
    unsigned long long  _consumedLength;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)rangedFilterWithConsumer:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)rangedFilterWithConsumers:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (long long)appendData:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
