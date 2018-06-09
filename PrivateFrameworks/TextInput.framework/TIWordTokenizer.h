/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIWordTokenizer : NSObject {
    unsigned long long  m_bufferOffset;
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
    }  m_inlineBuffer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  m_searchRange;
    NSString * m_string;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  m_tokenRange;
}

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })advanceToNextToken;
- (id)allTokensForString:(id)arg1;
- (id)init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCurrentToken;
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
