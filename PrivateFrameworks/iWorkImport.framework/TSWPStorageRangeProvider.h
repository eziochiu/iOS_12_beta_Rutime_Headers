/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageRangeProvider : NSObject {
    NSString * _identifier;
    NSObject * _object;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject *object;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)nextRange;
- (id)object;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)rangeEnd;
- (unsigned long long)rangeLength;
- (unsigned long long)rangeStart;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRangeStart:(unsigned long long)arg1;

@end
