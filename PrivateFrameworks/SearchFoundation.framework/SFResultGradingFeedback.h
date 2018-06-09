/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFResultGradingFeedback : SFResultFeedback <NSCopying> {
    unsigned long long  _grade;
    NSString * _textFeedback;
}

@property (nonatomic, readonly) unsigned long long grade;
@property (nonatomic, copy) NSString *textFeedback;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)grade;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 grade:(unsigned long long)arg2;
- (id)initWithResult:(id)arg1 grade:(unsigned long long)arg2 textFeedback:(id)arg3;
- (void)setTextFeedback:(id)arg1;
- (id)textFeedback;

@end
