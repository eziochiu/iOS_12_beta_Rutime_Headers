/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSelfIdentificationDetection : NSObject {
    NSString * _context;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _contextRange;
    NSString * _name;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } contextRange;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)context;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })contextRange;
- (id)name;
- (void)setContext:(id)arg1;
- (void)setContextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setName:(id)arg1;

@end
