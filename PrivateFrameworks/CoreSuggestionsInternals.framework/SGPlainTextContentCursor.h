/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPlainTextContentCursor : NSObject {
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directUniCharBuffer; 
        char *directCStringBuffer; 
        struct { 
            long long location; 
            long long length; 
        } rangeToBuffer; 
        long long bufferedRangeStart; 
        long long bufferedRangeEnd; 
    }  _ib;
    unsigned long long  _len;
    unsigned long long  _pos;
    NSIndexSet * _quoted;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _sig;
    struct __CFString { } * _str;
}

@property (nonatomic) unsigned long long pos;

- (void).cxx_destruct;
- (bool)backward;
- (bool)backwardToString:(id)arg1 consume:(bool)arg2;
- (void)backwardWhile:(id /* block */)arg1;
- (void)dealloc;
- (bool)forward;
- (bool)forwardToString:(id)arg1 consume:(bool)arg2;
- (void)forwardWhile:(id /* block */)arg1;
- (id)init;
- (id)initWithEntity:(id)arg1;
- (unsigned long long)pos;
- (void)seekToEnd;
- (void)seekToStart;
- (void)setPos:(unsigned long long)arg1;

@end
