/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDataDetectorMatch : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _labelRange;
    NSString * _labelString;
    unsigned int  _matchType;
    int  _parsecDomain;
    NSString * _parsecWikidataQid;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _valueRange;
    NSString * _valueString;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } labelRange;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) unsigned int matchType;
@property (nonatomic, readonly) int parsecDomain;
@property (nonatomic, readonly) NSString *parsecWikidataQid;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } valueRange;
@property (nonatomic, readonly) NSString *valueString;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLookupHintInDomain:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 labelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 labelString:(id)arg4 valueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 valueString:(id)arg6 qid:(id)arg7;
- (id)initWithMatchType:(unsigned int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 labelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 labelString:(id)arg4 valueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 valueString:(id)arg6;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })labelRange;
- (id)labelString;
- (unsigned int)matchType;
- (int)parsecDomain;
- (id)parsecWikidataQid;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })valueRange;
- (id)valueString;

@end
