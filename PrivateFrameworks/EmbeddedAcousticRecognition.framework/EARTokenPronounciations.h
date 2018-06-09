/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EARTokenPronounciations : NSObject {
    NSArray * _pronunciations;
    NSString * _token;
}

@property (nonatomic, copy) NSArray *pronunciations;
@property (nonatomic, copy) NSString *token;

- (void).cxx_destruct;
- (struct TokenProns { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; struct vector<quasar::PronChoice, std::__1::allocator<quasar::PronChoice> > { struct PronChoice {} *x_2_1_1; struct PronChoice {} *x_2_1_2; struct __compressed_pair<quasar::PronChoice *, std::__1::allocator<quasar::PronChoice> > { struct PronChoice {} *x_3_2_1; } x_2_1_3; } x2; struct vector<quasar::PronChoice, std::__1::allocator<quasar::PronChoice> > { struct PronChoice {} *x_3_1_1; struct PronChoice {} *x_3_1_2; struct __compressed_pair<quasar::PronChoice *, std::__1::allocator<quasar::PronChoice> > { struct PronChoice {} *x_3_2_1; } x_3_1_3; } x3; })_quasarProns;
- (id)initWithToken:(id)arg1 pronunciations:(id)arg2;
- (id)pronunciations;
- (void)setPronunciations:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
