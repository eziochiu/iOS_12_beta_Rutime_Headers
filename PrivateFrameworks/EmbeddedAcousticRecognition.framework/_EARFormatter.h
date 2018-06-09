/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARFormatter : NSObject {
    struct unique_ptr<SpeechITN, std::__1::default_delete<SpeechITN> > { 
        struct __compressed_pair<SpeechITN *, std::__1::default_delete<SpeechITN> > { 
            struct SpeechITN {} *__value_; 
        } __ptr_; 
    }  _itn;
}

+ (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })convertStringsToQuasarTokens:(id)arg1;
+ (void)initialize;
+ (bool)supportedByQuasarConfig:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })formatWords:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; }*)arg1;
- (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })formatWords:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; }*)arg1 task:(id)arg2;
- (id)formattedRecognitionWithNBestList:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 task:(id)arg3;
- (id)formattedStringWithStrings:(id)arg1 task:(id)arg2;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })getOrthography:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; }*)arg1;
- (id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3;
- (id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3;
- (id)initWithQuasarConfig:(id)arg1;

@end
