/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding> {
    double  _startTime;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
}

@property (nonatomic) double startTime;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;

+ (bool)supportsSecureCoding;
+ (id)wordTimingInfoFrom:(id)arg1 timestamps:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)startTime;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;

@end
